#include <iostream>
#include <iomanip>
#include <windows.h>
#include "prac1.h"
#include "prac2.h"
#include "prac3.h"
#include "prac4.h"


int main() {
    while (true) {
        // Help
        system("cls");
        std::cout << "Available modules:\n";
        std::cout << std::setw(32) << std::setfill('-') << '\n';
        std::cout << "1: Data types and their binary representation\n";
        std::cout << "2: Arrays, searches and sorts\n";
        std::cout << "3: References & pointers. Matrices\n";
        std::cout << "4: Strings and their methods\n";
        std::cout << std::setw(32) << std::setfill('-') << '\n';
        std::cout << "0: Exit\n";
        std::cout << std::setw(32) << std::setfill('-') << '\n';
        std::cout << std::setfill(' ');

        // Get command from user
        char userAction;
        std::cout << "<< Module:\n>> ";
        std::cin.sync();
        std::cin >> userAction;

        // Exit
        if (userAction == '0') break;

        system("cls");
        switch (userAction) {
            case '1': {
                prac1();
                break;
            }
            case '2': {
                prac2();
                break;
            }
            case '3': {
                prac3();
                break;
            }
            case '4':{
                prac4();
                break;
            }



                // Unknown module error
            default: {
                std::cout << "RuntimeError: unknown module\n";
                Sleep(500);
            }
        }
    }

    return 0;
}
