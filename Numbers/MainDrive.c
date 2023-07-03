#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "modul.h"
#include "Hodina_2.h"
int main()
{
    int a = 45;

    while (a != 0)
    {
        printf("\n1. zadej čísla \n2. načti čísla z text souboru\n3. ověř čísla (bod 2.)\n");
        scanf("%d", &a);

        int i=99;
        char c='c';
        char* p_c=&c;

        switch (a)
        {
        case 1:
              char name= nac1();
            break;
        case 2:
            break;
        case 3:
            bool por = kontrola(i, c);
            printf("%d",por);
            break;
        default:
            break;
        }
    }
}