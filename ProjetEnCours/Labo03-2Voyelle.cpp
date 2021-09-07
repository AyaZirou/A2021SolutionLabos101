// But : Demande � l'utilisateur une lettre et dire si la lettre est une voyelle ou une consonne
// Auteur :  Vincent Tr�panier
// Date : 2021-09-07

#include <iostream>
//using namespace std;
void main()
{ 
   setlocale(LC_ALL, "");
   // D�clare mes variables 
   char lettre;

   
   // On affiche un message pour que l'utilisateur puisse rentrer une lettre
   std::cout <<"Veuillez entrer  une lettre :"; 
   // Lecture de la lettre sur le clavier 
   std::cin >>  lettre ; 
   // On s'assure que l'utilisateur a bien rentr� une lettre, sinon on affiche un message d'erreur.

   if (lettre >= 'a' && lettre <= 'z' || lettre >= 'A' && lettre <= 'Z')
   {
      /*
      if (lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u' || lettre == 'y' ||
         lettre == 'A' || lettre == 'E' || lettre == 'I' || lettre == 'O' || lettre == 'U' || lettre == 'Y')
      {
         std::cout << lettre << " est une voyelle. \n";
      }
      else 
      {
         std::cout << lettre << " est une consonne. \n";
      
      }
      */
      // Si dans le if on compare toujours la m�me variable ici lettre et qu'on teste toujours �galite == alors
      // On peut utiliser un switch
      switch (lettre)
      {
      case 'a' :
      case 'e' :
      case 'i' :
      case 'o' :
      case 'u' :
      case 'y' :
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'Y':
         std::cout << lettre << " est une voyelle. \n";
         // A la fin du case, il  ne faut pas OUBLIER le BREAK;
         break;

      default:
      std::cout << lettre << " est une consonne. \n";
         break;
      }



   }
   else 
   {
      std::cout << "Erreur, il faut ins�rer une lettre. \n";
   }
 
   system("pause");

//Plan de tests         �cran 
// TODO : A compl�ter
   /*
      lettre      �cran

      a           voyelle
      b           consonne
      15          Erreur
   
   
   
   */
   


   




}