#include "../6.h"

#define N 10

int a[10],i;

int main(){
   for(i =0; i<N; i++){
    a[i]  =i +1;
    }
  a[N] = 123456789;
   printf("i = %d\n",i);
	// i = 12356789;
	//printf("%d \n", a[i]);
    printf("%d \n", a[N]);

  return 0;
}
