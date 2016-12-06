struct no {
    int dado;
    struct no *prox;
}; typedef struct no tno;
struct pilha {
    tno *topo;
}; typedef struct pilha tpilha;
void iniciapilha(tpilha *p);
int pilhavazia(tpilha p);
void empilha (tpilha *p, int dado);
int desempilha (tpilha *p);
