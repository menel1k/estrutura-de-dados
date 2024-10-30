#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

No* criarLista() {
    return NULL;
}

No* inserirLista(No* lista, int valor) {
    No *first = (No*) malloc(sizeof(No));
   if (first == NULL) {
    printf("Erro: memória não alocada.\n");
    return lista;
}


first->valor = valor;
first->prox = NULL;

if (lista == NULL) { 
   return first;
} else {

  No *temp = lista;
  while (temp->prox != NULL) {
    temp = temp->prox;
}
  temp->prox = first;
  return lista;
 }
}

void exibirLista(No* lista) {
   No *temp = lista; 
   while (temp != NULL) { 
    printf("%d -> ", temp->valor); 
    temp = temp->prox;
}
 printf("NULL\n");
}

int verificarVazia(No* lista) {
    return lista == NULL;
}

int main() {
    No* lista = criarLista(); 

    lista = inserirLista(lista, 5);
    lista = inserirLista(lista, 10);
    lista = inserirLista(lista, 15);

    exibirLista(lista);

    if (verificarVazia(lista)) {
        printf("A lista está vazia.\n");
    } else {
        printf("A lista não está vazia.\n");
    
}
    return 0;
}