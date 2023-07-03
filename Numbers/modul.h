#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdbool.h>

extern bool kontrola(int i1, char c1){
bool equal=(i1==(int)c1);
return equal;
}