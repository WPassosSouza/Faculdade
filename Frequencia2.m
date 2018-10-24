x=linspace(0,4*pi,100);

y1=5*sin(x);
y2=sin(10*x);
y3=3*sin(3*x);


%1
subplot(2,2,1);
plot(x,y1,x,y2);
%
%2
subplot(2,2,2);
plot(x,y1,x,y2,x,y3);
%
%3
y=y1+y2+y3;
subplot(2,2,3);
plot(x,y);
%
%4
subplot(2,2,4);
plot(x,y1,x,y2,x,y3);
%
%5
subplot(2,2,5);
plot(x,y);
%
%
yFreq=fft(y);
%
%6
subplot(2,2,6);
plot(yFreq);

y=y1+y2;
yFreq=fftshift(fft(y));
yFiltrado=ifft(fftshift(fft(y)));

yFreq(20:40)=0;



