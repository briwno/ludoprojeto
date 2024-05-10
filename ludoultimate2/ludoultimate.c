#include <stdio.h>
#include <raylib.h>
#include <string.h> 

// Variáveis globais
bool mostrarJogar = false; // Variável para controlar se a opção "Jogar" está sendo mostrada
bool mostrarJogo = false;
bool mostrarRanking = false; // Variável para controlar se a opção "Ranking" está sendo mostrada
bool mostrarRegras = false; // Variável para controlar se a opção "Regras" está sendo mostrada
bool mostrarSair = false; // Variável para controlar se a opção "Fechar" está sendo mostrada
bool pause = false; // Variável para controlar o estado de pausa da música
Music musicamenu; // Variável para armazenar a música do menu
Texture2D soundOnTexture; // Textura do botão de som ligado
Texture2D soundOffTexture; // Textura do botão de som desligado
Texture2D voltarTexture; // Textura do botão "voltar"
Rectangle voltarButtonRec; // Área de colisão do botão "voltar"
Rectangle soundButtonRec; // Área de colisão do botão de som
int selectedOption = 0; // Opção selecionada no menu

// Array contendo as opções do menu
const char* menuOptions[] = {"Jogar", "Regras", "Ranking", "Fechar"};
int numOptions = sizeof(menuOptions) / sizeof(menuOptions[0]);


int main() {
    Image jogo = LoadImage("logoprograma.png"); // Carrega a imagem do logotipo do programa
    // Inicializa a janela
    InitWindow(1920, 1080, "Ludo Ultimate");  // Inicializa a janela com tamanho e título especificados
    SetWindowIcon(jogo); // Define o ícone da janela
    SetTargetFPS(60); // Define a taxa de quadros por segundo
    ToggleFullscreen(); // Alterna para o modo de tela cheia
    InitAudioDevice(); // Inicializa o dispositivo de áudio
    // Carrega a música
    musicamenu = LoadMusicStream("sons/musicamenu.wav"); // Carrega a música do menu
    SetMusicVolume(musicamenu, 0.5); // Define o volume da música
    // Toca a música em loop
    PlayMusicStream(musicamenu); // Toca a música do menu em loop

    // Carrega as texturas dos botões de som
    soundOnTexture = LoadTexture("sound_on.png"); // Carrega a textura do botão de som ligado
    soundOffTexture = LoadTexture("sound_off.png"); // Carrega a textura do botão de som desligado

    voltarTexture = LoadTexture("voltar.png"); // Carrega a textura do botão "voltar"

    voltarButtonRec = (Rectangle){1790, 930, (float)voltarTexture.width, (float)voltarTexture.height}; // Define a área de colisão do botão "voltar"

    // Define a posição e o tamanho do botão de som
    soundButtonRec = (Rectangle){ 1750, 20, (float)soundOnTexture.width, (float)soundOnTexture.height };

    // Variável para armazenar o nome do usuário
    char player1[20] = ""; // Nome do jogador 1
    char player2[20] = ""; // Nome do jogador 2
    char player3[20] = ""; // Nome do jogador 3
    char player4[20] = ""; // Nome do jogador 4

    // Fundo
    Image bgImage = LoadImage("fundojogo.png"); // Carrega a imagem de fundo do jogo
    Texture2D bgTexture = LoadTextureFromImage(bgImage); // Converte a imagem de fundo em textura
    UnloadImage(bgImage); // Descarrega a imagem original
    
    Image logo = LoadImage("logojogo.png"); // Carrega a imagem do logotipo do jogo
    Texture2D Texture = LoadTextureFromImage(logo); // Converte a imagem do logotipo em textura
    UnloadImage(logo); // Descarrega a imagem original
    
    Image regras = LoadImage("telaregras.png"); // Carrega a imagem da tela de regras
    Texture2D regrasTexture = LoadTextureFromImage(regras); // Converte a imagem da tela de regras em textura
    UnloadImage(regras); // Descarrega a imagem original

    Image ranking = LoadImage("telaranking.png"); // Carrega a imagem da tela de ranking
    Texture2D rankingTexture = LoadTextureFromImage(ranking); // Converte a imagem da tela de ranking em textura
    UnloadImage(ranking); // Descarrega a imagem original

    Image sair = LoadImage("sair.png"); // Carrega a imagem da opção de sair
    Texture2D sairTexture = LoadTextureFromImage(sair); // Converte a imagem da opção de sair em textura
    UnloadImage(sair); // Descarrega a imagem original

    Image botaosim = LoadImage("botaosim.png"); // Carrega a imagem do botão "sim"
    Texture2D botaosimTexture = LoadTextureFromImage(botaosim); // Converte a imagem do botão "sim" em textura
    UnloadImage(botaosim); // Descarrega a imagem original
    
    Image botaonao = LoadImage("botaonao.png"); // Carrega a imagem do botão "não"
    Texture2D botaonaoTexture = LoadTextureFromImage(botaonao); // Converte a imagem do botão "não" em textura
    UnloadImage(botaonao); // Descarrega a imagem original

    Image escolha = LoadImage("telaescolha.png"); // Carrega a imagem da tela de escolha
    Texture2D escolhaTexture = LoadTextureFromImage(escolha); // Converte a imagem da tela de escolha em textura
    UnloadImage(escolha); // Descarrega a imagem original

    Image tabuleiro = LoadImage("telajogo.png");
    Texture2D jogoTexture = LoadTextureFromImage(tabuleiro); // Converte a imagem da tela de jogo em textura
    UnloadImage(tabuleiro); // Descarrega a imagem original

    // Laço principal do menu principal
    while (!WindowShouldClose()) {
        UpdateMusicStream(musicamenu); // Atualiza o estado da música do menu
         // Verifica se o botão de som foi pressionado
        if (CheckCollisionPointRec(GetMousePosition(), soundButtonRec)) { // Se a posição do mouse estiver sobre a área do botão de som
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                // Alterna entre ligar e desligar o som da música
                pause = !pause; // Inverte o estado de pausa da música
                if (pause) PauseMusicStream(musicamenu); // Pausa a música se estiver tocando
                else ResumeMusicStream(musicamenu); // Resume a música se estiver pausada
            }
        }

        // Limpa o fundo com uma cor
        ClearBackground(RAYWHITE); // Limpa o fundo da janela com a cor branca

        DrawTexture(bgTexture, 0, 0, WHITE); // Desenha a textura de fundo na tela
        DrawTexture(Texture, -10, -50, WHITE); // Desenha o logotipo do jogo na tela
        
        // Desenha o botão de som
        if (pause) DrawTexture(soundOffTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som desligado se a música estiver pausada
        else DrawTexture(soundOnTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som ligado se a música estiver tocando
        
        // Desenha os créditos do jogo
        DrawText("Um projeto por Rivals Forge", 1500, 410, 20, WHITE); // Desenha os créditos do desenvolvedor
        DrawText("Pensado e Desenvolvido por \nBruno Alves e Nicolas Keyno", 1500, 430, 20, WHITE); // Desenha os nomes dos desenvolvedores
        DrawText("LUDO ULTIMATE 2024", 1500, 470, 20, BLUE); // Desenha o título do jogo

        // Verifica se a tecla de seta para cima foi pressionada
        if (IsKeyPressed(KEY_UP)) { // Se a tecla de seta para cima for pressionada
            selectedOption--; // Decrementa o índice da opção selecionada
            if (selectedOption < 0) { // Se o índice se tornar negativo
                selectedOption = numOptions - 1; // Volta para a última opção se estiver na primeira
            }
        }

        // Verifica se a tecla de seta para baixo foi pressionada
        if (IsKeyPressed(KEY_DOWN)) { // Se a tecla de seta para baixo for pressionada
            selectedOption++; // Incrementa o índice da opção selecionada
            if (selectedOption >= numOptions) { // Se o índice ultrapassar o número de opções
                selectedOption = 0; // Volta para a primeira opção se estiver na última
            }
        }

        // Verifica se o mouse está sobre alguma opção
        for (int i = 0; i < numOptions; i++) { // Itera sobre todas as opções do menu
            Rectangle optionRec = { 155, 400 + 50 * i, MeasureText(menuOptions[i], 50), 50 }; // Define a área de colisão da opção atual
            if (CheckCollisionPointRec(GetMousePosition(), optionRec)) { // Se a posição do mouse estiver sobre a área da opção
                selectedOption = i; // Seleciona a opção sob o cursor do mouse
                break;
            }
        }

        // Desenha as opções do menu
        for (int i = 0; i < numOptions; i++) { // Itera sobre todas as opções do menu
            // Define a cor da opção com base na seleção
            Color textColor = (i == selectedOption) ? RED : WHITE; // Define a cor do texto como vermelho se a opção estiver selecionada, senão, branco
            DrawText(menuOptions[i], 155, 400 + 50 * i, 50, textColor); // Desenha o texto da opção na tela
        }
        
        // Abrir tela de regras
        if (CheckCollisionPointRec(GetMousePosition(), (Rectangle){ 155, 400 + 50 * 1, MeasureText(menuOptions[1], 50), 50 })) { // Se a posição do mouse estiver sobre a área da opção de regras
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                mostrarRegras = true; // Define a variável para mostrar as regras como true
            }
        }

        // Se a variável para mostrar as regras estiver true, desenha a tela de regras
        if (mostrarRegras) { // Se a variável para mostrar as regras estiver true
            // Carrega e desenha a imagem das regras
            DrawTexture(regrasTexture, 0, 0, WHITE); // Desenha a tela de regras na tela
            if (pause) DrawTexture(soundOffTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som desligado se a música estiver pausada
            else DrawTexture(soundOnTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som ligado se a música estiver tocando

            DrawTexture(voltarTexture, (int)voltarButtonRec.x, (int)voltarButtonRec.y, WHITE); // Desenha o botão "voltar"
            
            // Se o botão "voltar" for pressionado, define a variável para mostrar as regras como false
            if(CheckCollisionPointRec(GetMousePosition(), voltarButtonRec)) { // Se a posição do mouse estiver sobre a área do botão "voltar"
                if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                    mostrarRegras = false; // Define a variável para mostrar as regras como false
                }
            }
        }

        // Abrir tela de ranking
        if (CheckCollisionPointRec(GetMousePosition(), (Rectangle){ 155, 400 + 50 * 2, MeasureText(menuOptions[2], 50), 50 })) { // Se a posição do mouse estiver sobre a área da opção de ranking
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                mostrarRanking = true; // Define a variável para mostrar o ranking como true
            }
        }

        // Se a variável para mostrar o ranking estiver true, desenha a tela de ranking
        if (mostrarRanking) { // Se a variável para mostrar o ranking estiver true
            DrawTexture(rankingTexture, 0, 0, WHITE); // Desenha a textura do ranking na tela
            if (pause) DrawTexture(soundOffTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som desligado se a música estiver pausada
            else DrawTexture(soundOnTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som ligado se a música estiver tocando

            DrawTexture(voltarTexture, (int)voltarButtonRec.x, (int)voltarButtonRec.y, WHITE); // Desenha o botão "voltar"
            // Se o botão "voltar" for pressionado, define a variável para mostrar o ranking como false
            if(CheckCollisionPointRec(GetMousePosition(), voltarButtonRec)) { // Se a posição do mouse estiver sobre a área do botão "voltar"
                if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                    mostrarRanking = false; // Define a variável para mostrar o ranking como false
                }
            }
        }

        // Mostrar opção de sair
        if (CheckCollisionPointRec(GetMousePosition(), (Rectangle){ 155, 400 + 50 * 3, MeasureText(menuOptions[3], 50), 50 })) { // Se a posição do mouse estiver sobre a área da opção de sair
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                mostrarSair = true; // Define a variável para mostrar a opção de sair como true
            }
        }

        // Se a variável para mostrar a opção de sair estiver true, desenha a tela de sair
        if (mostrarSair) { // Se a variável para mostrar a opção de sair estiver true
            DrawTexture(sairTexture, 0, 0, WHITE); // Desenha a textura da opção de sair na tela
            DrawTexture(botaosimTexture, 540, 700, WHITE); // Desenha o botão "sim"
            DrawTexture(botaonaoTexture, 1100, 700, WHITE); // Desenha o botão "não"

            // Verifica se o botão "sim" ou "não" foi pressionado
            // Se o botão "sim" for pressionado, fecha a janela
            if(CheckCollisionPointRec(GetMousePosition(), (Rectangle){540, 700, 200, 100})) { // Se a posição do mouse estiver sobre a área do botão "sim"
                if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                    CloseWindow(); // Fecha a janela
                }
            }
            // Se o botão "não" for pressionado, define a variável para mostrar a opção de sair como false
            if(CheckCollisionPointRec(GetMousePosition(), (Rectangle){1100, 700, 200, 100})) { // Se a posição do mouse estiver sobre a área do botão "não"
                if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                    mostrarSair = false; // Define a variável para mostrar a opção de sair como false
                }
            }

            // Desenha o texto "SIM" e "NÃO"
            DrawText("SIM", 625, 720, 60, RAYWHITE); // Desenha o texto "SIM"
            DrawText("NÃO", 1185, 720, 60, RAYWHITE); // Desenha o texto "NÃO"

            // Se o mouse estiver sobre o botão "sim" ou "não", muda a cor do texto para verde ou vermelho, respectivamente
            if(CheckCollisionPointRec(GetMousePosition(), (Rectangle){540, 700, 200, 100})) { // Se a posição do mouse estiver sobre a área do botão "sim"
                DrawText("SIM", 625, 720, 60, GREEN); // Desenha o texto "SIM" em verde
            }
            if(CheckCollisionPointRec(GetMousePosition(), (Rectangle){1100, 700, 200, 100})) { // Se a posição do mouse estiver sobre a área do botão "não"
                DrawText("NÃO", 1185, 720, 60, RED); // Desenha o texto "NÃO" em vermelho
            }
        }

        // Escolher jogar e exibir tela de escolha
        if (CheckCollisionPointRec(GetMousePosition(), (Rectangle){ 155, 400 + 50 * 0, MeasureText(menuOptions[0], 50), 50 })) { // Se a posição do mouse estiver sobre a área da opção "Jogar"
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                mostrarJogar = true; // Define a variável para mostrar a tela de escolha como true
            }
        }

        // Se a variável para mostrar a tela de escolha estiver true, desenha a tela de escolha
        if (mostrarJogar) { // Se a variável para mostrar a tela de escolha estiver true
            DrawTexture(escolhaTexture, 0, 0, WHITE); // Desenha a tela de escolha na tela
            if (pause) DrawTexture(soundOffTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som desligado se a música estiver pausada
            else DrawTexture(soundOnTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som ligado se a música estiver tocando
            DrawTexture(voltarTexture, (int)voltarButtonRec.x, (int)voltarButtonRec.y, WHITE); // Desenha o botão "voltar"
            //desenha 3 retangulos para escolha
            Rectangle escolha1 = { 235, 530, 350, 240 };
            DrawRectangleLinesEx(escolha1, 5, WHITE);
            Rectangle escolha2 = { 785, 530, 350, 240 };
            DrawRectangleLinesEx(escolha2, 5, WHITE);
            Rectangle escolha3 = { 1335, 530, 350, 240 };
            DrawRectangleLinesEx(escolha3, 5, WHITE);

            // Se o botão "voltar" for pressionado, define a variável para mostrar a tela de escolha como false
            if(CheckCollisionPointRec(GetMousePosition(), voltarButtonRec)) { // Se a posição do mouse estiver sobre a área do botão "voltar"
                if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { // Se o botão esquerdo do mouse for pressionado
                    mostrarJogar = false; // Define a variável para mostrar a tela de escolha como false
                }
            }


            if (CheckCollisionPointRec(GetMousePosition(), escolha1)) {
                //deixa o retangulo vermelho
                DrawRectangleLinesEx(escolha1, 5, RED);
            }
            if (CheckCollisionPointRec(GetMousePosition(), escolha2)) {
                //deixa o retangulo vermelho
                DrawRectangleLinesEx(escolha2, 5, RED);
            }
            if (CheckCollisionPointRec(GetMousePosition(), escolha3)) {
                //deixa o retangulo vermelho
                DrawRectangleLinesEx(escolha3, 5, RED);
                    if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                        mostrarJogo = true;
                    }
            }

        }
        //desenha a tela com o tabuleiro
            if(mostrarJogo) {
                DrawTexture(jogoTexture, 0, 0, WHITE);
                    if (pause) DrawTexture(soundOffTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som desligado se a música estiver pausada
                        else DrawTexture(soundOnTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE); // Desenha o botão de som ligado se a música estiver tocando
                }

        EndDrawing(); // Finaliza o desenho do frame
    }

    // Fecha a janela ao sair do laço principal
    CloseWindow(); // Fecha a janela

    // Descarregar recursos
    UnloadTexture(soundOnTexture); // Descarrega a textura do botão de som ligado
    UnloadTexture(soundOffTexture); // Descarrega a textura do botão de som desligado
    UnloadTexture(bgTexture); // Descarrega a textura de fundo
    UnloadTexture(Texture); // Descarrega a textura do logotipo
    UnloadTexture(regrasTexture); // Descarrega a textura da tela de regras
    UnloadTexture(rankingTexture); // Descarrega a textura da tela de ranking
    UnloadTexture(sairTexture); // Descarrega a textura da opção de sair
    UnloadTexture(botaosimTexture); // Descarrega a textura do botão "sim"
    UnloadTexture(botaonaoTexture); // Descarrega a textura do botão "não"
    UnloadTexture(escolhaTexture); // Descarrega a textura da tela de escolha
    UnloadMusicStream(musicamenu); // Descarrega a música do menu
    CloseAudioDevice(); // Fecha o dispositivo de áudio

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
