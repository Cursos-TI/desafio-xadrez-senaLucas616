#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
//Implemetaçao das funçoes recursivas para movimentaçao das peças
void Bispo(int n_casas,int atual,char* direcao){
    if(n_casas < atual) return;
    printf("Bispo movimento %d:%s\n",atual,direcao);
    Bispo(n_casas,atual+1,direcao);
}
void Torre(int n_casas,int atual,char* direcao){
    if(n_casas < atual) return;
    printf("Torre movimento %d:%s\n",atual,direcao);
    Bispo(n_casas,atual+1,direcao);
}
void Rainha(int n_casas,int atual,char* direcao){
    if(n_casas < atual) return;
    printf("Rainha movimento %d:%s\n",atual,direcao);
    Bispo(n_casas,atual+1,direcao);
}
//Funçao para movimentaçao do cavalo usando duas variaveis um contador e outro pro loop e multipla condiçao
void Cavalo(){
    for(int i = 1, j = 1;i <= 3;i++,j++){
        if(i <= 2){
            printf("Cavalo movimento %d: cima\n",j);
            continue;
        }
        if(i==3){
            printf("Cavalo movimento %d: direita\n",j);
            break;
        }
    }
}



int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    //Definindo constantes inteiras.
    const int bispo = 5;
    const int torre = 5;
    const int rainha = 8;
    const int cavalo = 3;
    //variavel do loop while e  do-while para a condiçao da torre e rainha
    int k = 1;
    int j = 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //Movendo pela diagonal direita
    printf("##=Movimentaçao do bispo=##\n");
    printf("##-Diagonal superior direita-##");
    for(int i = 1;i<=bispo;i++){
        printf("Bispo movimento %d: cima + direita.\n",i);
    }
    printf("\n");
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    ///Movendo torre para direita
    printf("##=Movimentaçao da torre=##\n");
    printf("##-Direita-##\n");
    do{
        printf("Torre movimento %d: direita.\n",j);    
        j++;
    }while(j <= torre);
    
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //Movendo rainha para esquerda!
    printf("##=Movimentaçao da rainha=##\n");
    printf("##-Esquerda-##\n");
    while(k <= rainha){
        printf("Esquerda movimento %d: esquerda.\n",k);
        k++;
    }
    printf("\n");
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("##=Movimentaçao do cavalo=##\n");
    printf("##-inferior esquerda-##\n");
    for(int i = 1;i<=cavalo;i++){
        do{
            printf("Cavalo movimento %d: baixo.\n",i);
            i++;
        }while(i <= cavalo -1);
        printf("Cavalo movimento %d: esquerda.\n",i);
    }
    printf("\n");
    
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    
    //funçaoes recursiva para movimentaçao das peças do xadrez 
    printf("##=Movimentaçao do bispo=##\n");
    printf("##-Diagonal superior direita-##\n");
    Bispo(bispo,1,"cima + direita");
    printf("\n");

    
    printf("##=Movimentaçao da torre=##\n");
    printf("##-Direita-##\n");
    Torre(torre,1,"direita");
    printf("\n");

    printf("##=Movimentaçao da rainha=##\n");
    printf("##-Esquerda-##\n");
    Rainha(rainha,1,"esquerda");
    printf("\n");

    printf("##=Movimentaçao do cavalo=##\n");
    printf("##-Superior direita-##\n");
    Cavalo();
    
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
