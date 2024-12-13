#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAM 50

typedef struct{
    
    char docente [30];
    char curso [30];
    int periodos;
    char modalidade [30];
    float Notacorte;
}Elemento;

void Linha(){
printf("==============================");
} 

int main() {
    int id;
    int opcao;
    Elemento elementos[TAM];
    int periodos = 0;
    do{
     printf("===============MENU===============\n");
     printf("1 - inserir um curso\n");
     printf("2 - listar os cursos\n");
     printf("3 - buscar um curso\n");
     printf("4 - atualizar um curso\n");
     printf("5 - excluir um curso\n");
     printf("6 - comparar cursos\n");
     printf("7 - pos-graduar\n");
     printf("8 - sair\n");
     printf("Digite uma opcao: ");
     scanf("%d",&opcao);
     switch(opcao){
         Linha ();
         case 1: printf("Inserindo um curso\n"); break;
         case 2: printf("Inserindo um curso\n"); break;
         case 3: printf("Inserindo um curso\n"); break;
         case 4: printf("Inserindo um curso\n"); break;
         case 5: printf("Inserindo um curso\n"); break;
         case 6: printf("Inserindo um curso\n"); break;
         case 7: printf("Inserindo um curso\n"); break;
         case 8: printf("Saindo do sistema\n"); break;
         default: printf("valor invalido"); break;
     }
}while(opcao != 8);
    return 0;
}
