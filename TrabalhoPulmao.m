img=imread('C:/Users/Willian Notebook 1/Pictures/PulmaoRaioX.jpg');
%ycbcr_img = rgb2ycbcr(img);
%img=imadjust(img);
img=rgb2gray(img);
histograma=imhist(img);
histograma=cumsum(histograma);
histograma=histograma/max(histograma);
%salpimenta=imnoise(img, 'salt & pepper', 5);
%gausiano=imnoise(img, 'gaussian');

%imshow(salpimenta);
%imshow(gausiano);
%imshow(img);
matriz_um=ones(3,3);%% aplicação da matriz de '1s' para embassamento da img
%filtro_passa_alta=[-1,-1,-1;0,0,0;1,1,1];
%filtro_passa_alta2=[-1,0,1;-1,0,1;-1,0,1];
%filtro_passa_alta3=[-1,0,-1;-1,0,-1;-1,0,-1];

convolucao1=conv2(double(img), matriz_um);%utilizando matriz de (1-uns)
%convolucao2=conv2(double(img), filtro_passa_alta);% utilizando filtro_passa_alta
%convolucao3=conv2(double(img), matriz_um);
%convolucao_final= sqrt()

%subplot(2,2,1);
imshow(uint8(255*(convolucao1/max(convolucao1(:)))));

%subplot(2,2,2);
%imshow(ycbcr_img);




%subplot(1,1,1);
%mostra=imshow(img);




%equalizada=histeq(original,N_niveis);
%subplot(2,2,1)
%imshow(original)
%title('Imagem Original')
%subplot(2,2,2)
%imshow(equalizada)
%title('Imagem Equalizada')
%subplot(2,2,3)
%imhist(original)
%subplot(2,2,4)
%imhist(equalizada)