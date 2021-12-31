#include<stdio.h>
void main()
{  
   int maths,phy,chem,cs;
   printf("enter your marks");
   scanf("%d%d%d%d",&maths,&phy,&chem,&cs);
   if (maths<35)
   {
   printf("failed in maths\n");
  }
   if (phy<35)
  { 
  printf("failed in phy\n");
  }
  if (chem<35)
  {
  	printf("failed in chem\n");
  }
  if (cs<35)
  {
  	printf("failed in cs\n");
  }
}
