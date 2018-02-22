#include <stdio.h>


struct trojkat
{
   int a;
   int b;
   int c;
};

int obwod(struct trojkat x)
{
    int obw;
    obw=x.a+x.b+x.c;
 return obw;
}

int main()
{
    struct trojkat a;
    a.a=1;
    a.b=2;
    a.c=3;
    printf("%d", obwod(a));
    return 0;
}
