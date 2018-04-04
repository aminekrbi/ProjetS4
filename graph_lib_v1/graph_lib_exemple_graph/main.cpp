#include "grman/grman.h"
#include <iostream>

#include "graph.h"
int affichagegraph(int choixgraph,Graph g)
{
    int it=choixgraph;

while ( !key[KEY_ESC] )
    {
    while (it==choixgraph)
        {
        g.update();
        grman::mettre_a_jour();
             if( mouse_b&1 && (mouse_x>15 && mouse_x<100) && (mouse_y>15 && mouse_y<100))
                {
                    choixgraph--;
                    return choixgraph;
                }
             if( mouse_b&1 && (mouse_x>915 && mouse_x<1000) && (mouse_y>15 && mouse_y<100))
                {
                    choixgraph++;
                    return choixgraph;
                }
        }
    }
    return 0;
}

int main()
{
    ///variables
    int choixgraph=2;

    /// A appeler en 1er avant d'instancier des objets graphiques etc...
    grman::init();

    /// Le nom du répertoire où se trouvent les images à charger
    grman::set_pictures_path("pics");
    grman::set_pictures_path("imggraph1");
    grman::set_pictures_path("imggraph2");

    /// Déclaration graphe
    Graph g;
    Graph i;
    Graph j;

    ///load images graphes
    g.make_example();



    /// Vous gardez la main sur la "boucle de jeu"
    /// ( contrairement à des frameworks plus avancés )
    while ( !key[KEY_ESC] )
    {
        /// Il faut appeler les méthodes d'update des objets qui comportent des widgets
        g.update();

        ///bouton graphe précédent
        if( mouse_b&1 && (mouse_x>15 && mouse_x<100) && (mouse_y>15 && mouse_y<100))
           {
               if(choixgraph>1)
               {    choixgraph--;
                    if (choixgraph==1)
                        choixgraph=affichagegraph(choixgraph,g);
                    if (choixgraph==2)
                        choixgraph=affichagegraph(choixgraph,i);
                    if (choixgraph==3)
                        choixgraph=affichagegraph(choixgraph,j);
               }
               else
               {
                   choixgraph=1;
                   choixgraph=affichagegraph(choixgraph,g);
               }
           }

        ///bouton graph suivant
        if( mouse_b&1 && (mouse_x>915 && mouse_x<1000) && (mouse_y>15 && mouse_y<100))
            {
                if (choixgraph<3)
                {
                        choixgraph++;

                        if (choixgraph==1)
                            choixgraph=affichagegraph(choixgraph,g);
                        if (choixgraph==2)
                            choixgraph=affichagegraph(choixgraph,i);
                        if (choixgraph==3)
                            choixgraph=affichagegraph(choixgraph,j);
                }
                else
                {
                    choixgraph=3;
                    choixgraph=affichagegraph(choixgraph,j);
                }
            }

        ///bouton cases cochées

    }


    grman::fermer_allegro();

    return 0;
}
END_OF_MAIN();


