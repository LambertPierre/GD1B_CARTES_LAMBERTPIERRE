#include "Monstre.cpp"
#include <iostream>
#include <string>

using namespace std;

/* Bonjour Madame !
    J'ai eu un problème avec VSC comme beaucoup, je ne pouvoir pas degguger mon code. 
J'ai préférer ne rien signaler et l'ignorer car j'était déjà bien en retard et je voulais faire le plus d'exercice possible.
Alors j'ai fais de la théorie plutôt que de la pratique, merci de votre compréhension.
Bon courage pour la correction des copies !*/

int main(){

    bool partieFini = false;
    Mage joueur1(joueur1);
    Mage joueur2(joueur2);

    
    while(!partieFini){

        
        joueur1.debutDeTour();
        joueur2.debutDeTour();
        for (i=0, i<sizeof(joueur1._plateau) ,i++){
            joueur1.ordreAttaque();
        }
        for (i=0, i<sizeof(joueur2._plateau) ,i++){
            joueur2.ordreAttaque();
        }
        joueur1.creerMonstre();
        joueur2.creerMonstre();
        partieFini = joueur1.mortCheck() || joueur2.mortCheck;
    }
    
    
    return 0;
}


/*Pour le 4ème Exercice:

    Il faut surment faire une nouvelle classe "Sort":
    class Sort{
    private:
        int cout;
        int changement; (Positif pour soigner et négatif pour infliger des dégâts)
        string _nom;
        string _proprio; (Les Sorts seront dans le tableau dynamique "main" que j'ai déjà mis)
    public:
        Sort();
        int getCout();
        int getChangement();
        string getNom();
        void affiche();(Il y aura une partie ou tout les sorts de la main seront afficher)
        void utilisation();(Là, le changement de pv ce fera sur une cible choisie par le proprio et la carfte ce détruirais)

        Avec comme changement dans le main un moment du 
        tour de chaque joueur pour lancé des sorts.
        Au début du Tour la pioche effectué par un Mage 
        pourrait donné un Sort ou un créature.
};