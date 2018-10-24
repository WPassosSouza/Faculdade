original=imread('C:/Users/Willian Notebook 1/Pictures/folha.jpg');
modificada=imadjust(original, [0.9 0.3],[0.9 0.5]);
subplot(2,2,1)
imshow(original)
title('Imagem Original')
subplot(2,2,2)
imshow(modificada)
title('Imagem Alterada')
subplot(2,2,3)
imhist(original)
subplot(2,2,4)
imhist(modificada)

