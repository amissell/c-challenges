#include <stdio.h>



typedef struct
{
    char name[30];
    int score

}player;


int main()
{

}




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_JOUEURS 10
#define MAX_QUESTIONS 5

// Structure pour joueur
typedef struct {
    char nom[30];
    int score;
} Joueur;

// Structure pour question
typedef struct {
    char question[200];
    char options[3][50];
    char reponse; // 'a', 'b', 'c'
} Question;

// Tableau des joueurs
Joueur joueurs[MAX_JOUEURS];
int nb_joueurs = 0;

// Tableau des questions
Question questions[MAX_QUESTIONS] = {
    {"Quel mot-clé permet de definir une constante en C?", {"let", "const", "#define"}, 'c'},
    {"Quelle est la taille d'un int en octets?", {"2", "4", "8"}, 'b'},
    {"Quelle fonction permet d'afficher du texte?", {"printf", "scanf", "getchar"}, 'a'},
    {"Quel opérateur sert à l'adresse d'une variable?", {"&", "*", "%"}, 'a'},
    {"Comment déclare-t-on un tableau en C?", {"int tab;", "int tab[10];", "tab int[10];"}, 'b'}
};

// Fonctions prototypes
void afficherMenu();
int lireChoix();
int jouerQuiz();
void ajouterJoueur(char nom[], int score);
void afficherClassement();
int jeuBonus();

int main() {
    int choix;
    srand(time(NULL)); // Pour le bonus aléatoire

    do {
        afficherMenu();
        choix = lireChoix();

        if (choix == 1) {
            int score = jouerQuiz();
            char nom[30];
            printf("Entrez votre nom: ");
            scanf("%s", nom);
            ajouterJoueur(nom, score);
            printf("Votre score: %d\n", score);
        }
        else if (choix == 2) {
            afficherClassement();
        }
        else if (choix == 3) {
            printf("Merci d'avoir joué ! Au revoir.\n");
        }
        else if (choix == 4) { // Bonus
            int bonus = jeuBonus();
            printf("Vous avez gagné %d points bonus !\n", bonus);
        }
        else {
            printf("Choix invalide. Réessayez.\n");
        }
    } while (choix != 3);

    return 0;
}

// Fonction pour afficher le menu
void afficherMenu() {
    printf("\n=== QUIZ C ===\n");
    printf("1. Jouer\n");
    printf("2. Voir le classement\n");
    printf("3. Quitter\n");
    printf("4. Bonus\n");
    printf("Choisissez: ");
}

// Lire le choix utilisateur
int lireChoix() {
    int choix;
    scanf("%d", &choix);
    return choix;
}

// Fonction du quiz
int jouerQuiz() {
    int score = 0;
    char reponse;

    for(int i=0; i<MAX_QUESTIONS; i++) {
        printf("\nQuestion %d: %s\n", i+1, questions[i].question);
        printf(" a) %s\n", questions[i].options[0]);
        printf(" b) %s\n", questions[i].options[1]);
        printf(" c) %s\n", questions[i].options[2]);
        printf("Votre réponse: ");
        scanf(" %c", &reponse);

        if(reponse == questions[i].reponse || reponse == questions[i].reponse - 32) { // majuscule ou minuscule
            printf("Correct ! +10 points\n");
            score += 10;
        } else {
            printf("Incorrect !\n");
        }
    }

    return score;
}

// Ajouter joueur au classement
void ajouterJoueur(char nom[], int score) {
    if(nb_joueurs < MAX_JOUEURS) {
        strcpy(joueurs[nb_joueurs].nom, nom);
        joueurs[nb_joueurs].score = score;
        nb_joueurs++;
    } else {
        printf("Classement plein ! Impossible d'ajouter.\n");
    }
}

// Afficher classement du meilleur au moins bon
void afficherClassement() {
    if(nb_joueurs == 0) {
        printf("Aucun joueur pour le moment.\n");   
        return;
    }

    // Tri simple (bubble sort) par score décroissant
    for(int i=0; i<nb_joueurs-1; i++) {
        for(int j=i+1; j<nb_joueurs; j++) {
            if(joueurs[j].score > joueurs[i].score) {
                Joueur tmp = joueurs[i];
                joueurs[i] = joueurs[j];
                joueurs[j] = tmp;
            }
        }
    }

    printf("\n=== Classement ===\n");
    for(int i=0; i<nb_joueurs; i++) {
        printf("%d. %s - %d points\n", i+1, joueurs[i].nom, joueurs[i].score);
    }
}

