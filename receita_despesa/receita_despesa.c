#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct projetos{
    char nome[50];
    float dinh_disp;
};

void main(){
    int menu;
    int cont_menu=0;
    struct projetos p[9];
    for(int cont=0; cont<=9; cont++){
        p[cont].dinh_disp=0;
    }
    while(menu!=5){
        printf("\nDigite um numero para o menu: \n");
        printf("\n1-Digitar nome dos projetos.\n2-Ver dinheiro disponivel dos projetos.\n3-Adicionar dinheiro em algum projeto.\n4-Subtrair dinheiro de algum dos projetos.\n5-Sair do programa.\n");
        scanf("%i", &menu);
        if(menu==1){
            if(cont_menu<1){
                cont_menu++;
                for (int cont=0; cont <= 9; cont++){
                printf("Digite o nome do projeto %i: ", cont+1);
                setbuf(stdin, NULL);
                fgets(p[cont].nome, 30, stdin);
                }
            }else{
                    printf("\nOs nomes dos projetos ja foram digitados.\n");
                }
        }
        else if(menu==2){
            for(int cont=0; cont<=9; cont++){
                printf("Valor do projeto %s: %.2f\n", p[cont].nome, p[cont].dinh_disp);
            }
        }
        else if(menu==3){
            int cont=0;
            float valor=0;
            printf("Digite o numero do projeto que voce quer adicionar dinheiro: ");
            scanf("%i", &cont);
            printf("Digite o valor que voce quer adicionar: ");
            scanf("%f", &valor);
            p[cont-1].dinh_disp=p[cont-1].dinh_disp+valor;
        }
        else if(menu==4){
            int cont=0;
            float valor=0;
            printf("Digite o numero do projeto que voce quer tirar dinheiro: ");
            scanf("%i", &cont);
            printf("Digite o valor que voce quer tirar: ");
            scanf("%f", &valor);
            p[cont-1].dinh_disp=p[cont-1].dinh_disp-valor;
        }
        else if(menu==5){
            break;
        }
    }
}