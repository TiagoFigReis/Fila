typedef struct no{
int dado;
struct no *prox;
}tno;
typedef struct fila{
tno *com;
tno *fim;
}tfila;
void iniciafila(tfila *f);
int filavazia(tfila f);
int inserir(tfila *f,int n);
int remover (tfila *f);
void elementos(tfila f);