img=imread('C:/Users/Willian Notebook 1/Pictures/Imagens/lena.jpg');
%%
subplot(2,2,1);% 1 Quadrante
imshow(img);%mostrando imagem original
title('Imagen Original');
%%
subplot(2,2,2);% 2 Quadrante
imhist(img);
title('Histograma Original');
%%
subplot(2,2,3);% 3 Quadrante
tons_cinza=rgb2gray(img);
title('Imagen tons de Cinza');
imshow(tons_cinza);
%%
subplot(2,2,4);% 4 Quadrante
imhist(tons_cinza);
title('Histograma Tons de Cinza');
