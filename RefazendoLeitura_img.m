
[img, map]=imread('C:/Users/Willian Notebook 1/Pictures/123.jpg.jpg'); %fazor a leitura da imagem 
imshow(img); %mostra imagem

img=rgb2gray(img) % transforma a imagem em tons de cinza  
h=imhist(img); %gera o histograma
h=cumsum(h);
h=h/max(h);
corte=0,02;
menor=find(h<=corte, 1, 'last')-1;
maior=find(h>=1-corte,1,'firt')-1;

img=double(img);
img=255*(img-menor)/(maior-menor);
img =uint8(img);


subplot(1,2,1);
imshow(img);

subplot(1,2,2);
imshow(img);


