//�ݨϥ�Big5�s�X�榡�}���ɮסA���קK�����ܦ��ýX
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
    printf("\n�{���]�p�@�~�@\n");
    printf("UE3B52\n");
    printf("411102252\n");
    printf("�H�¦t\n");
    system("pause");
    system("cls");  //�M���e���W�Ҧ���r/����
    printf("�п�J�|��ƱK�X:\n");
    int pw = 2024, input;       //�K�X�w�]2024
    scanf("%d", &input);
    if (input != pw) {
        printf("�K�X��J���~\n");
        printf("%c", '\a');
        return 1;
    }
    system("cls");
    printf("---------------------------\n");
    printf("| 'A'...'Z' : Uppercase   |\n");
    printf("| 'a'...'z' : Lowercase   |\n");
    printf("| '0'...'9' : Digit       |\n");
    printf("| Otherwise : �H�¦t       |\n");
    printf("---------------------------\n");
    printf("�п�J�@�Ӧr��\n");
    char ch;
    fflush(stdin);  //�M���w�İϴݭ�
    scanf(" %c", &ch); //�Ť@��H�קKŪ�J�ŭȾɭP�{���L�k�~��
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("UE3B 52 �H�¦t\n");
    }
    printf("�Ы����N�䵲���{��...\n");
    system("pause");
    return 0;
}
//�������@�~�P�Ұ�W�m�ߪ��j�P�ۦP�A��J��X�P�P�_����
//�ߤ@����֥Ϊ��Osystem("cls")���{���A�ΨӲM���e��
//��l�����O�b�ƲߤW�Ҫ����e
//���M��git hub���Ӽ��x�A�b�ظm���ҤW��F����[���ɶ�