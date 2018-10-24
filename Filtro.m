%x=linspace(0,4*pi,100);
x=linspace(-4*pi,4*pi,300);
y=sin(x)+rand(size(x));% com ruido
%y=sin(x); % sem ruido
%y=sin(x.^2);% ruido quadratico... exponencial

plot(x,y);

n=50;
%kernel=ones(1,n)/n;
%kernel=[-1,1];
kernel=hanning(n);
kernel=kernel/sum(kernel);  % media dos pontos
yConv=conv(y, kernel, 'same');
%plot(x,y,x, yConv,'r');
plot(x,y);