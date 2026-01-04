#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define WIDTH 40
#define HEIGHT 20

int fishX, fishY, obstacleX, obstacleY, score;
int gameOver;

void Setup() {
    gameOver = 0;
    fishX = WIDTH / 2;
    fishY = HEIGHT / 2;
    obstacleX = rand() % WIDTH;
    obstacleY = 0;
    score = 0;
}

void Draw() {
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0) printf("#");
            if (i == fishY && j == fishX) printf("🐟");
            else if (i == obstacleY && j == obstacleX) printf("🪨");
            else printf(" ");
            if (j == WIDTH - 1) printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\nScore: %d\n", score);
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 75: fishX--; break;
            case 77: fishX++; break;
            case 72: fishY--; break;
            case 80: fishY++; break;
            case 27: gameOver = 1; break;
        }
    }
    void Logic() {
    obstacleY++;
    if (obstacleY >= HEIGHT) {
        obstacleY = 0;
        obstacleX = rand() % WIDTH;
        score++;
    }
    if (fishX == obstacleX && fishY == obstacleY) gameOver = 1;
    if (fishX < 0 || fishX >= WIDTH || fishY < 0 || fishY >= HEIGHT) gameOver = 1;
    Sleep(50);
}
}
void Logic() {
    obstacleY++;
    return 0;
}