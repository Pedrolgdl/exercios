#include<stdio.h>
#include<stdlib.h>

int main() {
    int opcao;
    
    printf("Escolha qual sistema operacional você deseja carregar. \n");
    
    printf("\n Opção 1 - Linux ");
    printf("\n Opção 2 - Windows ");
    printf("\n Opção 3 - Mac\n");
    printf("\n Escolha uma opção: \t");
    scanf("%d", &opcao);
    switch(opcao) {
        case 1:
            printf("\n Você escolheu o sistema operacional Linux. \n");
            break;
        case 2:
            printf("\n Você escolheu o sistema operacional Windows. \n");
            break;
        case 3: 
            printf("\n Você escolheu o sistema operacional Mac. \n");
            break;
        default:
            printf("\n Opção não contida no banco de dados. \n");
    }
    return 0;
}