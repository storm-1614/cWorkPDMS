#include "include/menu.h"

int main()
{
    int choice;
    while (1)
    {
        choice = menu();
        jumpFunc(choice);
    }
    return 0;
}
