rgb_img= imread('C:/Users/Willian Notebook 1/Pictures/Phoenix.jpg');
igualiza1=histeq(rgb_img(:,:,1));
igualiza2=histeq(rgb_img(:,:,2));
igualiza3=histeq(rgb_img(:,:,3));
subplot(3,4,6)
imhist(rgb_img(:,:,1));
title('Histograma R Original')
subplot(3,4,7)
imhist(rgb_img(:,:,2));
title('Histograma G Original')
subplot(3,4,8)
imhist(rgb_img(:,:,3));
title('Histograma B Original')
subplot(3,4,10);
imhist(igualiza1);
title('Histograma R eq')
subplot(3,4,11)
imhist(igualiza2);
title('Histograma G eq')
subplot(3,4,12)
imhist(igualiza3);
title('Histograma B eq ')
rgb_img(:,:,1)=igualiza1;
rgb_img(:,:,2)=igualiza2;
rgb_img(:,:,3)=igualiza3;

subplot(3,2,2)
imshow(rgb_img);
title('Imagem Equalizada') ;