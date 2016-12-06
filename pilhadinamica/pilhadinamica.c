#include <stdlib.h>
#include "pilhadinamica.h"
void iniciapilha(tpilha *p){
    p->topo=NULL;
}
int pilhavazia(tpilha p) {
    return p.topo==NULL;
}
void empilha (tpilha *p, int va) {
    tno *aux;
    aux=(tno*)malloc(sizeof(tno));
    if (!aux) exit(1);
    aux->dado = va;
    aux->prox = NULL;
    if(pilhavazia(*p)) p->topo = aux;
    else {
        aux->prox = p->topo;
        p->topo = aux;
    }
}
int desempilha (tpilha *p) {
    tno *aux;
    int va;
    if (!pilhavazia(*p))  {
        aux=p->topo;
        va=p->topo->dado;
        p->topo=aux->prox;
        free(aux);
        return va;
    }
    else return -1;
}
