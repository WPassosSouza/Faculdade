[x,y]=meshgrid(-10:1:10, -10:1:10);
z=x.^2 +y.^2;
surf(x,y,z, 'EdgeColor', 'none');
colorbar;
shading  interp;

