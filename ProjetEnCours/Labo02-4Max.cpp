// But : Demande � l'utilisateur 3 entiers et dire lequel est le plus grand
// Auteur : Aya Zirou 
// Date : 2021-09-03

#include <iostream>
using namespace std;
void main()
{ 
   // D�clare mes variables 
   int nombreEntier1;
   int nombreEntier2;
   int nombreEntier3;
   int maximum;

   
   // On affiche un message pour que l'utilisateur puisse rentrer un nombre entier 
   std::cout <<"Veuillez entrer un nombre entier:"; 
   // Lecture du nombre sur le clavier 
   std::cin >> nombreEntier1; 
   // Le premier nombre est automatiquement le maximum
   maximum = nombreEntier1;
 
   // On affiche un message pour que l'utilisateur puisse rentrer un nombre entier 
   std::cout << "Veuillez entrer un nombre entier:";
   // Lecture du nombre sur le clavier 
   std::cin >> nombreEntier2;

   // TODO : On doit comparer le deuxi�me nombre avec le maximum. 
   // Si le deuxi�me nombre est plus grand que le max, alors il devient le max : le max re�oit la valeur de nb2
   if (nombreEntier2 > maximum)
   {
      maximum = nombreEntier2;
   }


   // On affiche un message pour que l'utilisateur puisse rentrer un nombre entier 
   std::cout << "Veuillez entrer un nombre entier:";
   // Lecture du nombre sur le clavier 
   std::cin >> nombreEntier3;

   // TODO : On va comparer le troisi�me entier avec le maximum
   // Si le nombreEntier3 est plus grand que maximum, alors maximum re�oit la valeur de nombreEntier3
   if (maximum < nombreEntier3)
   {
      maximum = nombreEntier3;
   }





   // On affiche la valeur du maximum
   std::cout << "le maximum est " << maximum << std::endl;
 
   system("pause");

//Plan de tests         �cran 
// TODO : A compl�ter
   /*
   nb1      max      nb2     max    nb3    max    Ecran
   15       15        17      17     10      17    Le maximum est 17
   -4       -4        -8     -4      -1     -1     Le maximum est -1
   5        5          5      5       5      5     Le maximum est 5
   -8       -8         0      0        4     4     Le maximum est 4 
   a        0          ne fonctionne plus          Le maximum est 0
   
   
   
   
   
   */
   


   




}