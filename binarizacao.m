img=imread('C:/Users/Willian Notebook 1/Pictures/Phonix.jpg');
imggray=rgb2gray(img);
%imshow(imggray);
%subplot(2,2,1);
%imhist(img);
%subplot(2,2,2);
%imhist(imggray);
%subplot(imshow(img));

imgBin= ~im2bw(img,graythresh(img));
%imshow(imgBin)

objetos=regionprops(imgBin);
for i=1:numel(objetos)
  
    if objetos(i).Area >5 && objetos(i).Area<10
        rectangle('Position', objetos(i).BoundingBox, 'EdgeColor', 'r');
    end
end

%%

c = objetos(1).BoundingBox(1);
l = objetos(1).BoundingBox(2);
w = objetos(1).BoundingBox(3);
h = objetos(1).BoundingBox(4);

imshow(imgBin);


%%
%% Binarização por COR
img = imread('Cubo-mágico.jpg');

imgHSV = rgb2hsv(img);

imgBin = ...
    imgHSV(:, :, 1) > 0.15 & ...
    imgHSV(:, :, 1) < 0.17 & ...
    imgHSV(:, :, 2) > 0.5;
% imgBin = ...
%     imgHSV(:, :, 1) > 0.6 & ...
%     imgHSV(:, :, 1) < 0.75 & ...
%     imgHSV(:, :, 2) > 0.2;

imgBin = imerode(imgBin, elem);
imgBin = imdilate(imgBin, elem);

subplot(1, 3, 1), imshow(img);
subplot(1, 3, 2), imshow(imgHSV(:, :, 1)); colormap('hsv');
subplot(1, 3, 3), imshow(imgBin);







