img =imread('C:/Users/Willian Notebook 1/Pictures/PulmaoRaioX.jpg');

img2 = imadjust(img,[.2 .3 0; .6 .7 1],[]);
matriz_um=ones(3,3);

img2=rgb2gray(img2);
convolucao1=conv2(double(img2), matriz_um);

subplot(2,2,1);
imshow(img);
title('Imagem Original');

subplot(2,2,2);
imshow(img2);
title('Imagem Usando Convolucao')

subplot(2,2,3);
imshow(uint8(255*(convolucao1/max(convolucao1(:)))));
