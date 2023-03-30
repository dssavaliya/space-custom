#include<stdio.h>
main()
{
	int i,j,k;
	for(i='A';i<='E';i++)
     {
     	for(k='D';k>=i;k--)
     	{
     		printf(" ");
		 }
       for(j=i;j>='A';j--)
       {
       	printf("%c",j);
	   }
	   printf("\n");
	 }
}
