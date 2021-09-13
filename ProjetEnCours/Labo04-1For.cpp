// But : Le programme demande � l'utilisateur 5 notes. Il calcule la moyenne du groupe et l'affiche � l'�cran.
// Auteur :  Karine Moreau
// Date : 2021-09-13

#include <iostream>

using namespace std;

void main()
{ 
   setlocale(LC_ALL, "");
   // D�claration des constantes qui doivent �tre initialis�es � leur d�claration
   const int NB_NOTES = 5;

   // D�clare mes variables 
   // il y a les variables pour les informations fournies par l'utilisateur. 
   // C'est la responsabilit� de l'utilisateur de fournir cette information.
   double note;
   // Il y a les variables pour calculer le r�sultat. 
   // C'est la responsabilit� du programmeur d'initialiser (donner une valeur de d�part) les variabes de r�sultat
   double moyenne=0;    // Au d�part, il y a aucune note de connues donc la moyenne est � 0.

 
   // On ne doit pas copier coller les M�MES instructions. On DOIT les mettre dans une boucle
   for (int compteur = 1; compteur <= NB_NOTES; compteur++)
   {
     // On demande � l'utilisateur une note
      cout << "Veuillez entrer une note : ";
      cin >> note;

      // On doit ajouter cette note � la variable moyenne
      moyenne = moyenne + note;
   }

   // Il faut calculer la moyenne en divisant par le nombre total de notes
   moyenne = moyenne / NB_NOTES;
   // On affiche le r�sultat � l'�cran
   cout << "La moyenne du groupe est de " << moyenne << endl;

  
   system("pause");

//Plan de tests         �cran 
// 
   /*
    
   
   
   
   */
   


   




}