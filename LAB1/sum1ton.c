#include <stdio.h>

int main()
{

   int i , sum = 0 , n=15;
	
	for (i=1 ; i <=n ; ++i) {

		sum += i;
          }

	printf( "Sum of numbers from 1 to %d i %d \n" , n , sum );
	return 0;
}