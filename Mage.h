#ifndef MAGE_H
#define MAGE_H

#include "Monstre.cpp"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Puissance4{

    private:
        int _pv;
        string _nom;
        vector<string> _plateau;
        int _manaMax;
        int mana;
        vector<string> _main;

    public:
        Mage();

        int getPv();
        string getNom();

        void setPv(int changement);

        void affiche();

        void ordreAttaque();

        void creerMonstre();

        void mortCheck();

        void debutdeTour();

};

#endif