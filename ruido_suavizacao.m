img=imread('C:/Users/Willian Notebook 1/Pictures/folha.jpg');

img=rgb2gray(img);
subplot(1,2,2);
imshow(img);
%-----------------------------------------------------------
imhist(img);
subplot(1,2,1);
imshow(img);
