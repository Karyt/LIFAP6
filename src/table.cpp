#include <math.h>
#include <cstddef>
#include "../include/table.h"
#include "../include/etudiants.h"

using namespace std;

Table::Table()
{
    this->tailleMax = 100;

    tab = new Case[this->tailleMax]();
    for(int i = 0 ; i < this->tailleMax ; i++)
    {
        cout << "tab[" << i << "] = " << tab[i].etudiant->getInfo();
    }
}

Table::Table(int taille)
{
    this->tailleMax = min(100, taille);

    tab = new Case[this->tailleMax]();

    for(int i = 0 ; i < this->tailleMax ; i++)
    {
        cout << "tab[" << i << "] = " << tab[i].etudiant->getInfo();
    }
}

Table::~Table()
{
    //dtor
}
/*
void Table::insererElement(unsigned int valeur);
{
    //this->tab;
}
*/
int Table::hachage(unsigned int cle)
{

}

int Table::getTailleMax()
{
    return this->tailleMax;
}
void Table::setTailleMax(int val)
{
    this->tailleMax = val;
}
