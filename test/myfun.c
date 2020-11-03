#include"my.h"

#define MAX_NUM 200
const char *filename = "./user.dat";
const unsigned int UINT_MAX = 4294967295;
const char telnum_pre [42][3] = {
    "133", "149", "153", "173", "177", "180", "181", "189", "199", "130", "131", "132", "145", "155", "156", "166", "171", "175", "176", "185", "186", "166", "134", "135", "136", "137", "138", "139", "147", "150", "151", "152", "157", "158", "159", "172", "178", "182", "183", "187", "188", "198"
};

void input(){
   struct user* u;
   FILE* fp = fopen("count.txt","r+");
   int cnt=0;
   fscanf(fp,"%d",&cnt);
   fclose(fp);
   cnt++;
   u = (struct user *) malloc(sizeof(struct user));
   u->id = cnt;
   printf("input the name:  ");
   scanf("%s",u->name);
   printf("input the htel:  ");
   scanf("%s",u->htel);
   printf("input the tel:  ");
   scanf("%s",u->tel);
   save(u);
   
   fp = fopen("./count.txt","w");
   fprintf(fp,"%d",cnt);
   fclose(fp);
}

void save(struct user* u ){
    FILE* fp = fopen("./user.dat","a+");
    fprintf(fp,"%d %s %s %s\n",u->id,u->name,u->htel,u->tel);
    fclose(fp);
}
void output(){
   FILE* fp = fopen("./user.dat","r+");
   printf("id             name             htel             tel\n");
   int id=0;
   char name[16];
   char htel[16];
   char tel[16];
   int ret =0;
   while((ret = fscanf(fp,"%d%s%s%s",&id,name,htel,tel)) == 4)
    printf("%3d     %8s   %13s   %13s\n",id,name,htel,tel );
   fclose(fp);
}

int cmp(const void * a, const void * b){
    return strcmp( ((User *)a)->name, ((User *)b)->name) > 0  ? 1 : -1 ;
}

void mysort(){
   FILE *fp = fopen(filename,"r+");
 
   int cnt=0;
   User user[MAX_NUM];
   int id=0;
   char name[16];
   char htel[16];
   char tel[16];
   int ret =0;
   while((ret = fscanf(fp,"%d%s%s%s",&id,name,htel,tel)) == 4){

        user[cnt].id = id;
	strcpy(user[cnt].name , name);
	strcpy(user[cnt].htel , htel);
	strcpy(user[cnt].tel , tel);
       cnt++;
   }
   qsort(user,cnt,sizeof(User),cmp);
  for (int i = 0; i < cnt; i++) {
        fprintf(stdout, "%10d %14s %16s %12s\n", user[i].id, user[i].name, user[i].htel, user[i].tel);
    }
   printf("Sort success\n");
   fclose(fp);
}

void randdat(){
   User *randUser = (User *)malloc(sizeof(User));
   srand(time(NULL));
   randUser->id = rand();
   int len = rand()%8 + 1;
   for(int i=0; i<len; i++){
     randUser->name[i] = rand()%26 + 'a';
     if(i == 0) randUser->name[i] -= 32;
   }
   randUser->name[len] = '\0';
   strncpy(randUser->htel,"0791-",5);
   for(int i=5; i<13; i++){
       randUser->htel[i] = rand()%10 + '0';
   }
   randUser->htel[13] = '\0';
   strncpy(randUser->tel, telnum_pre[rand() % 42], 3);
   for (int i = 3; i < 11; i++) {
        randUser->tel[i] = (char)(rand() % 10 + '0');
    }
   randUser->tel[11] = '\0';
   fprintf(stdout, "%d %s %s %s\n", randUser->id, randUser->name, randUser->htel, randUser->tel);
}
