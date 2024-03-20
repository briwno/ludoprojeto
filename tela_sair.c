#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

//defini??es


int main() {
    SetConsoleOutputCP(CP_UTF8);
	
	
	int valor;
	int jogadores;
	char tecla;
	
	
	
	do{
		
	
        system("cls"); // Limpa a tela

        // Exibe o cabe?alho do menu com as op??es numeradas
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
        printf(" |   |                  ");
        textcolor(2); // Define a cor do texto para verde
        printf("VOCE DESEJA SAIR DO JOGO?");
        textcolor(7);
        printf("                |   | \n");
        textcolor(7); // Reseta a cor do texto para o padr?o
        printf(" |   |                       1.");
        printf("   SIM");
        textcolor(7);
        printf("                            |   | \n");
        textcolor(7);
        printf(" |   |                       2.");
        printf("   NAO");
        textcolor(14); // Define a cor do texto para amarelo
        textcolor(7);
        printf("                            |   | \n");
        textcolor(7);
        printf(" |   |                       ");
        textcolor(7);
        printf("                                    |   | \n");
        textcolor(7);
        printf(" |   |                                                           |   | \n");
        printf(" |   |                                                           |   | \n");
        printf(" |___|                                                           |___| \n");
        printf("(_____)---------------------------------------------------------(_____) \n");
		scanf("%i", &valor);

        switch(valor){
            case 1: {
            	system("cls");
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
printf("                 \\___ /\\___/ \\____/_/   \\_\\_| \\_\\             \n");



                exit(0);
                
                getch();
                break;
            }
            case 2:
                system("cls"); // Limpa a tela
                // Exibe as regras do jogo
                // Adicione aqui as regras do jogo
                printf("\nPressione qualquer tecla para retornar ao menu principal.\n");
                getch(); // Aguarda o usu?rio pressionar qualquer tecla para continuar
                break;

        }
        
    }while(1);

}

