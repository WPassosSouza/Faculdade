img=imread('C:/Users/Willian Notebook 1/Pictures/123.jpg.jpg');

%kernel=ones(7)/49; % diminuindo o ruido faz o processamento...
kernel=[-1,-1,-1;-1,8,-1;-1,-1,-1];
imgConv = conv(img, kernel,'valid'); % 'same' > SEM O MSM TAMANHO|'valid' > os pixeis validos
img=im2double(img);

img=imshow(img);
img=imshow(imgConv);

subplot(1,2,1);
subplot(1,2,2);
