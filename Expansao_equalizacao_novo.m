img =imread('C:/Users/Willian Notebook 1/Pictures/Imagens/moon.jpg');
kernel=[-1,-1,-1;-1,8,-1;-1,-1,-1];
imgConv = conv(img, kernel,1);
imshow(imgConv);
subplot(2,2,1);
imshow(imgConv);
subplot(2,2,2);
imhist(img);