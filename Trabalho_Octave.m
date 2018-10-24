img=imread('C:/Users/Willian Notebook 1/Pictures/Pelourinho_Seculo19.jpg'); % lendo a imagem do diretorio
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%subplot(2,2,1);
%imshow(img);
%title('Imagem Original');

%%
%subplot(2,2,2);
%img2=imsharpen(img);%Aguçar a imagem usando máscara de nitidez
%imshow(img2);
%title('Imagem Macara de Nitidez');

%%
%subplot(2,2,3);
equalizada=histeq(img, 255); %Melhorar contraste usando a equalização do histograma com ou sem niveis
%imshow(equalizada);
%title('Imagem Equalizada')% melhor resultado...

%%
%subplot(2,2,4);                      
%imhist(equalizada);                         %% Usando Histograma para as imagens...
%title('Gerando Histograma de Análise');

%subplot()

brilho=imadjust(equalizada);
imshow(brilho);




