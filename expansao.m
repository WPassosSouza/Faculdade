
 img=imread('C:/Users/Willian Notebook 1/Pictures/123.jpg');
 
 imshow(img);


function expansao(img, corte)
 
  img=rgb2gray(img);
  h=cumsum(h);
  menor=find(h<= corte,1, 'last' )-1;
  maior=find(h>= 1-corte,1, 'fisrt')-1;
  h=imhist(h);
  img=double(img);
  img=255*(img-menor)/(maior-menor);
  img=uint8(img);
  