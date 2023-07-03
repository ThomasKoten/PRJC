#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>



int addRet(long a,int b){
return a+b;
}
 void add(long *a,int b){
*a=*a+b;
printf("*p_a=%ld, b=%d \n",*a,b);
}

int getHigh(long *a){
    // int* p_a2=(int*)a;
    // printf("%p\n",p_a2);
    // int p_a1=*(p_a2+3);
    // printf("%d",p_a1);
    // return p_a1;
return *((short*)a);

}
int main()
{
    long a;
    long *p_a=&a;
    char* byte;
        printf("%d",sizeof(*p_a));
    byte=(char*)p_a;
    int c;
    scanf("%ld", p_a);
     add(p_a,0);
     printf("*p_a=%ld,a=%d,one=%d\n",*p_a,&a,*byte);
     printf("%d\n",sizeof(*p_a));
     printf("%d\n",sizeof(p_a));
     printf("%d\n",sizeof(*byte));
    c=getHigh(p_a);
    printf("c=%d",c);

}