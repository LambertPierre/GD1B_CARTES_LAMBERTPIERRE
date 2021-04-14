#ifndef MAGE_CPP
#define MAGE_CPP

#include "Monstre.cpp"
#include "Mage.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

    Mage::Mage() : _pv(30), _nom(), _plateau(), _mana(0), _main() {}

    int Mage::getPv(){
         return _pv; 
    }
    int Mage::getNom(){
         return _nom; 
    }

    void Monstre::setPv(int changement){
        _pv += changement;
    }

    void Monstre::affiche(){
        cout << "Oo---- " << _nom << "----oO" << endl;
        cout << endl;
        for (i=0, i<sizeof(_plateau) ,i++){
            _plateau[i].affiche();
            cout << endl;
        }
        cout << endl;
        cout << "Oo----  ----oO" << endl;
    }

    void ordreAttaque(){
        string monstre;
        string monstreCible;
        int attaqueJoueur;
        cout << "Avec quel monstre voulez-vous attaquer, qui n'a pas déjà attaquer ?" << endl;
        cin >> monstre << endl;
        bool choixbon=false
        for (i=0, i<sizeof(_plateau) ,i++){
            if (monstre==_plateau[i]){
                choixbon=true
            }
        }
        if(choixbon=false){
            cout << "Le monstre que vous avez écrit ne vous apartient pas" << endl;
            void ordreAttaque();
        }
        cout << "Voulez vous attaquer le joueur adverse ? Si oui 1, Si non 2"
        cin >> attaqueJoueur << endl;
        if (attaqueJoueur == 1){
            joueur2.setPv(-(monstre.getAtk()))
        }
        else {
            cout << "Sur quel monstre voulez-vous attaquer ?" << endl;
        cin >> monstreCible << endl;
        /* Je ne vois pas comment on vérifie si l'adversaire a le monstre choissie*/
        monstre.attaque(monstreCible);
        }
        
    }

    void creerMonstre(){
        int pvChoisie;
        int atkChoisie;
        string nomChoisie;

        cout << "Quel est la vie de la créature que vous vouelez créer ?" << endl;
        cin >> pvChoisie >> endl;
        cout << "Quel est l'attaque de la créature que vous vouelez créer ?" << endl;
        cin >> atkChoisie >> endl;
        cout << "Quel est le nom de la créature quev ous vouelez créer ?" << endl;
        cin >> nomChoisie >> endl;

        Monstre Tauren(pvChoisie,atkChoisie,nomChoisie,_nom);
    }

    void mortCheck(){
        if (_pv <= 0){
            return true
        }
    }

    void debutdeTour(){
        if (_manaMax != 10){
            _manaMax += 1;
        }
        _mana = _manaMax;

        for (i=0, i<sizeof(_plateau) ,i++){
            _plateau[i].reveil();
        }
    }



#endif