#include "../include/pdms.h"
#include <cstdio>
#include <iostream>

bool addInfo()
{
    clearScreen();
    address newAdd;

    printf("\t\t\t|---------------------------------------|\n");
    printf("\t\t\t|               添加信息                |\n");
    printf("\t\t\t|---------------------------------------|\n");
    printf("\t\t\t|输入姓名:");
    std::cin >> newAdd.name;
    printf("\t\t\t|输入电话:");
    std::cin >> newAdd.number;
    printf("\t\t\t|输入家庭住址:");
    std::cin >> newAdd.homeAddress;
    addressData.emplace_back(newAdd);
    return true;
}
