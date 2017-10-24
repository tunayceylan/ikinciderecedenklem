#include <stdio.h>
#include <conio.h>
#include <math.h>
	int main()
{
	float x1,x2;
	int a,b,c,delta;
	printf("ax^2+bx+c\n");
	printf("a Katsayisini Giriniz:"); scanf("%d",&a);
	printf("b Katsayisini Giriniz:"); scanf("%d",&b);
	printf("c Sabi Sayisini Giriniz:"); scanf("%d",&c);
	delta=b*b-4*a*c;
	printf("delta=%d\n", delta);
	x1=(b+sqrt(delta))/2;
	x2=(b-sqrt(delta))/2;
	printf("x1= %f\n", x1);
	printf("x2=%f\n", x2);
	getch();
}
