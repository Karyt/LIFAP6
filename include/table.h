#ifndef TABLE_H
#define TABLE_H


class Table
{
    public:
        Table();
        ~Table();

    protected:

    private:
        int tailleMax; // taille max de la table
        void hachage(); // fonction de hachage

};

#endif // TABLE_H
