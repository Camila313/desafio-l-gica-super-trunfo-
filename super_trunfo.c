#include <stdio.h>

int main() {
    // Atributos das cartas
    int forcaA = 80, velocidadeA = 60, inteligenciaA = 70;
    int forcaB = 75, velocidadeB = 85, inteligenciaB = 65;
    int escolha;

    printf("Escolha um atributo para competir:\n");
    printf("1 - Forca\n2 - Velocidade\n3 - Inteligencia\n");
    printf("Digite o numero do atributo: ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            printf("Forca A: %d vs Forca B: %d\n", forcaA, forcaB);
            if (forcaA > forcaB)
                printf("Voce venceu!\n");
            else if (forcaA < forcaB)
                printf("Voce perdeu!\n");
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Velocidade A: %d vs Velocidade B: %d\n", velocidadeA, velocidadeB);
            if (velocidadeA > velocidadeB)
                printf("Voce venceu!\n");
            else if (velocidadeA < velocidadeB)
                printf("Voce perdeu!\n");
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Inteligencia A: %d vs Inteligencia B: %d\n", inteligenciaA, inteligenciaB);
            if (inteligenciaA > inteligenciaB)
                printf("Voce venceu!\n");
            else if (inteligenciaA < inteligenciaB)
                printf("Voce perdeu!\n");
            else
                printf("Empate!\n");
            break;
        default:
            printf("Atributo invalido!\n");
    }

    return 0;
}
/* Nenhum código adicional é necessário aqui para a compilação com gcc.
    O programa já está completo e pronto para ser compilado. */