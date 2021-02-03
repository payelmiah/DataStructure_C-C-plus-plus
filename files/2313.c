#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c) && (b+c>a) && (c+a>b))
    {
        if(a==b||b==c)
        {
            printf("Valido-Isoceles\n");
            printf("Retangulo: N\n");
        }
        else
        {
            printf("Valido-Escaleno\n");
            printf("Retangulo: S\n");
        }
    }
    else
    {
        printf("Invalido\n");
    }
    return 0;
}
