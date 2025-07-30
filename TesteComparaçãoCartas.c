#include <stdio.h>
#include <string.h>

int main(){
    char estcart1[2]="A",estcart2[2]="B",nome1[50]="São Paulo",nome2[50]="Rio de Janeiro";
    int cod1=1,cod2=2,turi1=260,turi2=230;
    unsigned long int pop1=12400000,pop2=6211000;
    float area1=1521,area2=1200,percp1,percp2,dens1,dens2;
    long double pib1=8289000000,pib2=9493010000;

    nome1[strcspn(nome1, "\n")] = 0;
    nome2[strcspn(nome2, "\n")] = 0;
    percp1= (float)pib1/pop1;
    percp2= (float)pib2/pop2;
    dens1= (float)pop1/area1;
    dens2= (float)pop2/area2;

    printf("\nCarta 1:\n");
    printf("Estado: %s\n",estcart1);
    printf("Código: %s%d\n",estcart1, cod1);
    printf("Nome da cidade: %s\n",nome1);
    printf("População: %lu\n",pop1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: R$%.Lf\n",pib1);
    printf("Pontos turísticos: %d\n",turi1);
    printf("Densidade populacional: %.2f hab/km²\n",dens1);
    printf("PIB per capita: R$%.2f\n",percp1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n",estcart2);
    printf("Código: %s%d\n",estcart2, cod2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %lu\n",pop2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: R$%.Lf\n",pib2);
    printf("Pontos turísticos: %d\n",turi2);
    printf("Densidade populacional: %.2f hab/km²\n",dens2);
    printf("PIB per capita: R$%.2f\n",percp2);
    
    int escolha;
    printf("Seja bem vindo ao Super Trunfo!\n");
    printf("O que você deseja comparar entre cada carta?\n");
    printf("[1] Comparar população\n");
    printf("[2] Comparar área\n");
    printf("[3] Comparar PIB\n");
    printf("[4] Comparar pontos turísticos\n");
    printf("[5] Comparar densidade populacional\n");
    printf("[6] Comparar PIB per capita\n");
    printf("[0] Sair do programa\n");
    scanf("%d",&escolha);
    switch(escolha){
        case 1:
            if(pop1>pop2){
                printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
            } else if(pop2>pop1){
                printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
            } else {
                printf("Empate na população!\n");
            }
            break;
        case 2:
            if(area1>area2){
                printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
            } else if(area2>area1){
                printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
            } else {
                printf("Empate na população!\n");
            }
            break;
        case 3:
            if(pib1>pib2){
                printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
            } else if(pib2>pib1){
                printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
            } else {
                printf("Empate na população!\n");
            }
            break;
        case 4:
            if(turi1>turi2){
                printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
            } else if(turi2>turi1){
                printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
            } else {
                printf("Empate na população!\n");
            }
            break;
        case 5:
            if(dens2>dens1){
                printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
            } else if(dens1>dens2){
                printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
            } else {
                printf("Empate na população!\n");
            }
            break;
        case 6:
            if(percp1>percp2){
                printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
            } else if(percp2>percp1){
                printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
            } else {
                printf("Empate na população!\n");
            }
            break;
        case 0:
            printf("Obrigado por usar o sistema de cadastro de cidades!\n");
            break;
        default:
            printf("Entrada inválida, tente novamente.\n");
            break;
    }
    printf("Fechando...\n");
    
    return 0;
}
