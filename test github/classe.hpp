//
//  classe.hpp
//  test github
//
//  Created by Céleste Liogier on 05/11/2020.
//  Copyright © 2020 Céleste Liogier. All rights reserved.
//

#ifndef classe_hpp
#define classe_hpp

#include <stdio.h>
#include <vector>
#include <iostream>


class Creature
{
private:
    std::vector<std::string> m_nom;// nom du personnage
    std::string m_pointdevie;// point de vie depend du nom ( est ce qu il faudrait un vecteur)
int m_prix;// prix de la carte quand tu souhaite l'acheter
    public:
        Creature();
        ~Creature();

        void creature();// ajouter tous les personnages
        void ajouterInfoCreature();// fonction pour ajouterun personnage
        void degats();// la creature recoit une attaque est perd des points de vie
        // programme pour associer les carte de creature avec les cartes d'energies ( mais pour le moment pas de classe energie )
        void afficherTypeEnergie();//afficher les cartes energie qu'il peut avoir
        void afficherEnergie();// afficher les cartes d'energie qu'il a ( peut etre pas dans cette classe)
};


#endif /* classe_hpp */
