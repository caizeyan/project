#include"my.h"
int main(){
   int k;
   printf("1: input()  2: output()  3: mysort()  4: randdat()  0: exit\n\nInput your choice:");
   while(scanf("%d",&k) && k != 0){
       switch (k) {
            case 0: 
                return 0;
                break;
 	    case 1:
                input();
                break;
            case 2:
                output();
                break;
            case 3:
                mysort();
                break;
            case 4:
                randdat();
                break;
            default:
                break;
        }
        printf("1: input()  2: output()  3: mysort()  4: randdat()  0: exit\n\nInput your choice:");
   }
}
