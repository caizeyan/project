#ifndef _MYuser

#define _MYuser
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
typedef struct user{
   int id;
   char name[16];
   char htel[16];
   char tel[12];
}User;

void input();

void save( struct user * u);

void mysort();

void output();

void randdat();

#endif
