#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

extern char nac1(){
// int a=98;
// char b= 'c';
// bool vys=kontrola(a,b);
// printf("%d \n",vys);
FILE *txt;
char name[30]="SUB.TXT";
int a,b,c;
char d,e,f;
printf("Zadej cisla \n");
scanf("%d %d %d", &a, &b, &c);
printf("Zadej char \n");
scanf(" %c %c %c", &d, &e, &f);
txt = fopen(name, "w");
fprintf(txt, "%d %d %d\n %c %c %c", a, b, c,d,e,f);
fclose(txt); 
return *name;
}