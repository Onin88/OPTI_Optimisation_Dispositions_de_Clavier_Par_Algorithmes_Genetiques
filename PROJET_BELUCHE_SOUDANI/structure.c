#include "structure.h"

const double tab_occurence[26][26] = {
    {31	, 242 , 392 , 208 , 48 , 135 , 232 , 37 , 1255 , 32 , 7 , 663 , 350 , 1378 , 17 , 412 , 44 , 905 , 409 , 613 , 599 , 301 , 2 , 6 , 69 , 12},
	{158 , 2 , 1 , 2 , 130 , 1 , 2 , 0 , 132 , 4 , 10 , 181 , 1 , 1 , 146 , 1 , 3 , 187 , 29 , 16 , 44 , 3 , 0 , 0,4,0},
	{312 , 0 , 73 , 19 , 765 , 2 , 2 , 411 , 209 , 3 , 5 , 124 , 5 , 1 , 677 , 11 , 7 , 100 , 14 , 142 , 132 , 2 , 0 , 0 , 11 , 0},
	{427 , 1 , 8 , 24 , 2409 , 2 , 5 , 25 , 378 , 3 , 0 , 14 , 21 , 5 , 231 , 4 , 6 , 134 , 64 , 3 , 406 , 4 , 1 , 0 , 5 , 0},
	{616 , 176 , 917 , 998 , 782 , 258 , 209 , 67 , 179 , 96 , 8 , 1382 , 1056 , 2121 , 136 , 699 , 190 , 1514 , 3318 , 1307 , 761 , 258 , 11 , 125 , 15 ,60},
	{181,1,1,8,180,118,1,1,190,0,0,43,1, 1,213,1 , 2,106,12,1,61,0 , 0,0 , 1,0},
	{135,1,10,9,408,4,63,3,69,6,4,74,10,103,47,5,1,197,12,23,81 ,1,0 ,0,2 ,0},
	{267,5,4,1,285,0,0,0,149,3,0,3,4,17,107,0,3,18,5,0,42,0,1,0,7,0},
	{176,85,203 ,172 ,1030,114,115,6,49,14,0,798,181,797,524,75,215,400,897,1243,11,190,1,40,0,4},
	{76,0,0 ,0,100,0 ,0,0 ,20,0,0,0,0,91,0,0,0,0,0,42,0,0,0,2,0},
	{8,0,0,0,6,0,3,0,6,0,0,0,10,3,9,0,0,5,1,0,0 ,0,0 ,0,3 ,0},
	{1270,14,22,58,2366 ,25,14,39,512,4,1,647,18 ,41,281,69,47,16 ,126 ,42,369,14,0 ,0,15,1},
	{510,152,11 ,11,1099 ,0,1 ,1,302,0 ,0,7 ,243 ,4,334,201,2 ,10 ,10,8,52 ,1,0 ,0,3 ,0},
	{405,30,438,785,985,124,222,24,316,17,7,89,68,249,303,130,82,55,846,1694,114,109,0,1,19,20},
	{6,83,88,101,46,32,115,7,452,14	,3,184,391,1646,8,175,19,491,126,109,1086,28,9,4,62,4},
	{671,1,3,21,441,5,1,136,119,0,0,377,2,4,505,125,1,363,31,65,140,1,0,0,1,0},
	{2,0,3,0,1,0,0,1,0,0,0,1,3,0,0,1,0,1,0,0,975,0,0,0,0,0},
	{896,53,168,302,1885,46,96,5,583,11,3,292,181,88,520,82,51,176,386,445,183,77,1,1,21,5},
	{809,85,306,735,1377,151,73,83,565,36,0,453,192,107,521,496,191,137,702,578,343,92,1,6,30,10},
	{881,25, 166, 515, 1484,52,19,64,984,28,3,331,70,40,363,268,96, 668, 404, 269, 270,41,4,6,18,3},
	{168 , 87 , 165 , 162 , 781	, 40 , 83 , 4 , 534 , 41 , 3 , 302 , 128 , 516 , 19 , 184 , 15 , 980 , 591 , 469 , 14 , 177 , 1 , 264 , 8 , 4},
	{277 , 0 , 1 , 0, 502 , 0 , 0 , 0 , 288 , 0 , 0 , 1 , 0 , 0 , 167 , 0 , 0 , 81 , 0 , 0 , 11 , 0 , 0 , 0 , 0 , 0},
	{11 , 1 , 1 , 0 , 3 , 0 , 0 , 2 , 8 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 1 , 0 , 4 , 0 , 0 , 0 , 0 , 0 , 2 , 0},
	{35 , 14 , 37 , 36 , 68 , 8 , 7 , 5 , 57 , 0 , 0 , 21 , 15 , 3 , 7 , 56 , 11 , 3 , 15 , 35 , 2 , 18 , 0 , 4 , 0 , 0},
	{63 , 0 , 7 , 7 , 59 , 3 , 4 , 0 , 0 , 0 , 0 , 13 , 8 , 5 , 15 , 14 , 0 , 10 , 75 , 9 , 2 , 4 , 0 , 0 , 0 , 0},
	{8 , 0 , 2 , 6 , 49 , 3 , 1 , 0 , 1 , 1 , 0 , 11 , 4 , 2 , 15 , 4 ,	1 ,	0 ,	3 ,	1 ,	0 ,	7 ,	4 ,	0 ,	0 ,	2}
};



void remplir_tableau(individu_s* individu)
{

    
    srand(time(NULL));
    int alea1;
    int alea2;
    while(individu->nb_rempli != 26){
        alea1 = rand()%4; // 1er nombre aléatoire inférieur ou égal à 4
        alea2 = rand()%10; // 2eme nombre aléatoire inférieur ou égal à 10
        if(individu->tab[alea1][alea2] == 0){
            individu->tab[alea1][alea2] =individu->nb_rempli +1;

            individu->touches[individu->nb_rempli].ligne = alea1;
            individu->touches[individu->nb_rempli].col = alea2;

            individu->touches[individu->nb_rempli].lettre= individu->nb_rempli+ 65;
            individu->nb_rempli++;
            individu->nb_vide--;
        }
    }
}



bool estVide(individu_s* individu){
    return individu->nb_vide == 0;
}

void calcul_note(individu_s* individu){
    double res;

    for(int i = 0 ; i < 25 ; i++){
        for(int j = i+1 ; j < 26 ; j++){
            if(tab_occurence[i][j] + tab_occurence[j][i] != 0){

                res += (abs(individu->touches[i].ligne - individu->touches[j].ligne) + abs(individu->touches[i].col - individu->touches[j].col))/((tab_occurence[i][j] + tab_occurence[j][i])/TOTAL_LETTRE);
            }
        }
    }
    individu->note = res/18000000;


}



individu_s init_Individu(){
    individu_s individu;
    individu.touches = (touche_s*)malloc(26*sizeof(touche_s));

    individu.nb_rempli = 0;
    individu.nb_vide = 40;

    individu.tab = malloc(4*sizeof(int));


    for(int j = 0 ; j < 4 ; j++){
        individu.tab[j] = malloc(10*sizeof(int));
        for(int k = 0 ; k < 10 ; k++){
            individu.tab[j][k] = 0;
        }
    }

    remplir_tableau(&individu);
    calcul_note(&individu);
}

individu_s* initialisation_pop(int x)
{

    individu_s* individu = malloc(x * sizeof(individu_s));
    for(int i = 0 ; i<x ; i++){
        individu[i] = init_Individu();
    }

    
    fusion(individu, 0, x);
    return individu;

}



void freeIndividu(individu_s* individu){
    free(individu->touches);
    for(int i = 0 ; i < 4 ; i++){
        free(individu->tab[i]);
    }
}

void freePopulation(individu_s pop[]){
    for(int i = 0 ; i < length(pop) ; i++){
        freeIndividu(&pop[i]);
    }
    free(pop);
}

individu_s* select_parent(individu_s* individus){
    individu_s* parents = malloc((length(individus)/2) * sizeof(individu_s));
    int position = length(individus)/2;
    for(int i = (length(individus)); i > (length(individus)/2); i--){
        parents[position] = individus[i];
        position--;
    }
    return parents;
}

void fusion(individu_s arr[], int gauche, int middle, int droite) {
    int i;
    int j;
    int k;
    int premier = middle-gauche + 1;
    int deuxieme = droite-middle;

    individu_s* arr2=initialisation_pop(premier);
    individu_s* arr3=initialisation_pop(deuxieme);


    for (i = 0; i<premier; i++)
        arr2[i] = arr[gauche + i];
    for (j = 0; j<deuxieme; j++)
        arr3[j] = arr[middle + 1 + j];

    i = 0;
    j = 0; 
    k = gauche;



    while (i<premier && j<deuxieme) {
        if (arr2[i].note<=arr3[j].note) {
            arr[k]=arr2[i];
            i++;
        } else {
            arr[k]=arr3[j];
            j++;
        }
        k++;
    }
    while (i<premier) {
        arr[k]=arr2[i];
        i++;
        k++;
    }
    while (j<deuxieme) {
        arr[k] = arr3[j];
        j++;
        k++;
    }

   freePopulation(arr2);
    freePopulation(arr3);
}

void mergeSort(individu_s arr[], int gauche, int droite) {
    if (gauche<droite) {
        int middle = gauche + (droite-gauche) / 2;
        mergeSort(arr, gauche,middle);
        mergeSort(arr, middle + 1,droite);
        fusion(arr, gauche,middle, droite);
    }
}

void simpleEnjambement(individu_s enfants[], individu_s pere, individu_s mere) {
    
    
    individu_s fils = init_Individu();
    individu_s fille = init_Individu();

    int copie_fille[4][10];
    int copie_fils [4][10];



    bool estValideFils=false;
    bool estValideFille=false;
    if(!(pere.nb_rempli + mere.nb_rempli > 40)){
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 5; j++) {
                fils.tab[i][j] = pere.tab[i][j];
                fille.tab[i][j] = mere.tab[i][j];
                copie_fils[i][j] = fils.tab[i][j];
                copie_fille[i][j] = fille.tab[i][j];
            }
            for(int z = 5; z < 10; z++) {
                fille.tab[i][z] = pere.tab[i][z];
                fils.tab[i][z] = mere.tab[i][z];
                copie_fils[i][z] = fils.tab[i][z];
                copie_fille[i][z] = fille.tab[i][z];
            }
        }
        /* Vérifie si les fils et fille sont valide. c-a-d si ils ne possèdent pas de doublons dans le clavier*/
        for(int k = 0; k < 4; k++){
            for(int l = 0; l < 10; l++){
                int occurence_fils = 0;
                int occurence_fille = 0;
                for(int x = 0; x<4; x++){
                    for(int y = 0; y<10; y ++){
                        if(copie_fils[x][y]==fils.tab[k][l]){
                            occurence_fils ++;
                            if(occurence_fils>1){
                                estValideFils = true;
                            }      
                        }
                        if(copie_fille[x][y]==fille.tab[k][l]){
                            occurence_fille ++;
                            if(occurence_fille>1){
                                estValideFille = true;
                            }      
                        }
                    }
                }
            }
        }
    }else{
        printf("La somme des deux touches des parents > 40 donc pas d'enfants possible ! \n");
    }

    for(int x = 0; x < length(enfants); x++){
        bool estFull=false;
        if(estFull==false){

            if(estVide(enfants[x]) && !estValideFils){

                enfants[x] = *fils;
                estFull = true;

            }else{

                if(estVide(enfants[x]) && !estValideFille){
                    enfants[x] = *fille;
                    estFull = true;


                }
            }
        }
    }
    fusionSort(enfants,0,length(enfants));
}

void permutation(individu_s individu){
    int ligne1 = rand()%4;
    int col1 = rand()%10;
    int ligne2 = rand()%4;
    int col2 = rand()%10;
    
    int temporaire = individu->tab[ligne1][col1];
    individu->tab[ligne1][col1] = individu->tab[ligne2][col2];
    individu->tab[ligne2][col2] = temporaire;
}

void print_touches(individu_s individu){
    for(int i = 0 ; i < 26 ; i++){
        printf("La touche est : %c :\nLigne : %i\n Colonne : %i\n",individu.touches[i].lettre , individu.touches[i].ligne , individu.touches[i].col);
    } 
}

void print_info_individu(individu_s individu){
    printf("nb_vide : %i\nnb_rempli : %i\nTotal de touches : %i\n",individu.nb_vide , individu.nb_rempli , (individu.nb_rempli + individu.nb_vide));
    printf("Note: %f\n",individu.note);
    printf("Clavier :  :\n");
    for(int i=0;i<4;i++){
        for(int j=0; j<10; j++){
            if(individu.tab[i][j] != 0){
                printf("%c\t" , individu.tab[i][j] + 64);
            }else{
                printf("0\t");
            }
        }
        printf("\n");
    }
    print_touches(individu);
}

int length(individu_s* individus){
    return sizeof(individus)/sizeof(individus[0]);    
}


unsigned long long facto(int x){
    int resultat = 1;

    for(int i = 2 ; i <= n ; i ++){

        resultat *= i;
    }


    return resultat;
}