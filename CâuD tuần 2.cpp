#include <stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 if(9<n && n<100)
 {
  switch(n/10)
  {
   case 1: printf("Muoi "); break;
   case 2: printf("Hai Muoi "); break;
   case 3: printf("Ba Muoi "); break;
   case 4: printf("Bon Muoi "); break;
   case 5: printf("Nam Muoi "); break;
   case 6: printf("Sau Muoi "); break;
   case 7: printf("Bay Muoi "); break;
   case 8: printf("Tam Muoi "); break;
   case 9: printf("Chin Muoi "); break;   
  }
  switch(n%10)
  {
   case 1: printf("Mot"); break;
   case 2: printf("Hai"); break;
   case 3: printf("Ba"); break;
   case 4: printf("Bon"); break;
   case 5: printf("Lam"); break;
   case 6: printf("Sau"); break;
   case 7: printf("Bay"); break;
   case 8: printf("Tam"); break;
   case 9: printf("Chin"); break;
  }
 }
 else printf("khong hop le");
 return 0;
}