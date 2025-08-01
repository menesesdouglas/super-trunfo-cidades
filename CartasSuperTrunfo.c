#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char estcart1[3],estcart2[3],nome1[50],nome2[50];
    int cod1,cod2,turi1,turi2,result1,result2,escolha1,escolha2;
    unsigned long int pop1;
    unsigned long int pop2;
    float area1,area2,percp1,percp2,dens1,dens2,invdens1,invdens2;
    long double pib1,pib2,super1,super2;

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
    scanf("%Lf",&pib1);
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
    scanf("%Lf",&pib2);
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
    printf("PIB: R$%.2Lf\n",pib1);
    printf("Pontos turísticos: %d\n",turi1);
    printf("Densidade populacional: %.2f hab/km²\n",dens1);
    printf("PIB per capita: R$%.2f\n",percp1);
    printf("Super Trunfo: %.2Lf\n", super1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n",estcart2);
    printf("Código: %s%d\n",estcart2, cod2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %lu\n",pop2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: R$%.2Lf\n",pib2);
    printf("Pontos turísticos: %d\n",turi2);
    printf("Densidade populacional: %.2f hab/km²\n",dens2);
    printf("PIB per capita: R$%.2f\n",percp2);
    printf("Super Trunfo: %.2Lf\n", super2);

    printf("\nVocê poderá escolher entre todos os 7 atributos para comparar e ver qual carta venceu.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per Capita\n");
    printf("5. Pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("7. Poder Super Trunfo\n");
    printf("0. Sair\n");
    printf("Escolha a primeira comparação: ");
    scanf("%d",&escolha1);

    switch(escolha1){
        case 1:
            if(pop1==pop2){
                result1=2;
            }else{
                result1=pop1>pop2?1:0;
            }
            printf("Carta %s%d, %s, tem uma população de %lu.\n",estcart1,cod1,nome1,pop1);
            printf("Carta %s%d, %s, tem uma população de %lu.\n",estcart2,cod2,nome2,pop2);
            if(result1==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result1==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 2:
            if(area1==area2){
                result1=2;
            }else{
                result1=area1>area2?1:0;
            }
            printf("Carta %s%d, %s, tem uma área de %.2f.\n",estcart1,cod1,nome1,area1);
            printf("Carta %s%d, %s, tem uma área de %.2f.\n",estcart2,cod2,nome2,area2);
            if(result1==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result1==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 3:
            if(pib1==pib2){
                result1=2;
            }else{
                result1=pib1>pib2?1:0;
            }
            printf("Carta %s%d, %s, tem o PIB de %.2Lf.\n",estcart1,cod1,nome1,pib1);
            printf("Carta %s%d, %s, tem o PIB de %.2Lf.\n",estcart2,cod2,nome2,pib2);
            if(result1==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result1==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 4:
            if(percp1==percp1){
                result1=2;
            }else{
                result1=percp1>percp1?1:0;
            }
            printf("Carta %s%d, %s, tem o PIB per capita de %.2f.\n",estcart1,cod1,nome1,percp1);
            printf("Carta %s%d, %s, tem o PIB per capita de %.2f.\n",estcart2,cod2,nome2,percp2);
            if(result1==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result1==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 5:
            if(turi1==turi2){
                result1=2;
            }else{
                result1=turi1>turi2?1:0;
            }
            printf("Carta %s%d, %s, tem %d pontos turísticos.\n",estcart1,cod1,nome1,turi1);
            printf("Carta %s%d, %s, tem %d pontos turísticos.\n",estcart2,cod2,nome2,turi2);
            if(result1==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result1==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 6:
            if(dens1==dens2){
                result1=2;
            }else{
                result1=dens1<dens2?1:0;
            }
            printf("Carta %s%d, %s, tem uma densidade demográfica de %.2f.\n",estcart1,cod1,nome1,dens1);
            printf("Carta %s%d, %s, tem uma população de %.2f.\n",estcart2,cod2,nome2,dens2);
            if(result1==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result1==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 7:
            if(super1==super2){
                result1=2;
            }else{
                result1=super1>super2?1:0;
            }
            printf("Carta %s%d, %s, tem o poder Super Trunfo de %.2Lf.\n",estcart1,cod1,nome1,super1);
            printf("Carta %s%d, %s, tem o poder Super Trunfo de %.2Lf.\n",estcart2,cod2,nome2,super2);
            if(result1==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result1==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 0:
            printf("Saindo do programa! Obrigado!\n");
            return 0;
        default:
            printf("Entrada inválida! Encerrando programa.\n");
            return 0;
    }

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per Capita\n");
    printf("5. Pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("7. Poder Super Trunfo\n");
    printf("0. Sair\n");
    printf("Escolha a segunda comparação: ");
    scanf("%d",&escolha2);

    if(escolha1==escolha2){
        printf("Você escolheu a mesma comparação duas vezes! Encerrando o programa.\n");
        return 0;
    }

        switch(escolha2){
        case 1:
            if(pop1==pop2){
                result2=2;
            }else{
                result2=pop1>pop2?1:0;
            }
            printf("Carta %s%d, %s, tem uma população de %lu.\n",estcart1,cod1,nome1,pop1);
            printf("Carta %s%d, %s, tem uma população de %lu.\n",estcart2,cod2,nome2,pop2);
            if(result2==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result2==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 2:
            if(area1==area2){
                result2=2;
            }else{
                result2=area1>area2?1:0;
            }
            printf("Carta %s%d, %s, tem uma área de %.2f.\n",estcart1,cod1,nome1,area1);
            printf("Carta %s%d, %s, tem uma área de %.2f.\n",estcart2,cod2,nome2,area2);
            if(result2==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result2==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 3:
            if(pib1==pib2){
                result2=2;
            }else{
                result2=pib1>pib2?1:0;
            }
            printf("Carta %s%d, %s, tem o PIB de %.2f.\n",estcart1,cod1,nome1,pib1);
            printf("Carta %s%d, %s, tem o PIB de %.2f.\n",estcart2,cod2,nome2,pib2);
            if(result2==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result2==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 4:
            if(percp1==percp1){
                result2=2;
            }else{
                result2=percp1>percp1?1:0;
            }
            printf("Carta %s%d, %s, tem o PIB per capita de %.2f.\n",estcart1,cod1,nome1,percp1);
            printf("Carta %s%d, %s, tem o PIB per capita de %.2f.\n",estcart2,cod2,nome2,percp2);
            if(result2==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result2==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 5:
            if(turi1==turi2){
                result2=2;
            }else{
                result2=turi1>turi2?1:0;
            }
            printf("Carta %s%d, %s, tem %d pontos turísticos.\n",estcart1,cod1,nome1,turi1);
            printf("Carta %s%d, %s, tem %d pontos turísticos.\n",estcart2,cod2,nome2,turi2);
            if(result2==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result2==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 6:
            if(dens1==dens2){
                result2=2;
            }else{
                result2=dens1<dens2?1:0;
            }
            printf("Carta %s%d, %s, tem uma densidade demográfica de %.2f.\n",estcart1,cod1,nome1,dens1);
            printf("Carta %s%d, %s, tem uma densidade demográfica de %.2f.\n",estcart2,cod2,nome2,dens2);
            if(result2==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result2==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 7:
            if(super1==super2){
                result2=2;
            }else{
                result2=super1>super2?1:0;
            }
            printf("Carta %s%d, %s, tem o poder Super Trunfo de %.2f.\n",estcart1,cod1,nome1,super1);
            printf("Carta %s%d, %s, tem o poder Super Trunfo de %.2f.\n",estcart2,cod2,nome2,super2);
            if(result2==1){
                printf("Carta %s%d venceu!\n",estcart1,cod1);
            }else if(result2==0){
                printf("Carta %s%d venceu!\n",estcart2,cod2);
            }else{
                printf("Houve um empate!\n");
            }
            break;
        case 0:
            printf("Saindo do programa! Obrigado!\n");
            return 0;
        default:
            printf("Entrada inválida! Encerrando programa.\n");
            return 0;
    }

    
    printf("Resultado: ");
    if(result1==1 && result2==1){
        printf("A carta %s%d venceu o jogo!\n",estcart1,cod1);
    }else if(result1==0 && result2==0){
        printf("A carta %s%d venceu o jogo!\n",estcart2,cod2);
    }else if((result1==1 && result2==0)||(result1==0 && result2==1)||(result1==2 && result2==2)){
        printf("O jogo terminou em empate!\n");
    }

    printf("Obrigado por jogar!\n");

    printf("Obrigado por usar o sistema de cadastro de cidades!\n");
    
    return 0;
}
