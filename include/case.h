#ifndef CASE_H
#define CASE_H
#include <iostream>
#include "etudiants.h"

using namespace std;

enum class Etat { Vide, Pleine, Liberee_delivree };


class Etudiants;

class Case
{
    public:
        Case();
        ~Case();

        Etat getEtat();
        void setEtat(Etat val);

        Etudiants* etudiant;
    protected:

    private:
        Etat etat;
};

#endif // CASE_H
