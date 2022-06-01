#include <iostream>
#include <string>
#include "myfuncs.h"
#include <bitset>

using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    if (argc == 4) {
        unsigned long long firstNum{};
        unsigned long long secondNum{};
        unsigned long long threeNum{};
        try {
            firstNum = stoull(argv[1]);
            secondNum = stoull(argv[2]);
            threeNum = stoull(argv[3]);
        }
        catch (const invalid_argument& ia) {
            cerr << "Невозможно преобразовать аргумент(ы) в число типа: " << ia.what() << endl;
            return 0;
        }


        unitCounter(firstNum, secondNum, threeNum);
    }
    else {
        cout << "Необходимо указать три аргумента командной строки. " << endl;
    }
    return 0;
}