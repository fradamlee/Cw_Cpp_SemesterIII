// librerias
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>

// Como recive un puntero a char pero imprime:
// A lo que apunta el puntero que recivio (y no el puntero en si)
void proc1(char* ptrChar) {
    *ptrChar = 'e';
    cout << ptrChar << endl;
}

// Cual es la difrencia entre proc1 y proc2
void proc2(char* &cEle) {
    *cEle = 'l';
    cout << cEle << endl;
}

void proc3(char & cEle) {
    cEle = 'f';
    cout << cEle << endl;
}

int main()
{   

    char cObj1 = 'a';
    char *ptrCObj;
    ptrCObj = &cObj1;

    proc1(ptrCObj);
    //
    proc2(ptrCObj);
    //
    char cObj2 = 'b';
    proc3(cObj2);
    return 0;
}
