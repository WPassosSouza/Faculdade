rgb_img=imread('C:/Users/Willian Notebook 1/Pictures/Phoenix.jpg');
ycbcr_img = rgb2ycbcr(rgb_img);
subplot(3,2,2)
imshow(ycbcr_img), title('RBG -> YCbCr')
%%
subplot(3,4,6)
imshow(rgb_img(:,:,1));
title('Componente R')
%%
subplot(3,4,7)
imshow(rgb_img(:,:,2));
title('Componente G')
%%
subplot(3,4,8)
imshow(rgb_img(:,:,3));
title('Componente B')
%%
subplot(3,4,10)
imshow(ycbcr_img(:,:,1));
title('Componente Y')
%%
subplot(3,4,11)
imshow(ycbcr_img(:,:,2));
title('Componente Cb')
%%
subplot(3,4,12)
imshow(ycbcr_img(:,:,3));
title('Componente Cr')