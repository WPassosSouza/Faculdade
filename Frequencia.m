x=linspace(0,2*pi,100);



y1=5*sin(x);
y2=sin(10*x);
y=y1+y2;

subplot(2,2,1);
plot(x,y1,x,y2);
subplot(2,2,2);
plot(x,y);

subplot(2,2,3);
plot(x,y1*100,x,y2*100);
