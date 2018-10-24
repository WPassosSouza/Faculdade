img=imread('C:/Users/Willian Notebook 1/Pictures/123.jpg');
imshow(img);

img=rgb2gray(img);

corte=0.03;% quanto de perda de pixel em '%'
h=imhist(img);
h=cumsum(img);
h=h/max(h);

menor=find(h<=corte, 1, 'last')-1;
maior=find(h>=1-corte,1,'firt')-1;

img=double(img);
img=255*(img-menor)/(maior-menor);
img =uint8(img);

subplot(1,2,2);
imhist(img);
