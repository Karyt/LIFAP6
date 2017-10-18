#include <iostream>
#include <stdlib.h>
#include "../include/etudiants.h"
#include "../include/table.h"

using namespace std;


int main()
{
    unsigned int cle1 = 11507461;
    unsigned int info1 = 20;

    Etudiants etu1(cle1, info1);
    etu1.afficher();

    Table t1(1);


    return 0;
}
