#include <stdio.h>

void frente(int numero){ //Recursividade para cada movimento
    if (numero > 0)
    {
        frente(numero - 1);
        printf("Movimento %d - Foi para frente!\n", numero);
    }
}

void tras(int numero){
    if (numero > 0)
    {
        tras(numero - 1);
        printf("Movimento %d - Foi para trás!\n", numero);
    }
}

void direita(int numero){
    if (numero > 0)
    {
        direita(numero - 1);
        printf("Movimento %d - Foi para direita!\n", numero);
    }
}

void esquerda(int numero){
    if (numero > 0)
    {
        esquerda(numero - 1);
        printf("Movimento %d - Foi para esquerda!\n", numero);
    }
}

void diagonalsd(int numero){
    if (numero > 0)
    {
        diagonalsd(numero - 1);
        printf("Movimento %d - Foi para a diagonal superior direita!\n", numero);
    }
}

void diagonalse(int numero){
    if (numero > 0)
    {
        diagonalse(numero - 1);
        printf("Movimento %d - Foi para a diagonal superior esquerda!\n", numero);
    }
}

void diagonalid(int numero){
    if (numero > 0)
    {
        diagonalid(numero - 1);
        printf("Movimento %d - Foi para a diagonal inferior direita!\n", numero);
    }
}

void diagonalie(int numero){
    if (numero > 0)
    {
        diagonalie(numero - 1);
        printf("Movimento %d - Foi para a diagonal inferior esquerda!\n", numero);
    }
}

int main(){

    int peca, direcao, i = 1;

    printf("### Bem-vindo ao Xadrez da Torre, Bispo, Rainha e Cavalo! ###\n"); //Tela de boas vindas e pedindo para selecionar a peça
    printf("Primeiro escolha qual das peças deseja mover!\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
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
                frente(5); //Recursividade utilizada para cada movimento
            break;
        
            case 2:
                tras(5);
            break;

            case 3:
                direita(5);
            break;

            case 4:
                esquerda(5);
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
                diagonalsd(5);
            break;

            case 2:
                diagonalse(5);
            break;

            case 3:
                diagonalid(5);
            break;
            
            case 4:
                diagonalie(5);
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
                frente(8);
            break;

            case 2:
                tras(8);
            break;

            case 3:
                direita(8);
            break;

            case 4:
                esquerda(8);
            break;

            case 5:
                diagonalsd(8);
            break;

            case 6:
                diagonalse(8);
            break;

            case 7:
                diagonalid(8);
            break;

            case 8:
                diagonalie(8);
            break;            

            default:
                printf("Opa! Parece que você escolheu o número errado ou colocou uma letra! Tente novamente escolhendo de 1 a 8!\n");
                break;
            }
        break;

        case 4:
            printf("O Cavalo se move em 3 casas e pode ter até 8 movimentos em formato de L!\n");
            printf("Selecione a direção que o Cavalo percorrerá!\n");
            printf("1. Cima, Cima, Esquerda\n");
            printf("2. Cima, Cima, Direita\n");
            printf("3. Baixo, Baixo, Esquerda\n");
            printf("4. Baixo, Baixo, Direta\n");
            printf("5. Direita, Direita, Baixo\n");
            printf("6. Direita, Direita, Cima\n");
            printf("7. Esquerda, Esquerda, Baixo\n");
            printf("8. Esquerda, Esquerda, Cima\n");
            scanf("%d", &direcao);

            switch (direcao)
            {
            case 1:
                for (i = 1; i < 2; i++)
                {
                    for (int j = 1; j <= 2; j++)
                    {
                        printf("Movimento %d - Cima\n", j);
                    }
                    printf("Movimento %d - Esquerda\n", i + 2);
                }
            break;

            case 2:
                for (i = 1; i < 2; i++)
                {
                    for (int j = 1; j <= 2; j++)
                    {
                        printf("Movimento %d - Cima\n", j);
                    }
                    printf("Movimento %d - Direita\n", i + 2);
                }
            break;
            case 3:
            for (i = 1; i < 2; i++)
            {
                for (int j = 1; j <= 2; j++)
                {
                    printf("Movimento %d - Baixo\n", j);
                }
                printf("Movimento %d - Esquerda\n", i + 2);
            }                
            break;
            case 4:
            for (i = 1; i < 2; i++)
            {
                for (int j = 1; j <= 2; j++)
                {
                    printf("Movimento %d - Baixo\n", j);
                }
                printf("Movimento %d - Direita\n", i + 2);
            }                
            break;            
            case 5:
            for (i = 1; i < 2; i++)
            {
                for (int j = 1; j <= 2; j++)
                {
                    printf("Movimento %d - Direita\n", j);
                }
                printf("Movimento %d - Baixo\n", i + 2);
            }                
            break;
            case 6:
            for (i = 1; i < 2; i++)
            {
                for (int j = 1; j <= 2; j++)
                {
                    printf("Movimento %d - Direita\n", j);
                }
                printf("Movimento %d - Cima\n", i + 2);
            }                
            break;
            case 7:
            for (i = 1; i < 2; i++)
            {
                for (int j = 1; j <= 2; j++)
                {
                    printf("Movimento %d - Esquerda\n", j);
                }
                printf("Movimento %d - Baixo\n", i + 2);
            }                
            break;
            case 8:
            for (i = 1; i < 2; i++)
            {
                for (int j = 1; j <= 2; j++)
                {
                    printf("Movimento %d - Esquerda\n", j);
                }
                printf("Movimento %d - Cima\n", i + 2);
            }                
            break;
            default:
            printf("Opa! Parece que você escolheu o número errado ou colocou uma letra! Tente novamente escolhendo de 1 a 8!\n");
                break;
            }
        break;
        default:
            printf("Opa! Parece que você escolheu o número errado ou colocou uma letra! Tente novamente escolhendo de 1 a 4!\n");
        break;
    return 0;
    }
}