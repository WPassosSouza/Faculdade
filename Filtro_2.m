img=imread('C:/Users/Willian Notebook 1/Pictures/123.jpg.jpg');

h=-1*ones(3);
h(2,2)=8;
filtro=imfilter(img,h);
img=imshow(filtro)