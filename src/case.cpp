#include "case.h"

Case::Case()
{
    this->etat = Etat::Vide;
}

Case::~Case()
{
    //dtor
}

Etat Case::getEtat()
{
    return this->etat;
}
void Case::setEtat(Etat val)
{
    this->etat = val;
}
