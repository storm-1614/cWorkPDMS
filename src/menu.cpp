#include "../include/showInfo.h"
#include "../include/pdms.h"

#include <cstdio>

int menu()
{
    int choice;
    clearScreen();
    printf("\t\t\t|---------------------------------------|\n");
    printf("\t\t\t|        个人通讯录管理系统(PDMS)       |\n");
    printf("\t\t\t|---------------------------------------|\n");
    printf("\t\t\t|            1.显示信息                 |\n");
    printf("\t\t\t|            2.增加记录                 |\n");
    printf("\t\t\t|            3.删除记录                 |\n");
    printf("\t\t\t|            4.修改记录                 |\n");
    printf("\t\t\t|            5.查询                     |\n");
    printf("\t\t\t|            6.排序                     |\n");
    printf("\t\t\t|            0.退出登录                 |\n");
    printf("\t\t\t|---------------------------------------|\n");
    printf("\t\t\t请输入你的选择：");
    scanf("%d", &choice);
    return choice;
}

bool jumpFunc(int code)
{
    switch (code) {
        case 1:
            echo();
            break;
	case 2:
	    break;`
        default:
            echo();
    }
    return true;
}
