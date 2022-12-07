// Implementando uma pilha estática usando vetor
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// N  ira determinar a capacidade da pilha estática
#define N 1000

// Inicializa o top da pilha sendo -1
int top = -1;

// Inicializa a pilha usando vetor
int stack[N];


// Escopo das funções
void push();
int pop();
int peek();
bool isEmpty();
bool isFull();


int main(){
  printf("Vetor Estatico (Capacidade Total: %d)\n", N);
  int choice;

  while(1){
    printf("\nEscolha qualquer uma das opcoes a seguir:\n");
    printf(" 0: Sair\n");
    printf(" 1: Push\n");
    printf(" 2: Pop\n");
    printf(" 3: Peek\n");
    printf(" 4: Verifica se a pilha esta vazia\n");
    printf(" 5: Verifica se a pilha esta cheia\n");
    scanf("%d", &choice);

    switch (choice){
      case 0:
        exit(0);
        break;
      
      default:
        printf("Por favor escolha uma opcao valida!\n");
    }
  }
  
  return 0;
}

void push(){
  if(isFull==0){
    printf("Overflow State: Nao e possivel adicionar nenhum elemento a pilha\n");
  }
}

bool isFull(){
  if(top == N-1){
    printf("A pilha esta cheia: Overflow State\n");
    return true;
  }else{
    printf("A pilha nao esta cheia\n");
    return false;
  }
}