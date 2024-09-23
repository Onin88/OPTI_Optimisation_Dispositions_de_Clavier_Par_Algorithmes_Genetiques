#ifndef STRUCTURE_H
#define STRUCTURE_H




#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

//Attribue a chaque lettre une valeure
#define A 1 
#define B 2
#define C 3
#define D 4
#define E 5
#define F 6
#define G 7
#define H 8
#define I 9
#define J 10
#define K 11
#define L 12
#define M 13
#define N 14
#define O 15
#define P 16
#define Q 17
#define R 18
#define S 19
#define T 20
#define U 21
#define V 22
#define W 23
#define X 24
#define Y 25
#define Z 26


#define TOTAL_LETTRE 100047

struct touche{

    int ligne;
    int col;
    char lettre;
};
typedef struct touche touche_s;

//structure d'individu
struct individu{ 
    int** tab; // le tableau representant le clavier
    touche_s* touches;
    int nb_vide; //  cases vides
    int nb_rempli; //cases remplies
    double note; // note de l'individu
};



typedef struct individu individu_s;


individu_s* initialisation_pop(int x); // initialise la population
individu_s init_Individu();
void print_touches(individu_s individu); //fonction qui print les touches
void print_info_individu(individu_s individu); //print les stats de l'individu

void fusion(individu_s arr[], int left, int middle, int right); //fusionne 2 tableau trié
void mergeSort(individu_s arr[], int left, int right); // merge sort ( trie fusion )


void simpleEnjambement(individu_s enfants[], individu_s pere, individu_s mere);// Croisement a simple enjambement entre le pere et la mere
void permutation(individu_s* individu); //switch 2 touches d'un individu
individu_s* select_parent(individu_s* individus); // Génére la nouvelle population
void calcul_note(individu_s* individu); //Evalue l'individu en fct de ses touches



void freeIndividu(individu_s* individu); // Libère l'individu
void freePopulation(individu_s pop[]);// Libère la population entière

unsigned long long facto(int x); //Factoriel d'une valeur
int length(individu_s* individus); //Nbr d'individu dans la pop
void remplir_tableau(individu_s* individu); // rempli le tableau
bool estVide(individu_s* individu); // true si vide


#endif