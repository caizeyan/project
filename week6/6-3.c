#include "6.h"

int main(int arg, char * argv[]){
    int num1 = 0;
    int num2 = 0;
    if(arg < 3){
    printf("error\n");
    return 0;
    }
   /* for(int i=0; i<strlen(argv[1]); i++){
      num1 =num1*10 + argv[1][i]-'0';
    }
    for(int i=0; i<strlen(argv[2]); i++){
      num2 =num2*10 + argv[2][i]-'0';
    }
	*/
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    printf("%d + %d = %d",num1,num2,num1+num2);
}
