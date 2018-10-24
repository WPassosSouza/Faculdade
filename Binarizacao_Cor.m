
%% Binarização por COR
img=imread('C:/Users/Willian Notebook 1/Pictures/Phonix.jpg');

imgHSV = rgb2hsv(img);

% Erosão

 elem = [0 1 0;
         1 1 1;
         0 1 0];

img = imdilate(img, elem);
img = imerode(img, elem);
%%

%imgBin = ...
    imgHSV(:, :, 1) > 0.15 & ...
    imgHSV(:, :, 1) < 0.17 & ...
    imgHSV(:, :, 2) > 0.5;
% imgBin = ...
%     imgHSV(:, :, 1) > 0.6 & ...
%     imgHSV(:, :, 1) < 0.75 & ...
%     imgHSV(:, :, 2) > 0.2;

%imgBin = imerode(imgBin, elem);
%imgBin = imdilate(imgBin, elem);



%subplot(1, 3, 1), imshow(img);
subplot(1, 3, 2), imshow(imgHSV(:, :, 1)); colormap('hsv');
%subplot(1, 3, 3), imshow(imgBin);

