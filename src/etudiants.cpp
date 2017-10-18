#include "etudiants.h"

Etudiants::Etudiants()
{
  	this->cle = 0;
    this->info = 0;
}

Etudiants::~Etudiants()
{

}

unsigned int Etudiants::getCle()
{
	return this->cle;
}

unsigned int Etudiants::getInfo()
{
	return this->info;
}
