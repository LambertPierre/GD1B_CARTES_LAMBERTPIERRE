#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

    Monstre::Monstre() : _pv(), _atk(), _nom(), _proprio(), _dispo(true), _mort(false){}
    
    
    int Monstre::getPv(){
         return _pv; 
    }
    int Monstre::getAtk(){
         return _atk; 
    }  
    string Monstre::getNom(){
         return _nom; 
    }

    string Monstre::getNom(){
         return _nom; 
    } 

    void Monstre::setPv(int changement){
        _pv += changement;
    }
        
    void Monstre::affiche(){
        cout << '⌈' << _nom << '⌉' << endl;
        cout << '⌊' << _pv << "  " << _atk << '⌋' << endl;
        
    }

    void Monstre::attaque(monstreCible){
        if (_dispo=true){
            monstreCible::setPv(-(_atk));
        Monstre::setPv(-(monstreCible::getAtk()));
        cout << _nom << " à infliger " << _atk << " a " << monstreCible::getNom() << " !" << endl;
        cout << "Mais "<< monstreCible::getNom() << " à infliger " << _atk << " a " << _nom << " !" << endl;
        monstreCible::mortCheck();
        Monstre::mortCheck();
        _dispo=false;
        }
        else{
            cout << "Ce monstre à déjà attaquer" << endl;
        }
        
    }

    void mortCheck(){
        if ( _pv <= 0){
            _mort = true;
            cout << _nom << "est mort !" << endl;
            return = true
        }
    }
    void reveil(){
        _dispo = true;
    }

#endif