#include<stdio.h>
main()
{
	int i,j,k;
	for(i='E';i>='A';i--)
     {
     	for(k='D';k>=i;k--)
     	{
     		printf(" ");
		 }
       for(j='A';j<=i;j++)
       {
       		printf("%c",j);
	   }
	   printf("\n");
	 }
}
