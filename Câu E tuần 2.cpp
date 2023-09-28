#include <stdio.h>
int main()
{
 int t, n;
 scanf("%d", &t);
 if(t<=1 || t<=12)
 {
  switch(t)
  {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
   printf(" 31", t); break;
  case 4: case 6: case 9: case 11:
   printf(" 30 ", t); break;
  case 2:
   printf(" ") ;
   scanf("%d", &n);
   if(n%4==0)
    printf(" 29 ", t);
   else printf("28 ", t); break;
  }
 }
 else printf("None");
 return 0;
}