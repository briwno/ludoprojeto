#include <stdio.h>
#include <raylib.h>
#include <string.h> 

// Protótipos das funções
void TelaMenu();
void CheckMusicPlaying(); // Movido para fora da função TelaMenu

// Variáveis globais
bool pause = false;
Music musicamenu;
Texture2D soundOnTexture;
Texture2D soundOffTexture;
Rectangle soundButtonRec;
int selectedOption = 0; // Opção selecionada no menu

// Array contendo as opções do menu
const char* menuOptions[] = {"Jogar", "Regras", "Ranking", "Logout", "Fechar"};
int numOptions = sizeof(menuOptions) / sizeof(menuOptions[0]);

int main() {
    Image jogo = LoadImage("logoprograma.png");
    // Inicializa a janela
    InitWindow(0, 0, "Ludo Ultimate");
    SetWindowIcon(jogo);
    SetTargetFPS(60);
    InitAudioDevice();
    // Carrega a música
    musicamenu = LoadMusicStream("sons/musicamenu.wav");
    SetMusicVolume(musicamenu, 0.5);
    // Toca a música em loop
    PlayMusicStream(musicamenu);

    // Carrega as texturas dos botões de som
    soundOnTexture = LoadTexture("sound_on.png");
    soundOffTexture = LoadTexture("sound_off.png");

    // Define a posição e o tamanho do botão de som
    soundButtonRec = (Rectangle){ 1850, 20, (float)soundOnTexture.width, (float)soundOnTexture.height };

    // Variável para armazenar o nome do usuário
    char player1[20] = "";
    char player2[20] = "";
    char player3[20] = "";
    char player4[20] = "";

    // Exibe a tela de introdução para obter o nome do usuário
   // TelaIntroducao(nome);

    // Fundo
    Image bgImage = LoadImage("fundojogo.png");
    Texture2D bgTexture = LoadTextureFromImage(bgImage);
    UnloadImage(bgImage);
    
    Image logo = LoadImage("logojogo.png");
    Texture2D Texture = LoadTextureFromImage(logo);
    UnloadImage(logo);

    // Laço principal do menu principal
    while (!WindowShouldClose()) {
        UpdateMusicStream(musicamenu);
         // Verifica se o botão de som foi pressionado
        if (CheckCollisionPointRec(GetMousePosition(), soundButtonRec)) {
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                // Alterna entre ligar e desligar o som da música
                pause = !pause;
                if (pause) PauseMusicStream(musicamenu);
                else ResumeMusicStream(musicamenu);
            }
        }

        // Limpa o fundo com uma cor
        ClearBackground(RAYWHITE);

        DrawTexture(bgTexture, 0, 0, WHITE);
        DrawTexture(Texture, -10, -50, WHITE);
        
        // Desenha o botão de som
        if (pause) DrawTexture(soundOffTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE);
        else DrawTexture(soundOnTexture, (int)soundButtonRec.x, (int)soundButtonRec.y, WHITE);

        // Desenha a mensagem "Logado como:" seguido do nome do usuário
        //DrawText(TextFormat("Logado como: %s", nome), 20, 20, 20, WHITE);
        
        // Desenha os créditos do jogo
        DrawText("Um projeto por Rivals Forge", 1500, 410, 20, WHITE);
        DrawText("Pensado e Desenvolvido por \nBruno Alves e Nicolas Keyno", 1500, 430, 20, WHITE);
        DrawText("LUDO ULTIMATE 2024", 1500, 470, 20, BLUE);

        // Verifica se a tecla de seta para cima foi pressionada
        if (IsKeyPressed(KEY_UP)) {
            selectedOption--;
            if (selectedOption < 0) {
                selectedOption = numOptions - 1; // Volta para a última opção se estiver na primeira
            }
        }

        // Verifica se a tecla de seta para baixo foi pressionada
        if (IsKeyPressed(KEY_DOWN)) {
            selectedOption++;
            if (selectedOption >= numOptions) {
                selectedOption = 0; // Volta para a primeira opção se estiver na última
            }
        }

        // Verifica se o mouse está sobre alguma opção
        for (int i = 0; i < numOptions; i++) {
            Rectangle optionRec = { 155, 400 + 50 * i, MeasureText(menuOptions[i], 50), 50 };
            if (CheckCollisionPointRec(GetMousePosition(), optionRec)) {
                selectedOption = i; // Seleciona a opção sob o cursor do mouse
                break;
            }
        }

        // Desenha as opções do menu
        for (int i = 0; i < numOptions; i++) {
            // Define a cor da opção com base na seleção
            Color textColor = (i == selectedOption) ? RED : WHITE;
            DrawText(menuOptions[i], 155, 400 + 50 * i, 50, textColor);
        }
        
        // Atualiza a janela
        EndDrawing();
    }
    

    // Fecha a janela ao sair do laço principal
    CloseWindow();
    
    //Descarregar
    UnloadTexture(soundOnTexture);
    UnloadTexture(soundOffTexture);
    UnloadMusicStream(musicamenu);
    CloseAudioDevice();

    return 0;
}
