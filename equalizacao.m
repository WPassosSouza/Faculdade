function img=equalizacao(img);
  
  h=imhist(img);
  h=cumsum(h);
  h=h/max(h);