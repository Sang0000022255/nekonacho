#include<stdio.h>
#include<math.h>

main()
{
float a,b,c;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
if ((a+b<=c) || (a+c<=b) || (b+c<=a))
printf("Khong hop con nha ba le");
else
{
if (a==b||a==c||b==c)
if (a!=b || a!=c || b!=c)
if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
printf ("Can");
else
printf ("Deu");
else
if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
printf ("vuong");
}
return 0;

}