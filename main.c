#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <conio.c>
#include <locale.h>
#include <windows.h>

//declaração global das variaveis
char nome[20];
 int opcao;


//esconder cursor
void esconderCursor() {
    CONSOLE_CURSOR_INFO cursorInfo = {1, FALSE}; // Tamanho do cursor = 1, invisível
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void exibirCursor() {
    CONSOLE_CURSOR_INFO cursorInfo = {1, TRUE}; // Tamanho do cursor = 1, invisível
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


//função cursor goto
void cursorxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Função para mudar o nome do jogador


// emoji da peça ♙

void telaInicial(){

    

    system("cls");
    printf(" _____                                                           _____ \n");
    printf("( ___ )---------------------------------------------------------( ___ )\n");
    printf(" |   |                                                           |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |   |                 _    _   _ ____   ___                     |   | \n");
    printf(" |   |                | |  | | | |  _ \\ / _ \\                    |   | \n");
    printf(" |   |                | |  | | | | | | | | | |                   |   | \n");
    printf(" |   |                | |__| |_| | |_| | |_| |                   |   | \n");
    printf(" |   |        _   _ _ |_____\\___/|____/_\\___/  _____ _____       |   | \n");
    printf(" |   |       | | | | | |_   _|_ _|  \\/  |  / \\|_   _| ____|      |   | \n");
    printf(" |   |       | | | | |   | |  | || |\\/| | / _ \\ | | |  _|        |   | \n");
    printf(" |   |       | |_| | |___| |  | || |  | |/ ___ \\| | | |___       |   | \n");
    printf(" |   |        \\___/|_____|_| |___|_|  |_/_/   \\_\\_| |_____|      |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |   |                   BEM VINDO AO JOGO                       |   | \n");
    printf(" |   |                    QUEM VAI JOGAR?                        |   | \n");
    printf(" |   |                     >                                     |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |___|                                                           |___| \n");
    printf("(_____)---------------------------------------------------------(_____) \n");
        
        cursorxy(29,20);
        fgets(nome,sizeof(nome), stdin);
     // Remove o caractere de nova linha, se presente
        nome[strcspn(nome, "\n")] = '\0';

        
    



}


// Fun��o para exibir o menu
// Função para exibir o menu interativo
int exibirMenu() {
    int opcao = 1; // Inicializa a opção selecionada como 1

    while (1) {
        system("cls"); // Limpa a tela

        // Exibe o cabeçalho do menu com as opções numeradas
        printf(" _____                                                           _____ \n");
        printf("( ___ )---------------------------------------------------------( ___ )\n");
        printf(" |   | Logado como: ♙ %-20s                       |   | \n", nome);
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                 _    _   _ ____   ___                     |   | \n");
        printf(" |   |                | |  | | | |  _ \\ / _ \\                    |   | \n");
        printf(" |   |                | |  | | | | | | | | | |                   |   | \n");
        printf(" |   |                | |__| |_| | |_| | |_| |                   |   | \n");
        printf(" |   |        _   _ _ |_____\\___/|____/ \\___/  _____ _____       |   | \n");
        printf(" |   |       | | | | | |_   _|_ _|  \\/  |  / \\|_   _| ____|      |   | \n");
        printf(" |   |       | | | | |   | |  | || |\\/| | / _ \\ | | |  _|        |   | \n");
        printf(" |   |       | |_| | |___| |  | || |  | |/ ___ \\| | | |___       |   | \n");
        printf(" |   |        \\___/|_____|_| |___|_|  |_/_/   \\_\\_| |_____|      |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                      1. ");
        if (opcao == 1) textcolor(2); else textcolor(7); // Verde se selecionado, caso contrário, padrão
        printf("JOGAR");
        textcolor(7);
        printf("                             |   | \n");
        printf(" |   |                      2. ");
        if (opcao == 2) textcolor(3); else textcolor(7); // Ciano se selecionado, caso contrário, padrão
        printf("REGRAS");
        textcolor(7);
        printf("                            |   | \n");
        printf(" |   |                      3. ");
        if (opcao == 3) textcolor(14); else textcolor(7); // Amarelo se selecionado, caso contrário, padrão
        printf("RANKING");
        textcolor(7);
        printf("                           |   | \n");
        printf(" |   |                      4. ");
        if (opcao == 4) textcolor(13); else textcolor(7); // Vermelho se selecionado, caso contrário, padrão
        printf("CREDITOS");
        textcolor(7);
        printf("                          |   | \n");
        printf(" |   |                      5. ");
        if (opcao == 5) textcolor(4); else textcolor(7); // Vermelho se selecionado, caso contrário, padrão
        printf("FECHAR");
        textcolor(7);
        printf("                            |   | \n");
        printf(" |   |                      6. ");
        if (opcao == 6) textcolor(11); else textcolor(7); // Amarelo se selecionado, caso contrário, padrão
        printf("LOGOUT");
        textcolor(7);
        printf("                            |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |___|                                                           |___| \n");
        printf("(_____)---------------------------------------------------------(_____) \n");

        char tecla = _getch();

        if (tecla == 72 && opcao > 1) {
            opcao--;
        } else if (tecla == 80 && opcao < 6) {
            opcao++;
        } else if (tecla == 13) {
            return opcao;
        } else if (tecla == 54) { // Tecla '6'
           
            cursorxy(32, 1); // Move o cursor de volta para a posição do nome no cabeçalho
        }
    }
}


// Fun��o para exibir as regras do jogo
void exibirRegras() {
    system("cls"); // Limpa a tela
 printf(" _____                                                   _____ \n");
    printf("( ___ )------------------------------------------------- ( ___ )\n");
    printf(" |   |                                                     |   | \n");
    printf(" |   |           ____                                       |   | \n");
    printf(" |   |          |  _ \\ ___  __ _ _ __ __ _ ___               |   | \n");
    printf(" |   |          | |_) / _ \\/ _` | '__/ _` / __|              |   | \n");
    printf(" |   |          |  _ <  __/ (_| | | | (_| \\__ \\              |   | \n");
    printf(" |   |          |_| \\_\\___|\\__, |_|  \\__,_|___/              |   | \n");
    printf(" |   |                     |___/                             |   | \n");
    printf(" |   |                                                         |   | \n");
    printf(" |   | Início: Todos os jogadores lançam o dado.               |   | \n");
    printf(" |   |                                                         |   | \n");
    printf(" |   | Jogabilidade: Mova seus peões de acordo com os pontos   |   | \n");
    printf(" |   |               obtidos no dado.                          |   | \n");
    printf(" |   |                                                         |   | \n");
    printf(" |   | Objetivo: Leve seus peões do ponto de partida até o     |   | \n");
    printf(" |   |            ponto final no tabuleiro.                     |   | \n");
    printf(" |   |                                                         |   | \n");
    printf(" |   | Peões: Você tem quatro peões.                           |   | \n");
    printf(" |   |         Somente um peão pode ocupar uma casa.           |   | \n");
    printf(" |   |         Seu peão não pode passar por casas ocupadas     |   | \n");
    printf(" |   |         por peões adversários.                          |   | \n");
    printf(" |   |                                                         |   | \n");
    printf(" |   | Segurança: Casas com dois ou mais peões da mesma cor    |   | \n");
    printf(" |   |            são zonas seguras. Peões nessas casas        |   | \n");
    printf(" |   |            não podem ser capturados.                    |   | \n");
    printf(" |   |                                                         |   | \n");
    printf(" |   | Captura: Ao cair em uma casa ocupada por um peão        |   | \n");
    printf(" |   |          adversário, o peão adversário retorna à sua    |   | \n");
    printf(" |   |          base e precisa recomeçar o trajeto.            |   | \n");
    printf(" |   |                                                         |   | \n");
    printf(" |   | Chegada: Para entrar na casa final, você precisa         |   | \n");
    printf(" |   |          tirar o número exato no dado. Se tirar mais,    |   | \n");
    printf(" |   |          o peão avança e depois retorna.                 |   | \n");
    printf(" |   |                                                         |   | \n");
    printf(" |   | Vitória: O primeiro jogador a levar todos os quatro      |   | \n");
    printf(" |   |          peões ao ponto final vence o jogo.              |   | \n");
    printf(" |___|                                                         |___| \n");
    printf("(_____)-------------------------------------------------------(_____) \n");

    getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
}

// Fun��o para exibir o ranking do jogo
void exibirRanking() {
    system("cls"); // Limpa a tela
    // Adicione aqui o ranking do jogo
printf(" _____                                                 _____ \n");
printf("( ___ )-----------------------------------------------( ___ )\n");
printf(" |   |                                                 |   | \n");
printf(" |   |       ____             _    _                   |   | \n");
printf(" |   |      |  _ \\ __ _ _ __ | | _(_)_ __   __ _       |   | \n");
printf(" |   |      | |_) / _` | '_ \\| |/ / | '_ \\ / _` |      |   | \n");
printf(" |   |      |  _ < (_| | | | |   <| | | | | (_| |      |   | \n");
printf(" |   |      |_| \\_\\__,_|_| |_|_|\\_\\_|_| |_|\\__, |      |   | \n");
printf(" |   |                                     |___/       |   | \n");
printf(" |   |                                                 |   | \n");
printf(" |   |          Ranking Fictício:                      |   | \n");
printf(" |   |                                                 |   | \n");
printf(" |   | 1. ♙ João - 350 pontos                          |   | \n");
printf(" |   | 2. ♙ Maria - 280 pontos                         |   | \n");
printf(" |   | 3. ♙ Pedro - 240 pontos                         |   | \n");
printf(" |   | 4. ♙ Ana - 200 pontos                           |   | \n");
printf(" |   | 5. ♙ Lucas - 180 pontos                         |   | \n");
printf(" |   |                                                 |   | \n");
printf(" |___|                                                 |___| \n");
printf("(_____)-----------------------------------------------(_____) \n");

    printf("\nPressione qualquer tecla para retornar ao menu principal.\n");
    getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
}

void exibircreditos() {
    system("cls"); // Limpa a tela
 printf(" _____                                                 _____ \n");
printf("( ___ )-----------------------------------------------( ___ )\n");
printf(" |   |                                                 |   | \n");
printf(" |   |        ____              _ _ _                  |   | \n");
printf(" |   |       / ___|_ __ ___  __| (_) |_ ___  ___       |   | \n");
printf(" |   |      | |   | '__/ _ \\/ _` | | __/ _ \\/ __|      |   | \n");
printf(" |   |      | |___| | |  __/ (_| | | || (_) \\__ \\      |   | \n");
printf(" |   |       \\____|_|  \\___|\\__,_|_|\\__\\___/|___/      |   | \n");
printf(" |   |                                                 |   | \n");
printf(" |   |             2024 Ludo Ultimate                 |   | \n");
printf(" |   |  Foi pensado e desenvolvido pelos programadores  |  | \n");
printf(" |   |              Bruno Alves                        |  | \n");
printf(" |   |              Nicolas Keyno                      |  | \n");
printf(" |   |                                                 |   | \n");
printf(" |___|                                                 |___| \n");
printf("(_____)-----------------------------------------------(_____) \n");
printf("\nPressione qualquer tecla para retornar ao menu principal.\n");

    getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
    }

void obrigadoJogar() {
    system("cls"); // Limpa a tela
                	textcolor(13);
printf("          ___   ____  ____  ___ ____     _    ____   ___   \n");
printf("         / _ \\ | __ )|  _ \\|_ _/ ___|   / \\  |  _ \\ / _ \\  \n");
printf("        | | | ||  _ \\| |_) || | |  _   / _ \\ | | | | | | |  \n");
printf("        | |_| || |_) |  _ < | | |_| | / ___ \\| |_| | |_| |  \n");
printf("         \\___/ |____/|_|_\\_ \\___\\____/_/   \\_\\____/ \\___/ \n");
printf("                        |  _ \\ / _ \\|  _ \\                    \n");
printf("                        | |_) | | | | |_) |                   \n");
printf("                        |  __/| |_| |  _ <                    \n");
printf("                     _  |_|   _\\___/|_| \\_\\____              \n");
printf("                    | |/ _ \\ / ___|  / \\  |  _ \\             \n");
printf("                 _  | | | | | |  _  / _ \\ | |_) |           \n");
printf("                | |_| | |_| | |_| |/ ___ \\|  _ <             \n");
printf("                 \\___ /\\___/ \\____/_/   \\_\\_| \\_\\             \n \n");
    printf("Pressione qualquer tecla para fechar o jogo.\n");

 // Aguarda o usu�rio pressionar qualquer tecla para continuar
}

//hora do jogo!!!!!!





// Fun��o principal
int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    

    while(1) {
        

        telaInicial();
        system("cls");
        esconderCursor();   
        int opcao = exibirMenu(); // Chama a função para exibir o menu e recebe a opção selecionada

        // Executa a opção selecionada
        

        switch(opcao) {
            
            case 1:
                
                break;
            case 2:
                exibirRegras();
                break;
            case 3:
                exibirRanking();
                break;
            case 4:
                exibircreditos();
                break;
            case 5:
                obrigadoJogar();
                exit(0); // Sai do programa
                break;
            case 6:
                exibirCursor();
                 break;
            default:
            system("cls");
                printf("\nOpção invalida, por favor digite um numero de 1 a  5\n");
                printf("Pressione qualquer botão para retornar ao menu principal");
                getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar //
                fflush(stdin);
                continue;

        }
        
    } while(1);

}

