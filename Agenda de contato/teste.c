#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

struct Endereco {
     char rua[30];
     int numero;
     char comp[30];
     char bairro[30];
     int cep;
     char cidade[30];
     char estado[3];
     char pais[30];
    };
struct Telefone {
     int dd;
     int tel;
    };
struct Aniversario {
     int dd;
     int mes;
     int ano;
     };
struct Pessoa {
    char nome[30];
    char email[30];
    struct Endereco ende;
    struct Telefone fone;
    struct Aniversario data;
    char obs[50];
    };

    int main() {
         setlocale(LC_ALL,"Portuguese");
         struct Pessoa contatos[100];
         struct Pessoa aux;
         int troca;
         int opcao,op;/// VARIAVEL NA ESCOLHA DO MENU
         int indice=0;///VARIAVEL QUE CONTEM O VALOR DO INDICE DO VETOR
         int i,j,encontrou=0;///INDICA A QDE DE REGISTRO
         char pesq[30];///GUARDAR O NOME DA PESQUISA
         int cod;
         int d,m;

         do {
          system("cls");
          printf("---###--AGENDA DE CONTATOS--###---\n");

          printf ("\n   ***********************************\n");
          printf ("   * OFICIAL DE ESTRUTURA DE DADOS 2 *\n");
          printf ("   ***********************************\n");
          printf("\n       ####### MENU #######\n\n");
          printf("   ( 1 ) CADASTRAR CONTATO \n");
          printf("   ( 2 ) CONSULTAR UM CONTATO POR NOME \n");
          printf("   ( 3 ) LISTAR TODOS OS CONTATOS \n");
          printf("   ( 4 ) ORDENAR POR NOME (MÉTODO BOLHA) \n");
          printf("   ( 5 ) ORDENAR POR NUMERO TELEFONE (INSERT SORT OU SELECTION SORT) \n");
          printf("   ( 6 ) EXCLUIR UM CONTATO \n");
          printf("   ( 7 ) SAIR \n");


          printf("\n ESCOLHA UMA OPCAO:");
          scanf("%d",&opcao);
          fflush(stdin);

          switch(opcao) {
                   case 1:
                        system("cls");
                        printf("\n--**** CADASTRO DE CONTATO ****--");
                        printf("\n CODIGO:%i\n",indice);
                        printf("\n NOME:");
                        gets(contatos[indice].nome);
                        printf("\n EMAIL:");
                        gets(contatos[indice].email);
                        printf("\n TELEFONE:");
                        printf("\n DD:");
                        scanf("%d",&contatos[indice].fone.dd);
                        printf("\n TEL:");
                        scanf("%d",&contatos[indice].fone.tel);
                        printf("\n ANIVERSARIO: ");
                        scanf("%i/%i/%i", &contatos[indice].data.dd, &contatos[indice].data.mes, &contatos[indice].data.ano);
                        indice++;
                        fflush(stdin);
                        break;

                    case 2:
                         system("cls");
                         printf("\n--**** CONSULTAR UM CONTATO POR NOME ****--");
                         printf("\nPESQUISAR:");
                         gets(pesq);
                         for(i=0; i<indice; i++) {
                         if(strcmp(pesq,contatos[i].nome)==0){
                         printf("\n CODIGO:%i",i);
                         printf("\n NOME:%s",contatos[i].nome);
                         printf("\n EMAIL:%s",contatos[i].email);
                         printf("\n TEL:%d %d",contatos[i].fone.dd,contatos[i].fone.tel);
                         printf("\n ANIVERSARIO DD/MM/ANO : %i/%i/%i", contatos[i].data.dd, contatos[i].data.mes, contatos[i].data.ano);
                         encontrou = 1;
                         }
                        } if (encontrou==0) {
                               printf("\n NENHUM REGISTRO ENCONTRADO!\n\n");
                              }
                        printf("\n");
                        system("pause");
                        break;

                  case 3:
                       printf("--**** LISTAR TODOS OS CONTATOS ****-- \n");
                       for(i=0; i<indice; i++){
                       printf("\nCODIGO: %i",i);
                       printf("\n NOME:%s",contatos[i].nome);
                       printf("\n EMAIL:%s",contatos[i].email);
                       printf("\n TEL:%d %d",contatos[i].fone.dd,contatos[i].fone.tel);
                       printf("\n ANIVERSARIO: %i/%i/%i", contatos[i].data.dd, contatos[i].data.mes, contatos[i].data.ano);
                       printf("\n--------------------------------\n");
                       }
                       system("pause");
                       break;

                case 4:
                      printf("\n----###S2S2--- ORDENAR POR NOME (MÉTODO BOLHA)----###S2S2---\n");
                        system ("cls");
                        printf("\nLISTA DOS CONTATOS\n");
                        for(i=0;i<3;i++){
                printf("\nvetor[%d] - NOME: %s\n",i,contatos[i].nome);
                //printf("\nDIA: %d\n\n",contato[indice].dt.dia);
            }

            do{
                troca=0;
                for(i=0;i<2;i++){
                    if(strcmp(contatos[i].nome,contatos[i+1].nome)>0){
                      strcpy(aux.nome,contatos[i].nome);
                      //aux.data=contatos[i].data;

                      strcpy(contatos[i].nome,contatos[i+1].nome);
                      //contatos[i].data=contatos[i+1].data;

                      strcpy(contatos[i+1].nome,aux.nome);
                      //contatos[i+1].data=aux.data;
                      troca=1;

                    }
                }

            }while(troca==1);


            printf("\nCONTATOS ORDENADOS:\n");
            for(i=0;i<3;i++){
                printf("\nNOME: %s\n\n",contatos[i].nome);
                //printf("\nDIA: %d\n\n",contato[indice].dt);
            }

                        break;

                case 5:
                    printf("\n----###S2S2--- ORDENAR POR NUMERO TELEFONE (INSERT SORT OU SELECTION SORT)----###S2S2---\n");
                    system ("cls");

                    printf("\nAgora escolha um método de ordenação\n");
                    printf("\n( 1 ) - INSERT SORT");
                    printf("\n( 2 ) - SELECTION SORT\n");
                    printf("\n\nSua opcao: ");
                    scanf("%d",&op);
                    system ("cls");


                    if(op==1) {
                    //INSERT SORT
                    printf("===============================\n");
                    printf("\nINSERT SORT");
                        for(i = 1; i < indice; i++){
                        aux = contatos[i];
                        j = i - 1;
                        while(j >= 0 && strcmp(contatos[j].nome, aux.nome) > 0){
                        contatos[j+1] = contatos[j];
                        j--;
                    }
                        contatos[j+1] = aux;
               }
                    printf("\n\n");
                      for(i=0; i < indice; i++){
                       printf("%s\n", contatos[i].nome);
                       system("pause");
                   }
                   printf("\n\n\n");

                }

                    else if(op==2) {
                    //SELECTION SORT
                    printf("\nSELECTION SORT");
                   printf("\n=================================\n");
                     printf("Ordenando por Lista Telefonica Pelo DDD da Operadora: \n");
                    for(i=1; i < contatos[i].fone.dd; i++){
                       for(j=i+1; j < indice; j++){
                          if(contatos[i].fone.dd > contatos[j].fone.dd){
                             contatos[0] = contatos[j];
                             contatos[j] = contatos[i];
                             contatos[i] = contatos[0];
                           }
                      }
               }
               printf("\n\n");
                 for(i=0; i < indice; i++){
                 printf("%d\n", contatos[i].fone.dd);
                 system("pause");
               }
               printf("\n\n\n");

                }
                    break;

            case 6:
                printf("\n--###----EXCLUIR CONTATO----###--\n");
                printf("\nINFORMA O CODIGO:");
                scanf("%i",&cod);
                printf("\n NOME:%s",contatos[cod].nome);
                printf("\n EMAIL:%s",contatos[cod].email);
                printf("\n TEL:%d %d",contatos[cod].fone.dd,contatos[cod].fone.tel);
                printf("\n ANIVERSARIO: %i/%i/%i", contatos[cod].data.dd, contatos[cod].data.mes, contatos[cod].data.ano);
                printf("\nDeseja EXCLUIR CONTATO? SIM(1)/NAO(2): ");
                scanf("%i",&i);
                if(i==1){
              for(i=cod; i<indice; i++){
                  strcpy(contatos[i].nome,contatos[i+1].nome);
                  strcpy(contatos[i].email,contatos[i+1].email);
                  contatos[i].fone.dd=contatos[i+1].fone.dd;
                  contatos[i].fone.tel=contatos[i+1].fone.tel;
                  contatos[i].data.dd=contatos[i+1].data.dd;
                  contatos[i].data.mes=contatos[i+1].data.mes;
                  contatos[i].data.ano= contatos[i+1].data.ano;
                  }
                  indice--;
                  }
                  break;
            case 7:
                  printf("\n----###S2S2--- SAIR----###S2S2---");
                  //***********************
                  //*    Sobre Sistema    *
                  //***********************

                  system ("cls");
                  printf ("\n     Informações dos Alunos:\n\n");
                  printf ("     RA: 00000000000 - Matheus da Silva Pereira\n");
                  printf ("     RA: 00000000000 - Danilo da Silva de Sousa\n");
                  printf ("     RA: 00000000000 - Francisco Fagner Duarte Salviano\n");
                  printf ("     Unidade: FACULDADE PITÁGORAS - SÃO LUIS\n");
                  printf ("     Curso: Ciência da Computacao - N\n");
                  printf ("     Disciplina: Algoritmos e Estrutura de Dados 2\n");
                  printf ("     Professora: Ms.Pedriana Castro\n\n");
                  printf ("     ***********************************\n");
                  printf ("     * OFICIAL DE ESTRUTURA DE DADOS 2 *\n");
                  printf ("     ***********************************\n");

                  getchar();
                  printf("\nObrigado pela visita , Volte Sempre!!\n");
                  system("exit");
                  break;



                  system("cls");

                  printf("Ordenando por Nome: ");

               break;

    }     }while(opcao!=7);
         return 0;
}
