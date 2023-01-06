#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include"fonction.h"
int main()
{
bool NbConversions = true;
int choix; // le choix de lutilisateur
long long int resultat,nb,med;                        // le resultat
char v[50];                             // le nombre à convertir
int choixAutreOp = 1;
while(NbConversions)
{
    choix = 0;
    resultat = 0;
    nb = 0;
    printf(" Choisissez l'operation que vous vouler effectuer en entrant un nombre entre 1 et 12 \n");// on donne a l'utilisater la chance de choisir une conversion parmis les 12 conversions possibles
    printf(" 1. Conversion du binaire vers le octale \n");
    printf(" 2. Conversion du binaire vers le decimale \n");
    printf(" 3. Conversion du binaire vers l'hexadecimale \n");
    printf(" 4. Conversion de l'octale vers le binaire \n");
    printf(" 5. Conversion de l'octale vers le decimale \n");
    printf(" 6. Conversion de l'octale vers l'hexadecimale \n");
    printf(" 7. Conversion du decimale vers le binaire \n");
    printf(" 8. Conversion du decimale vers l'octal \n");
    printf(" 9. Conversion du decimale vers le l'hexadecimale \n");
    printf(" 10. Conversion de l'hexadecimale vers le binaire \n");
    printf(" 11. Conversion de l'hexadecimale vers le decimal \n");
    printf(" 12. Conversion de l'hexadecimale vers l'octale \n");
    scanf("%d", &choix); //on recupere le choix de l'utilisateur (la conversion qu'il souhaite effectuer)
    printf("Entrez le nombre que vous voulez convertir  : \n ");//on donne a l'utilisateur le choix d'introduire le nombre qu'il sohaite converir
//on recupere le choix de l'utilisateur (le nombre qu'il souhaite convertir
    switch (choix)
    {
    case 1: scanf("%lld",&nb);//on recupere le choix de l'utilisateur (le nombre qu'il souhaite convertir
        //si l'utilisateur souhaire convertir un nombre en binaire vers l'octale
        resultat =bin_oct(nb);
        printf(" Resultat de la conversion : %d \n", resultat);
            break;
    case 2: scanf("%lld",&nb);
        //si l'utilisateur souhaire convertir un nombre enbinaire vers le decimale
        resultat =binoct_dec(nb,2);
        printf(" Resultat de la conversion : %d \n", resultat);
            break;
    case 3:
        scanf("%lld",&nb);//si l'utilisateur souhaire convertir un nombre enbinaire vers l'hexadecimale
         bin_hex(nb);
            break;
    case 4:scanf("%lld",&nb);//si l'utilisateur souhaire convertir un nombre en octale vers le binaire
        resultat =oct_bin(nb);
        printf(" Resultat de la conversion : %d \n", resultat);
            break;
    case 5:
        scanf("%lld",&nb);//si l'utilisateur souhaire convertir un nombre en octale vers le decimale
        resultat =binoct_dec(nb,8);
        printf(" Resultat de la conversion : %d \n", resultat);
            break;
    case 6:
        scanf("%lld",&nb);//si l'utilisateur souhaire convertir un nombre en octale vers l'hexadecimale
           oct_hex(nb);
            break;
    case 7:scanf("%lld",&nb);//si l'utilisateur souhaire convertir un nombre en decimale vers le binaire
        resultat =dec_binoct(nb,2);
        printf(" Resultat de la conversion : %d \n", resultat);
            break;
    case 8:
        scanf("%lld",&nb);//si l'utilisateur souhaire convertir un nombre en decimale vers l'octal
        resultat =dec_binoct(nb,8);
        printf(" Resultat de la conversion : %d \n", resultat);
            break;
    case 9:scanf("%lld",&nb);//si l'utilisateur souhaire convertir un nombre endecimale vers le l'hexadecimale
         dec_hex(nb);
            break;
    case 10:scanf("%s",&v);//si l'utilisateur souhaire convertir un nombre en l'hexadecimale vers le binaire
        resultat =hex_bin(v);
        printf(" Resultat de la conversion : %d \n", resultat);
            break;
    case 11:scanf("%s",&v);//si l'utilisateur souhaire convertir un nombre en hexadecimale vers le decimal
        resultat =hex_dec(v);
        printf(" Resultat de la conversion : %d \n", resultat);
            break;
    case 12:scanf("%s",&v);//si l'utilisateur souhaire convertir un nombre en hexadecimale vers l'octale
        resultat =hex_oct(v);
        printf(" Resultat de la conversion : %d \n", resultat);
            break;
    default:
        printf("Le nombre que vous avez entré n'est pas valide \n");
        break;
    }

    //on affiche le resultat pour l'utilisateur
    // Pour assurer que l'utilisateur peut faire autant d'opéartions qu'il souhaite
    printf("Est ce que vous voulez effectuer une autre opération ? (si oui ecrir 1, sinon ecrir 0)\n");
    scanf("%d",&choixAutreOp);//on recupere le choix de l'utilisateur (si il souhaite faire une autre conversion
    if (choixAutreOp == 1)
        NbConversions = true; //si l'utilisateur choisis 1 on lui redemande de choisir la base et on repete l'operation
    else
        NbConversions = false; //sinon on arrete l'operation
}
}
