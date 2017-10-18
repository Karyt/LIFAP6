#ifndef ETUDIANTS_H
#define ETUDIANTS_H


class Etudiants
{
	public:
    	Etudiants();
		~Etudiants();

  		unsigned int getCle();
  		void setCle(unsigned int val);

  		unsigned int getInfo();
  		void setInfo(unsigned int info);

	protected:

	private:
		unsigned int cle;
		unsigned int info;
};

#endif // ETUDIANTS_H
