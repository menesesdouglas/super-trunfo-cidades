#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    char estcart1[2]="A",estcart2[2]="B",nome1[50]="São Paulo",nome2[50]="Rio de Janeiro";
    int cod1=1,cod2=1,turi1=rand()%301,turi2=rand()%301,result1,result2,escolha1,escolha2;
    unsigned long int pop1=rand()%99991+1;
    unsigned long int pop2=rand()%99991+1;
    float area1=(float)(rand()%99991),area2=(float)(rand()%99991),pib1=(float)(rand()%99999991),pib2=(float)(rand()%99999991),percp1,percp2,dens1,dens2,invdens1,invdens2,super1,super2;

    percp1= (float)pib1/pop1;
    percp2= (float)pib2/pop2;
    dens1= (float)pop1/area1;
    dens2= (float)pop2/area2;
    invdens1=(float)area1/pop1;
    invdens2=(float)area2/pop2;
    super1=(float)pop1+area1+pib1+turi1+percp1+invdens1;
    super2=(float)pop2+area2+pib2+turi2+percp2+invdens2;

    printf("Seja bem vindo ao programa de comparação de cartas Super Trunfo\n");
    printf("Você poderá escolher entre todos os 7 atributos para comparar e ver qual carta venceu.\n");
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
            printf("Carta %s%d, %s, tem o PIB de %.2f.\n",estcart1,cod1,nome1,pib1);
            printf("Carta %s%d, %s, tem o PIB de %.2f.\n",estcart2,cod2,nome2,pib2);
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
            printf("Carta %s%d, %s, tem o poder Super Trunfo de %.2f.\n",estcart1,cod1,nome1,super1);
            printf("Carta %s%d, %s, tem o poder Super Trunfo de %.2f.\n",estcart2,cod2,nome2,super2);
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

    
    printf("Resultado:");
    if(result1==1 && result2==1){
        printf("A carta %s%d venceu o jogo!\n",estcart1,cod1);
    }else if(result1==0 && result2==0){
        printf("A carta %s%d venceu o jogo!\n",estcart2,cod2);
    }else if((result1==1 && result2==0)||(result1==0 && result2==1)||(result1==2 && result2==2)){
        printf("O jogo terminou em empate!\n");
    }

    printf("Obrigado por jogar!\n");

    return 0;
}
