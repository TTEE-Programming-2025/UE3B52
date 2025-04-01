#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf(
        "                _______\n"
        "                |  |  |   \n"
        "                |  |  |   \n"
        "                |  |  |\n"
        "                |  |  |\n"
        "                |  |  |\n"
        "                |  |  |\n"
        "            [___|__|__|___]\n"
        "                 | | |\n"
        "                 | | | \n"
        "                 | | |\n"
        "                 | | |   \n"
        "                 | | |\n"
        "                 | | |\n"
        "                 | | |\n"
        "                 | | |   \n"
        "                 | | | \n"
        "                 | | |\n"
        "                 \\ | /\n"
        "                  \\|/     \n"
    );
    printf("\n程式設計作業一\n");
    printf("UE3B52\n");
    printf("411102252\n");
    printf("沈威宇\n");
    system("pause");
    system("cls");
    printf("請輸入四位數密碼:\n");
    int pw = 2025, input;       //密碼預設2025
    scanf("%d", &input);
    if (input != pw) {
        printf("密碼輸入錯誤\n");
        return 1;
    }
    system("cls");
    printf("---------------------------\n");
    printf("| 'A'...'Z' : Uppercase   |\n");
    printf("| 'a'...'z' : Lowercase   |\n");
    printf("| '0'...'9' : Digit       |\n");
    printf("| Otherwise : 沈威宇       |\n");
    printf("---------------------------\n");
    printf("請輸入一個字元\n");
    char ch;
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("UE3B 52 沈威宇\n");
    }
    printf("請按任意鍵結束程式...\n");
    system("pause");
    return 0;
}
//本次的作業與課堂上練習的大致相同，輸入輸出與判斷式等
//唯一比較少用的是system("cls")此程式，用來清除畫面
//其餘較像是在複習上課的內容