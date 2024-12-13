#include <stdio.h>
#include <stdlib.h>


#define TAM 10

typedef struct{
    char instrutor [30];
    char nome [30];
    int periodos;
    char modalidade [30];
    float Notacorte;
    int id;
}Curso;

int inserirCurso(Curso *Cursos, &id, nome, &periodos, char *modalidade, Notacorte){
    int i = (*p)
    if ((*id) < TAM){
        strcpy(Cursos[i].nome, nome);
        Cursos[i].nomeid = id;
        Cursos[i].periodos = periodos;
        Cursos[i]. ----
        Cursos[i] ------ 
        ++(*p);
    }else{
        printf("Sem espaço\n");
        return 0;
        
    }
    
    returno 1;
    
    
}

    
    
}
void Linha(){
printf("===================================");
} 

int main() {
    int opcao;
    Curso Cursos[TAM];
    int id = 0;
    char nome[30]
    int idCurso;
    float NotaCorte;
    char modalidade;
    char instrutor;
    int periodos
    
    do{
     printf("===============MENU===============\n");
     printf("1 - Inserir um curso\n");
     printf("2 - Listar os cursos\n");
     printf("3 - Buscar um curso\n");
     printf("4 - Atualizar um curso\n");
     printf("5 - Excluir um curso\n");
     printf("6 - Comparar cursos\n");
     printf("7 - Pos-graduar\n");
     printf("8 - Sair\n");
     printf("Digite uma opcao: ");
     scanf("%d",&opcao);
     Linha ();
     switch(opcao){
         
         case 1: 
         printf("\nDados do Curso:\n");
                printf("Digite o nome do Curso: ");
                scanf("%s", nome);
                printf("Digite o Nome do instrutor:");
                scanf("%s", instrutor);
                printf("Periodos:");
                scanf("%d", &periodos);
                printf("Modalidade:");
                scanf("%s", modalidade);
                printf("Nota de corte do seu curso:");
                scanf("%f", NotaCorte);
                printf("Digite o id do Curso:")
                scanf("%d", &idCurso);
                printf("Nome: %s Nome do Instrutor: %s Periodos: %d Modalidade: %s Nota de Corte %f Id do Curso: %d", nome, instrutor, periodos, modalidade, NotaCorte, idCurso);
                break;
         
         
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
