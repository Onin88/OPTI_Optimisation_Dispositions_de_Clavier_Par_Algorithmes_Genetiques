#include "structure.h"

int main(){
    /*individu_s* individu_test_bon = malloc(sizeof(individu_s));
    individu_test_bon->touches = malloc(26 * sizeof(touche_s));
    individu_test_bon->rempli = 0;
    individu_test_bon->vide = 40;
    individu_test_bon->mark = 0.0;
    individu_test_bon->tab = malloc(4*sizeof(int*));
    for(int k = 0 ; k < 4 ; k++){
        individu_test_bon->tab[k] = malloc(10*sizeof(int));
        for (int p = 0; p < 10; p++)
        {
            individu_test_bon->tab[k][p] = 0;
        }
        
    }*/
    afficherInfoIndividu(individu_test_bon);
    freeIndividu(individu_test_bon);
    afficherInfoIndividu(individus[i]);
    freePopulation(individus);
    return EXIT_SUCCESS;
}