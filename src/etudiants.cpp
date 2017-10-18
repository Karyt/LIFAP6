#include <iostream>
#include <stdlib.h>

#include "../include/etudiants.h"

using namespace std;


Etudiants::Etudiants()
{
  	this->cle = 0;
    this->info = 0;
}

Etudiants::Etudiants(unsigned int cle, unsigned int info)
{
  	this->cle = cle;
    this->info = info;
}

Etudiants::~Etudiants()
{

}

void Etudiants::afficher()
{
    cout << "Etudiant : " << endl;
    cout << "cle = " << this->cle << endl;
    cout << "age = " << this->info << endl;
}

unsigned int Etudiants::getCle()
{
	return this->cle;
}

unsigned int Etudiants::getInfo()
{
	return this->info;
}
