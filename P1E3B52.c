//需使用Big5編碼格式開啟檔案，比避免中文變成亂碼
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
    system("cls");  //清除畫面上所有文字/元素
    printf("請輸入四位數密碼:\n");
    int pw = 2024, input;       //密碼預設2024
    scanf("%d", &input);
    if (input != pw) {
        printf("密碼輸入錯誤\n");
        printf("%c", '\a');
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
    fflush(stdin);  //清除緩衝區殘值
    scanf(" %c", &ch); //空一格以避免讀入空值導致程式無法繼續
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
//雖然對git hub不太熟悉，在建置環境上花了比較久的時間