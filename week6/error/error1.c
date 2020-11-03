#include "../6.h"

int *p;
int x;

int main(){
   int *q;
   p = &x;
    q = (int *) malloc(sizeof(int ));
   *p = 1;
   *q = 2;
    printf("%d   %d",*p,*q);
   return 0;
}
