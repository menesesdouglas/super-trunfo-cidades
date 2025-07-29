#include <stdio.h>
#include <string.h>

int main(){
    char estcart1[2],estcart2[2],nome1[50],nome2[50];
    int cod1,cod2,turi1,turi2;
    unsigned long int pop1;
    unsigned long int pop2;
    float area1,area2,pib1,pib2,percp1,percp2,dens1,dens2,invdens1,invdens2,super1,super2;

    printf("Bem vindo ao sistema de cadastro de cidades!\n");
    printf("Digite o nome da primeira cidade: ");
    fgets(nome1,50,stdin);
    printf("Digite uma letra de 'A' a 'H' para o estado da primeira cidade: ");
    scanf("%s", &estcart1);
    getchar();
    printf("Digite o codigo, sendo um número de '01' a '04', da primeira cidade: ");
    scanf("%d",&cod1);
    getchar();
    printf("Digite a população da primeira cidade: ");
    scanf("%lu", &pop1);
    getchar();
    printf("Digite a área da primeira cidade em km²: ");
    scanf("%f",&area1);
    getchar();
    printf("Digite o PIB da primeira cidade: ");
    scanf("%f",&pib1);
    getchar();
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &turi1);
    getchar();

    printf("Digite o nome da segunda cidade: ");
    fgets(nome2,50,stdin);
    printf("Digite uma letra de 'A' a 'H' para o estado da segunda cidade: ");
    scanf("%s",&estcart2);
    getchar();
    printf("Digite o codigo, sendo um número de '01' a '04', da segunda cidade: ");
    scanf("%d",&cod2);
    getchar();
    printf("Digite a população da segunda cidade: ");
    scanf("%lu", &pop2);
    getchar();
    printf("Digite a área da segunda cidade em km²: ");
    scanf("%f",&area2);
    getchar();
    printf("Digite o PIB da segunda cidade: ");
    scanf("%f",&pib2);
    getchar();
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &turi2);
    getchar();

    nome1[strcspn(nome1, "\n")] = 0;
    nome2[strcspn(nome2, "\n")] = 0;
    percp1= (float)pib1/pop1;
    percp2= (float)pib2/pop2;
    dens1= (float)pop1/area1;
    dens2= (float)pop2/area2;
    invdens1=(float)area1/pop1;
    invdens2=(float)area2/pop2;
    super1=(float)pop1+area1+pib1+turi1+percp1+invdens1;
    super2=(float)pop2+area2+pib2+turi2+percp2+invdens2;

    printf("\nCarta 1:\n");
    printf("Estado: %s\n",estcart1);
    printf("Código: %s%d\n",estcart1, cod1);
    printf("Nome da cidade: %s\n",nome1);
    printf("População: %lu\n",pop1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: R$%.2f\n",pib1);
    printf("Pontos turísticos: %d\n",turi1);
    printf("Densidade populacional: %.2f hab/km²\n",dens1);
    printf("PIB per capita: R$%.2f\n",percp1);
    printf("Super Trunfo: %.2f\n", super1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n",estcart2);
    printf("Código: %s%d\n",estcart2, cod2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %lu\n",pop2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: R$%.2f\n",pib2);
    printf("Pontos turísticos: %d\n",turi2);
    printf("Densidade populacional: %.2f hab/km²\n",dens2);
    printf("PIB per capita: R$%.2f\n",percp2);
    printf("Super Trunfo: %.2f\n", super2);

    printf("\nComparação:\n");
    printf("População:\n");
    printf("Cidade 1: %lu\n", pop1);
    printf("Cidade 2: %lu\n", pop2);
    if(pop1>pop2){
        printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
    } else if(pop2>pop1){
        printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
    } else {
        printf("Empate na população!\n");
    }
    printf("Área:\n");
    printf("Carta 1: %.2f km²\n", area1);
    printf("Carta 2: %.2f km²\n", area2);
    if(area1>area2){
        printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
    } else if(area2>area1){
        printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
    } else {
        printf("Empate na área!\n");
    }
    printf("PIB:\n");
    printf("Carta 1: R$%.2f\n", pib1);
    printf("Carta 2: R$%.2f\n", pib2);
    if(pib1>pib2){
        printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
    } else if(pib2>pib1){
        printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
    } else {
        printf("Empate no PIB!\n");
    }
    printf("Pontos turísticos:\n");
    printf("Carta 1: %d\n", turi1);
    printf("Carta 2: %d\n", turi2);
    if(turi1>turi2){
        printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
    } else if(turi2>turi1){
        printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
    } else {
        printf("Empate nos pontos turísticos!\n");
    }
    printf("Densidade populacional:\n");
    printf("Carta 1: %.2f hab/km²\n", dens1);
    printf("Carta 2: %.2f hab/km²\n", dens2);
    if(dens1<dens2){
        printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
    } else if(dens2<dens1){
        printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
    } else {
        printf("Empate na densidade populacional!\n");
    }
    printf("PIB per capita:\n");
    printf("Carta 1: R$%.2f\n", percp1);
    printf("Carta 2: R$%.2f\n", percp2);
    if(percp1>percp2){
        printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
    } else if(percp2>percp1){
        printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
    } else {
        printf("Empate no PIB per capita!\n");
    }
    printf("Super Trunfo:\n");
    printf("Carta 1: %.2f\n", super1);
    printf("Carta 2: %.2f\n", super2);
    if(super1>super2){
        printf("Carta %s%d (%s) venceu!\n",estcart1,cod1,nome1);
    } else if(super2>super1){
        printf("Carta %s%d (%s) venceu!\n",estcart2,cod2,nome2);
    } else {
        printf("Empate no Super Trunfo!\n");
    }

    printf("Obrigado por usar o sistema de cadastro de cidades!\n");
    
    return 0;
}
