# Optimisation des Dispositions de Clavier par Algorithmes Génétiques

### Groupe
- SOUDANI Younes
- BELUCHE Quentin

## Description

Ce projet vise à optimiser la disposition des lettres sur un clavier en utilisant des algorithmes génétiques, une approche métaheuristique inspirée du processus de sélection naturelle. L'idée principale est de créer des "populations" de dispositions de touches, de les évaluer en fonction de critères de performance, puis de sélectionner et de croiser les meilleures dispositions pour en générer de nouvelles.

## Métaheuristique : Algorithme Génétique

L'algorithme génétique fonctionne en simulant les mécanismes de l'évolution. Chaque disposition de lettres sur le clavier est considérée comme un "individu" ou "chromosome". Le processus se déroule en plusieurs étapes :

1. **Initialisation** : Génération aléatoire d'une population de dispositions. Chaque disposition est représentée par un tableau de caractères, indiquant la position de chaque lettre sur le clavier.

2. **Évaluation** : Chaque individu est évalué à l'aide d'une fonction d'adaptation qui calcule sa qualité. Les critères d'évaluation incluent :
   - **Distance parcourue par les doigts** : La somme des distances nécessaires pour taper un texte donné, en tenant compte de la position des lettres et du nombre de touches "survolées".
   - **Fréquence des bigrammes** : Utilisation d'un fichier contenant les fréquences des paires de lettres adjacentes pour pondérer les dispositions.

3. **Sélection** : Les individus les plus performants (ayant la plus haute valeur d'adaptation) sont sélectionnés pour la reproduction. La population est généralement réduite de moitié, conservant les meilleures solutions.

4. **Croisement et Mutation** : Les parents sélectionnés sont croisés pour créer une nouvelle génération. Le croisement se fait souvent par "simple enjambement", et des mutations aléatoires sont appliquées pour introduire de la diversité, comme l'échange de positions de touches.

5. **Remplacement** : La nouvelle génération remplace complètement l'ancienne, et le processus est répété sur plusieurs itérations.

6. **Critère d'arrêt** : Le processus s'arrête après un nombre défini d'itérations ou lorsque des améliorations significatives cessent d'être observées.

## Structures de Données

Le projet utilise plusieurs structures pour organiser les données :

- **Structure des Touches** : Représente la position (ligne, colonne) d'une touche sur le clavier et la lettre qui y est associée.
- **Structure Individu** : Contient un tableau 4x10 pour la disposition du clavier, un tableau de touches, et des variables pour suivre le nombre de cases vides et remplies, ainsi qu'une note d'évaluation.

## Fonctions Clés

Le code comprend plusieurs fonctions cruciales pour la gestion de la population et de l’évaluation :

- **Fonction d'évaluation** : Calcule la note d’un individu basé sur la distance entre les lettres et leur fréquence d’apparition.
- **Initialisation de la Population** : Crée et initialise un tableau d'individus avec des dispositions aléatoires.
- **Sélection des Parents** : Sélectionne les individus les plus performants pour la reproduction.
- **Croisement et Mutation** : Gère les opérations de croisement et de mutation pour générer de nouveaux individus.

## Conclusion

En utilisant des algorithmes génétiques, ce projet cherche à déterminer une disposition optimale des lettres sur un clavier, minimisant le temps et l'effort nécessaires pour taper. Grâce à l’évaluation continue et l’évolution des solutions, il est possible d’obtenir des résultats efficaces et adaptés aux besoins des utilisateurs. Ce type d'optimisation peut avoir des applications pratiques dans la conception de claviers ergonomiques et d'autres interfaces utilisateur.
