#include <stdio.h>
#include "pilhadinamica.h"
int main () {
    tpilha a, *p=&a;
    int i, num, n;
    iniciapilha(p);
    for (i=0; i<10; i++) empilha(p, i);
    for (i=0; i<10; i++) printf("\t%d\n",desempilha(p));
    return 0;
}
