#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Monstre{

    private:

        int _pv;
        int _atk;
        string _nom;
        string _proprio;
        bool _dispo;
        bool _mort;
        
        
    public:

        Monstre();

        int getPv();
        int getAtk();
        string getNom();

        void setPv(int changement);

        void affiche();

        void attaque(monstreCible);

        void mortCheck();
        void reveil();
        
};

#endif