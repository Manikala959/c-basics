#include<stdio.h>
void main()
{
	 int marks;
	 printf("enter marks");
	 scanf("%d",&marks);
	 if(marks>100)
	 {
	 	printf("invalid marks");
	 }
	 else if(marks<=100&&marks>=90)
	 {
	 	printf("o grade");
	 }
      else if (marks>=80&&marks<90)
    {
      	printf("a grade");
	}
	  else if (marks>=70&&marks<80)
	{
	  	printf("b grade");
    }
	  else if (marks>=60&&marks<70)
	{
	  	printf("c grade");
	  	
	}
	  else if (marks>=50&&marks<60)
	{
	  	printf("d grade");
	}
	  else if (marks<50)
	{
	  	printf("fail");
	 }
}
