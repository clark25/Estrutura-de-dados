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
  if(isFull==1){
    printf("Overflow State: Nao e possivel adicionar nenhum elemento a pilha\n");
  }else{
    int x;
    printf("Digite o elemento a ser inserido na pilha: ");
    scanf("%d", &x);
    top+=1;
    stack[top] = x;
  }
}

int pop(){
  if(isEmpty==1){
    printf("Underflow State: A pilha ja esta vazia, nenhum elemento pode ser removido dela");
  }else{
    int x = stack[top];
    printf("Desempilhando o elemento %d da pilha\n",x);
    top--;
    return x;
  }
}

bool isEmpty(){
  if(top == -1){
    return true;
  }else{
    return false;
  }
}

bool isFull(){
  if(top == N-1){
    return true;
  }else{
    return false;
  }
}