#include "affichage.h"
#include "serveur.h"
#include "lecture.h"

int main (int argc, char** argv) {
/*
    navalmap_t * map;
    coord_t mapsize = {10,10};
    map = init_navalmap (MAP_RECT,mapsize,2);
    init_graphics(TAILLE*map->size.x,TAILLE*map->size.x);
    affiche_auto_off();
    affiche_map (map);
    affiche_all();

	//strucutre temporaire en attendant la lecture de fichier
	info inf; //il faudra faire la vrai avec un malloc
	inf.nbjoueurs = 4;
	inf.nbtour = 20;
	inf.nbequipes = 3;

	//lancer le jeu
	int try=jeu(inf);

	free_navalmap(map);
	wait_escape();
    */

    game_info jeu = lire_fichier ("exemple.niveau");

    printf ("test : %d\n", jeu.Kmax);

    exit(0);
}
