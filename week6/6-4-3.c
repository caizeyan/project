#include "6.h"

static void callback1(void){
    printf("--------callback----\n");
}

static void callback2(void){
    printf("-----callback2------\n");
}

static void callback3(void){
    printf("-----callback3------\n");
}

static void __attribute__ ((destructor)) des(){
   printf("-------des-------\n");
}

int main(void){
 atexit(callback1);
 atexit(callback2);
 printf("--data in buffer--");
 exit(1);
 atexit(callback3);
}
