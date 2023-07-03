#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    FILE *txt;
    FILE *bin;
    int a;
    double b;
    float c;
    int buffer;
    scanf("%d %lf %f", &a, &b, &c);
    txt = fopen("SOUBOR.TXT", "w");
    fprintf(txt, "%d %lf %f \n", a, b, c);

    fclose(txt);
    bin = fopen("BINRAR.DAT", "wb+");
    fwrite(&a,sizeof(a),1,bin);
    fwrite(&b,sizeof(b),1,bin);
    fwrite(&c,sizeof(c),1,bin);
 fread(&buffer, sizeof(a),1,txt); // Same as this As
     printf("%d\n", buffer);
    fclose(bin);
}