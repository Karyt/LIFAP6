#ifndef TABLE_H
#define TABLE_H
#include "case.h"

class Case;

class Table
{
    public:

        Table();
        Table(int taille);
        ~Table();

        void insererElement(unsigned int valeur);
        int hachage(unsigned int cle);
        int getTailleMax();
        void setTailleMax(int val);

    protected:

    private:
        Case* tab;
        int tailleMax; // taille max de la table
        void hachage(); // fonction de hachage

};

#endif // TABLE_H
