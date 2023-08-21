#include <stdio.h>
#include <math.h>

int main() {
unsigned long long int max1 = (unsigned long long int) (pow(2,64) -1);
printf("highest number represented by unsigned long long int is %llu\n", max1);

long long int max2 = (long long int)(pow(2,63) -1);
long long int min = (long long int)(pow(2,63)*-1);
printf("highest number represented by signed long long int is %lld\n", max2);
printf("lowest number represented by signed long long int is %lld\n", min);


return 0;
}