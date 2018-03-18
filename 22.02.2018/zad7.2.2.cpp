#include <stdio.h>
#include <stdlib.h>

typedef struct trojkat
{
   int a;
   int b;
   int c;
}tr;

void funkcja(tr troj1, tr *troj2)
{
    troj2->a=troj1.a;
    troj2->b=troj1.b;
    troj2->c=troj1.c;
}

int main()
{
    tr a;
    tr *q=malloc(sizeof(tr));
    a.a=1;
    a.b=2;
    a.c=3;
    funkcja(a,q);
    printf("%d", q->a);
    printf("%d", q->b);
    printf("%d", q->c);
    return 0;
}
