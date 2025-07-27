#include <stdio.h>
#include <string.h>

int main(){
    char estcart1[1],estcart2[1],nome1[50],nome2[50];
    int cod1,cod2,turi1,turi2;
    unsigned long int pop1;
    unsigned long int pop2;
    float area1,area2,pib1,pib2,percp1,percp2,dens1,dens2,invdens1,invdens2,super1,super2;

    printf("Bem vindo ao sistema de cadastro de cidades!\n");
    printf("Digite o nome da primeira cidade: ");
    fgets(nome1,50,stdin);
    getchar();
    printf("Digite uma letra de 'A' a 'H' para o estado da primeira cidade: ");
    scanf("%1s", &estcart1);
    getchar();
    printf("Digite o codigo, sendo um número de '01' a '04', da primeira cidade: ");
    scanf("%d",&cod1);
    printf("Digite a população da primeira cidade: ");
    scanf("%lu", &pop1);
    printf("Digite a área da primeira cidade em km²: ");
    scanf("%f",&area1);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%f",&pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &turi1);
    getchar();

    printf("Digite o nome da segunda cidade: ");
    fgets(nome2,50,stdin);
    getchar();
    printf("Digite uma letra de 'A' a 'H' para o estado da segunda cidade: ");
    scanf("%1s",&estcart2);
    getchar();
    printf("Digite o codigo, sendo um número de '01' a '04', da segunda cidade: ");
    scanf("%d",&cod2);
    printf("Digite a população da segunda cidade: ");
    scanf("%lu", &pop2);
    printf("Digite a área da segunda cidade em km²: ");
    scanf("%f",&area2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%f",&pib2);
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
    printf("População: %d\n",pop1);
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
    printf("População: %d\n",pop2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: R$%.2f\n",pib2);
    printf("Pontos turísticos: %d\n",turi2);
    printf("Densidade populacional: %.2f hab/km²\n",dens2);
    printf("PIB per capita: R$%.2f\n",percp2);
    printf("Super Trunfo: %.2f\n", super2);

    printf("\nComparação:\n");
    if(pop1>pop2){
        printf("População: Carta 1 venceu (%d)",pop1>pop2);
    }
    else if(pop1<pop2){
        printf("População: Carta 2 venceu (%d)",pop1<pop2);
    }
    else{
        printf("População: Empate\n");
    }
    if(area1>area2){
        printf("Área: Carta 1 venceu (%d)\n", area1>area2);
    }
    else if(area1<area2){
        printf("Área: Carta 2 venceu (%d)", area1<area2);
    }
    else{
        printf("Área: Empate\n");
    }
    if(pib1>pib2){
        printf("PIB: Carta 1 venceu (%d)\n", pib1>pib2);
    }
    else if(pib1<pib2){
        printf("PIB: Carta 2 venceu (%d)\n", pib1<pib2);
    }
    else{
        printf("PIB: Empate\n");
    }
    if(turi1>turi2){
        printf("Pontos turísticos: Carta 1 venceu (%d)\n", turi1>turi2);
    }
    else if(turi1<turi2){
        printf("Pontos turísticos: Carta 2 venceu (%d)\n", turi1<turi2);
    }
    else{
        printf("Pontos turísticos: Empate\n");
    }
    if(dens1<dens2){
        printf("Densidade populacional: Carta 1 venceu (%d)\n", dens1<dens2);
    }
    else if(dens1>dens2){
        printf("Densidade populacional: Carta 2 venceu (%d)\n", dens1>dens2);
    }
    else{
        printf("Densidade populacional: Empate\n");
    }
    if(percp1>percp2){
        printf("PIB per capita: Carta 1 venceu (%d)\n", percp1>percp2);
    }
    else if(percp1<percp2){
        printf("PIB per capita: Carta 2 venceu (%d)\n", percp1<percp2);
    }
    else{
        printf("PIB per capita: Empate\n");
    }
    if(super1>super2){
        printf("Super Trunfo: Carta 1 venceu (%d)\n", super1>super2);
    }
    else if(super1<super2){
        printf("Super Trunfo: Carta 2 venceu (%d)\n", super1<super2);
    }
    else{
        printf("Super Trunfo: Empate\n");
    }

    printf("Obrigado por usar o sistema de cadastro de cidades!\n");
    return 0;
}
