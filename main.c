#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <conio.c>

#include <windows.h>

// Fun��o para exibir o menu
void exibirMenu() {
    system("cls"); // Limpa a tela
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
    printf(" |   |        _   _ _ |_____\\___/|____/ \\ ___/  _____ _____      |   | \n");
    printf(" |   |       | | | | | |_   _|_ _|  \\/  |  / \\|_   _| ____|      |   | \n");
    printf(" |   |       | | | | |   | |  | || |\\/| | / _ \\ | | |  _|        |   | \n");
    printf(" |   |       | |_| | |___| |  | || |  | |/ ___ \\| | | |___       |   | \n");
    printf(" |   |        \\___/|_____|_| |___|_|  |_/_/   \\_\\_| |_____|      |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |   |                      1. ");
    textcolor(2); // Define a cor do texto para verde
    printf("🕹️ JOGAR");
    textcolor(7);
    printf("                          |   | \n");
    textcolor(7); // Reseta a cor do texto para o padr�o
    printf(" |   |                      2. ");
    textcolor(3); // Define a cor do texto para ciano
    printf("📜 REGRAS");
    textcolor(7);
    printf("                         |   | \n");
    textcolor(7);
    printf(" |   |                      3. ");
    textcolor(14); // Define a cor do texto para amarelo
    printf("🏆 RANKING");
    textcolor(7);
    printf("                        |   | \n");
    textcolor(7);
    printf(" |   |                      4. ");
    textcolor(13); // Define a cor do texto para vermelho
    printf("📰 CRÉDITOS");
    textcolor(7);
    printf("                       |   | \n");
    printf(" |   |                      5. ");
    textcolor(4); // Define a cor do texto para vermelho
    printf("🚪 SAIR");
    textcolor(7);
    printf("                           |   | \n");
    textcolor(7);
    printf(" |   |                                                           |   | \n");
    printf(" |   |                                                           |   | \n");
    printf(" |___|                                                           |___| \n");
    printf("(_____)---------------------------------------------------------(_____) \n");
}

void exibirJogo() {
    system("cls"); // Limpa a tela
        printf("                                ___________ \n");
    printf("                               |   |   |   |\n");
    printf("                               | 0 | 0 | 0 |\n");
    printf("                               |___|___|___|\n");
    printf("                               |   |   |   |\n");
    printf("                               | 0 | 0 | 0 |\n");
    printf("                               |___|___|___|\n");
    printf("                 ____          |   |   |   |          ____\n");
    printf("                |    |         | 0 | 0 | 0 |         |    |\n");
    printf("                |  0 |         |___|___|___|         |  0 |\n");
    printf("            ____|    |____     |   |   |   |     ____|    |____\n");
    printf("           |              |    | 0 | 0 | 0 |    |              |\n");
    printf("           |  0         0 |    |___|___|___|    | 0          0 |\n");
    printf("           |____      ____|    |   |   |   |    |____      ____|\n");
    printf("                |    |         | 0 | 0 | 0 |         |    |\n");
    printf("                |  0 |         |___|___|___|         |  0 |\n");
    printf("                |____|         |   |   |   |         |____|\n");
    printf("                               | 0 | 0 | 0 |\n");
    printf("         _______________________|___|___|___|_______________________\n");
    printf("        |   |   |   |   |   |   |           |   |   |   |   |   |   |\n");
    printf("        | 0 | 0 | 0 | 0 | 0 | 0 |           | 0 | 0 | 0 | 0 | 0 | 0 |\n");
    printf("        |___|___|___|___|___|___|           |___|___|___|___|___|___|\n");
    printf("        |   |   |   |   |   |   |           |   |   |   |   |   |   |\n");
    printf("        | 0 | 0 | 0 | 0 | 0 | 0 |           | 0 | 0 | 0 | 0 | 0 | 0 |\n");
    printf("        |___|___|___|___|___|___|           |___|___|___|___|___|___|\n");
    printf("        |   |   |   |   |   |   |           |   |   |   |   |   |   |\n");
    printf("        | 0 | 0 | 0 | 0 | 0 | 0 |           | 0 | 0 | 0 | 0 | 0 | 0 |\n");
    printf("        |___|___|___|___|___|___|___________|___|___|___|___|___|___|\n");
    printf("                               |   |   |   |\n");
    printf("                  ____         | 0 | 0 | 0 |          ____\n");
    printf("                 |    |        |___|___|___|         |    |\n");
    printf("                 |  0 |        |   |   |   |         |  0 |\n");
    printf("             ____|    |____    | 0 | 0 | 0 |     ____|    |____\n");
    printf("            |              |   |___|___|___|    |              |\n");
    printf("            | 0          0 |   |   |   |   |    | 0          0 |\n");
    printf("            |____      ____|   | 0 | 0 | 0 |    |____      ____|\n");
    printf("                 |    |        |___|___|___|         |    |\n");
    printf("                 | 0  |        |   |   |   |         |  0 |\n");
    printf("                 |____|        | 0 | 0 | 0 |         |____|\n");
    printf("                               |___|___|___|\n");
    printf("                               |   |   |   |\n");
    printf("                               | 0 | 0 | 0 |\n");
    printf("                               |___|___|___|\n");
    printf("                               |   |   |   |\n");
    printf("                               | 0 | 0 | 0 |\n");
    printf("                               |___|___|___|\n");

    printf("\nPressione qualquer tecla para retornar ao menu principal");
    getch();
    

}

// Fun��o para exibir as regras do jogo
void exibirRegras() {
    system("cls"); // Limpa a tela
    printf("Regras do Jogo:\n\n");

    printf("1. Início da Partida:\n");
    printf("\t- Inicia-se a partida lançando-se o dado.\n");
    printf("\t- O participante que obtiver o maior número de pontos começa o jogo.\n");
    printf("\t- As jogadas prosseguem em sentido horário.\n\n");

    printf("2. Jogabilidade:\n");
    printf("\t- Utiliza-se um dado para determinar os movimentos.\n");
    printf("\t- Os avanços são feitos de acordo com os pontos obtidos no lançamento dos dados.\n");
    printf("\t- Ao tirar '1' ou '6', o jogador pode mover um peão da casa de partida.\n");
    printf("\t- Ao tirar '6', o jogador tem o direito de lançar o dado novamente.\n\n");

    printf("3. Número de Jogadores:\n");
    printf("\t- O jogo pode ser disputado por 2, 3 ou 4 jogadores.\n");
    printf("\t- No caso de 4 jogadores, é possível formar 2 duplas.\n\n");

    printf("4. Tabuleiro e Peças:\n");
    printf("\t- O tabuleiro tem formato quadrado e um percurso em forma de cruz.\n");
    printf("\t- Cada jogador possui quatro peões.\n");
    printf("\t- Os peões começam na base de mesma cor.\n\n");

    printf("5. Objetivo do Jogo:\n");
    printf("\t- O objetivo é ser o primeiro a levar os quatro peões ao ponto final marcado com sua cor.\n\n");

    printf("6. Movimentação dos Peões:\n");
    printf("\t- Os peões movem-se pelo percurso no sentido horário.\n");
    printf("\t- Para transportar um peão da base para o ponto de partida, é necessário tirar '6'.\n");
    printf("\t- Após iniciar a movimentação, o jogador pode mover o peão de acordo com o número tirado no dado.\n");
    printf("\t- Se um jogador tirar '6', além de mover o peão, ele pode lançar novamente o dado.\n\n");

    printf("7. Captura de Peões:\n");
    printf("\t- Se um jogador chegar a uma casa ocupada por um peão adversário, o peão adversário deve retornar à sua base.\n");
    printf("\t- Se dois peões da mesma cor ocuparem a mesma casa, eles não podem ser capturados, e nenhum adversário pode passar por essa casa.\n\n");

    printf("8. Chegada ao Ponto Final:\n");
    printf("\t- Após dar a volta no tabuleiro, o peão avança pela reta final de sua própria cor.\n");
    printf("\t- A chegada ao ponto final só pode ser obtida por um número exato nos dados.\n");
    printf("\t- Se um jogador tirar mais do que o necessário, ele avança até o fim e retorna, aguardando sua próxima jogada.\n\n");

    printf("9. Vitória:\n");
    printf("\t- O vencedor é o primeiro jogador a levar seus quatro peões ao ponto de chegada de sua cor.\n");
    // Adicione aqui as regras do jogo
    printf("\nPressione qualquer tecla para retornar ao menu principal.\n");
    getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
}

// Fun��o para exibir o ranking do jogo
void exibirRanking() {
    system("cls"); // Limpa a tela
    // Adicione aqui o ranking do jogo
        printf("Ranking Fictício:\n\n");

    printf("1. ψ João - 350 pontos\n");
    printf("2. ψ Maria - 280 pontos\n");
    printf("3. ψ Pedro - 240 pontos\n");
    printf("4. ψ Ana - 200 pontos\n");
    printf("5. ψ Lucas - 180 pontos\n");
    printf("\nPressione qualquer tecla para retornar ao menu principal.\n");
    getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
}

void exibircreditos() {
    system("cls"); // Limpa a tela
    printf("2024 Ludo Ultimate\n");
    printf("Foi pensando e desenvolvido pelos programadores: \nBruno Alves \nNicolas Keyno");
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
    getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
}

// Fun��o principal
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int valor;

    do {
        exibirMenu();
        scanf("%i", &valor);

        switch(valor) {
            case 1:
                exibirJogo();
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
            default:
                printf("\nOp��o inv�lida! Pressione qualquer tecla para continuar.\n");
                getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
        }
        
    } while(1);

    return 0;
}

