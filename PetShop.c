#include <stdio.h>
#include <stdlib.h>

#define clear "cls"

void cadastrarAnimal();
void registrarAdocao();
void pesquisarAnimal();
void imprimirAdocao();
void imprimirDisponiveis();
/*
    Função main exibe 6 escolhas para o usuario que vai de 1 até 6
    Armazena a escolha na variavel escolha
    Depois entramos em um switch case que depende do valor da escoha
    Valores de 1 a 5 chamam uma função diferente
    Valor 6 fecha o programa
    Qualquer outro valor o programa avisa que é um valor invalido e volta ao começo
*/
int main(){
    int escolha = 0, escolhaErrada = 0, idAnimal[10], idadeAnimal[10], statusAdocao[10];
    char especieAnimal[10][20], corAnimal[10][20];
    while(escolha != 6){
        system(clear);
        printf("   _____     _      _____ _                 \n");
        printf("  |  __ \\   | |    / ____| |                \n");
        printf("  | |__) |__| |_  | (___ | |__   ___  _ __  \n");
        printf("  |  ___/ _ \\ __|  \\___ \\| '_ \\ / _ \\| '_ \\ \n");
        printf("  | |  |  __/ |_   ____) | | | | (_) | |_) |\n");
        printf("  |_|   \\___|\\__| |_____/|_| |_|\\___/| .__/ \n");
        printf("                                   | |    \n");
        printf("                                   |_|    \n\n");
        printf("  1. Cadastrar Animal\n");
        printf("  2. Registrar adoção\n");
        printf("  3. Pesquisar animal\n");
        printf("  4. Imprimir relatório de adoções\n");
        printf("  5. Imprimir relatório de animais disponíveis\n");
        printf("  6. Sair\n\n");
        (escolhaErrada == 1) ? (printf("  Valor invalido\n\n"), escolhaErrada = 0) : 0;
        printf("  Escolha uma opção:  ");
        scanf("%d", &escolha);
        
        switch(escolha){
            case 1:
                cadastrarAnimal();
                break;
            case 2:
                registrarAdocao();
                break;
            case 3:
                pesquisarAnimal();
                break;
            case 4:
                imprimirAdocao();
                break;
            case 5:
                imprimirDisponiveis();
                break;
            case 6:
                break;
            default:
                escolhaErrada = 1;
        }
    }
}

void cadastrarAnimal(){
    system(clear);
}

void registrarAdocao(){
    system(clear);
}

void pesquisarAnimal(){
    system(clear);
}

void imprimirAdocao(){
    system(clear);
}

void imprimirDisponiveis(){
    system(clear);
}