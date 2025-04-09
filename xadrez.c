#include <stdio.h>

int main(){

    int peca, direcao, i = 1;

    printf("### Bem-vindo ao Xadres da Torre, Bispo e Rainha! ###\n"); //Tela de boas vindas e pedindo para selecionar a peça
    printf("Primeiro escolha qual das peças deseja mover!\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &peca);

    switch (peca) // Switch para possibiliade de cada peça
    {
        case 1: //Primeira case sendo a Torre, podendo ser movido em 4 possibilidades
            printf("A Torre se move em 5 casas!\n");
            printf("Selecione a direção que a Torre percorrerá!\n");
            printf("1. Frente\n");
            printf("2. Trás\n");
            printf("3. Direita\n");
            printf("4. Esquerda\n");
            scanf("%d", &direcao);

            switch (direcao)
            {
            case 1:
            for (int i = 1; i <= 5; i++) //for usado para mover a casa 5 vezes
            {
                printf("Movimento %d - Foi para frente!\n", i);
            }
            break;
        
            case 2:
            for (int i = 1; i <= 5; i++)
            {
                printf("Movimento %d - Foi para trás!\n", i);
            }
            break;

            case 3:
            for (int i = 1; i <= 5; i++)
            {
                printf("Movimento %d - Foi para direita!\n", i);
            }
            break;

            case 4:
            for (int i = 1; i <= 5; i++)
            {
                printf("Movimento %d - Foi para esquerda!\n", i);
            }
            break;

            default:
                printf("Opa! Parece que você escolheu o número errado ou colocou uma letra! Tente novamente escolhendo de 1 a 4!\n");
                break;
            
        }
        break;

        case 2:
            printf("O Bispo pode se mover 5 casas na diagonal!\n");
            printf("Selecione a direção que o Bispo percorrerá!\n");
            printf("1. Diagonal superior direita\n");
            printf("2. Diagonal superior esquerda\n");
            printf("3. Diagonal inferior direita\n");
            printf("4. Diagonal inferior esquerda\n");
            scanf("%d", &direcao);

            switch (direcao)
            {
            case 1:
                while (i <= 5)
                {
                    printf("Movimento %d - Foi para a diagonal superior direita!\n", i);
                    i++;
                }
            break;

            case 2:
                while (i <= 5)
                {
                    printf("Movimento %d - Foi para a diagonal superior esquerda!\n", i);
                    i++;
                }
            break;

            case 3:
                while (i <= 5)
                {
                    printf("Movimento %d - Foi para a diagonal inferior direita!\n", i);
                    i++;
                }
            break;
            
            case 4:
                while (i <= 5)
                {
                    printf("Movimento %d - Foi para a diagonal inferior esquerda!\n", i);
                    i++;
                }
            break;

            default:
                printf("Opa! Parece que você escolheu o número errado ou colocou uma letra! Tente novamente escolhendo de 1 a 4!\n");
            break;
            }
        break;

        case 3:
            printf("A Rainha pode se mover nas direções tanto do Bispo e tanto da Torre, e ainda em 8 casas!\n");
            printf("Selecione a direção que a Rainha percorrerá!\n");
            printf("1. Frente\n");
            printf("2. Trás\n");
            printf("3. Direita\n");
            printf("4. Esquerda\n");
            printf("5. Diagonal superior direita\n");
            printf("6. Diagonal superior esquerda\n");
            printf("7. Diagonal inferior direita\n");
            printf("8. Diagonal inferior esquerda\n");
            scanf("%d", &direcao);

            switch (direcao)
            {
            case 1:
                do
                {
                    printf("Movimento %d - Foi para frente!\n", i);
                    i++;
                } while (i <= 5);
            break;

            case 2:
                do
                {
                    printf("Movimento %d - Foi para trás!\n", i);
                    i++;
                } while (i <= 5);
            break;

            case 3:
                do
                {
                    printf("Movimento %d - Foi para direita!\n", i);
                    i++;
                } while (i <= 5);
            break;

            case 4:
                do
                {
                    printf("Movimento %d - Foi para esquerda!\n", i);
                    i++;
                } while (i <= 5);
            break;

            case 5:
                do
                {
                    printf("Movimento %d - Foi para a diagonal superior direita!\n", i);
                    i++;
                } while (i <= 5);
            break;

            case 6:
                do
                {
                    printf("Movimento %d - Foi para a diagonal superior esquerda!\n", i);
                    i++;
                } while (i <= 5);
            break;

            case 7:
                do
                {
                    printf("Movimento %d - Foi para a diagonal inferior direita!\n", i);
                    i++;
                } while (i <= 5);
            break;

            case 8:
                do
                {
                    printf("Movimento %d - Foi para a diagonal inferior esquerda!\n", i);
                    i++;
                } while (i <= 5);
            break;            

            default:
                printf("Opa! Parece que você escolheu o número errado ou colocou uma letra! Tente novamente escolhendo de 1 a 8!\n");
                break;
            }
        break;

        default:
            printf("Opa! Parece que você escolheu o número errado ou colocou uma letra! Tente novamente escolhendo de 1 a 3!\n");
        break;
    
    return 0;
    }
}
