#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year;

	printf("Checking whether a year is leap year or not. Please input a year\n");
    scanf("%d",&year);
	
	if ( year%400 == 0)
	   printf("%d is a leap year.\n",year);
    else if (year%100 == 0)
       printf("%d is not a leap year.\n",year);
    else if (year%4 == 0 )
       printf("%d is a leap year.\n",year);
    else 
       printf("%d is not a leap year.\n",year);
   
   system ("pause");
   return 0;
 
}
