#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

//defini��es


int main() {
    SetConsoleOutputCP(CP_UTF8);
	
	
	int valor;
	int jogadores;
	
	
	
	do{
		
	
        system("cls"); // Limpa a tela

        // Exibe o cabe�alho do menu com as op��es numeradas
        printf(" _____                                                           _____ \n");
        printf("( ___ )---------------------------------------------------------( ___ )\n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
          printf(" |   |                                                           |   |\n");
    printf(" |   |                                                           |   |\n");
    printf(" |   |                                                           |   |\n");
    printf(" |   |             ____  _____ ____ ____      _    ____          |   |\n");
    printf(" |   |            |  _ \\| ____/ ___|  _ \\    / \\  / ___|         |   |\n");
    printf(" |   |            | |_) |  _|| |  _| |_) |  / _ \\ \\___ \\         |   |\n");
    printf(" |   |            |  _ <| |__| |_| |  _ <  / ___ \\ ___) |        |   |\n");
    printf(" |   |            |_| \\_\\_____|____|_| \\_\\/_/   \\_\\____/         |   |\n");
        printf(" |   |                                                           |   | \n");
        printf(" |   |                      1 � ");
        textcolor(2); // Define a cor do texto para verde
        printf("REGRA:");
        textcolor(7);
        printf("                            |   | \n");
        textcolor(7); // Reseta a cor do texto para o padr�o
        printf(" |   |                      2 � ");
        textcolor(3); // Define a cor do texto para ciano
        printf("REGRA:");
        textcolor(7);
        printf("                            |   | \n");
        textcolor(7);
        printf(" |   |                      3 � ");
        textcolor(14); // Define a cor do texto para amarelo
        printf("REGRA:");
        textcolor(7);
        printf("                            |   | \n");
        textcolor(7);
        printf(" |   |                      4 � ");
        textcolor(4); // Define a cor do texto para vermelho
        printf("REGRA:");
        textcolor(7);
        printf("                            |   | \n");
        textcolor(7);
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |___|                                                           |___| \n");
        printf("(_____)---------------------------------------------------------(_____) \n");
		scanf("%i", &valor);

        switch(valor){
            case 1: {
            	system("cls");
                printf("Quantos jogadores?\n");
                printf("1. 2 Jogadores\n 2. 3 Jogadores\n 3. 4 Jogadores\n");
                scanf("%i", &jogadores);
                
                	
                	switch(jogadores){
                		case 1:
                			system("cls");
                			printf("2 jogadores foram selecionados\n");
                			break;
                		case 2:
                			system("cls");
                			printf("3 jogadores foram selecionados\n");
                			break;
                		case 3:
                			system("cls");
                			printf("4 jogadores foram selecionados\n");
                			break;
					}
                getch();
                break;
            }
            case 2:
                system("cls"); // Limpa a tela
                // Exibe as regras do jogo
                printf("As regras s�o:\n");
                // Adicione aqui as regras do jogo
                printf("\nPressione qualquer tecla para retornar ao menu principal.\n");
                getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
                break;
            case 3:
                system("cls"); // Limpa a tela
                // Exibe o ranking do jogo
                printf("O ranking atual �:\n");
                // Adicione aqui o ranking do jogo
                printf("\nPressione qualquer tecla para retornar ao menu principal.\n");
                getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
                break;
            case 4:
                exit(0); // Sai do programa
                
            default:
                printf("\nOp��o inv�lida! Pressione qualquer tecla para continuar.\n"); // Mensagem de erro para op��o inv�lida
                getch(); // Aguarda o usu�rio pressionar qualquer tecla para continuar
        }
        
    }while(1);

}

