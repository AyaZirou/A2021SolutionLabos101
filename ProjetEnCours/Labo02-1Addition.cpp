// But : �crire un programme qui demande deux nombres entiers � l'utilisateur,
// calcule la somme de ces deux nombres et l'affiche � l'�cran
// Auteur : Karine Moreau
// Date : 2021-08-30


#include <iostream>

void main()
{
	// Ici on va r�server de la place en m�moire pour m�moriser les valeurs fournies 
	// par l'utilisateur. Il faut d�clarer des variables. Une variable est un emplacement
	// m�moire dont le contenu peut varier : �tre chang�.
	// Pour d�clarer une variable, il faut deux informations :
	// 1. Le type de la variable (du texte (string 15 octets), un nombre entier (integer : int : 4 octets), 
	// nombre � virgule (float 4 octets, double 10 octets), un caract�re (char 1 octet), 
	//								bool�en, (bool 1 octet)) 
	// 2. un nom � la variable : ne doit pas commencer par un chiffre, pas d'espace dans le nom
	//							 commence par une lettre minuscule et 
	//							 les autres mots commencent par une masjucule, pas d'accent
	

	// D�claration des variables
	int premierNombre;
	int deuxiemeNombre;
	int resultat;
	
	setlocale(LC_ALL, "");

	std::cout << "Veuillez entrer un premier nombre : ";
	// On va lire l'information tap�e sur le clavier 
	// (p�riph�rique d'entr�e : input : canal d'entr�e : cin)
	std::cin >> premierNombre;

	// On va v�rifier que la variable contient la bonne information
	// On affiche le contenu de la variable � l'�cran
	//std::cout << premierNombre;

	std::cout << "Veuillez entrer un deuxi�me nombre : ";
	// On va lire l'information tap�e sur le clavier 
	// (p�riph�rique d'entr�e : input : canal d'entr�e : cin)
	std::cin >> deuxiemeNombre;

	// On va v�rifier que la variable contient la bonne information
	// On affiche le contenu de la variable � l'�cran
	//std::cout << deuxiemeNombre;

	// On fait la somme des deux nombres et on les m�morise dans une autre variable
	resultat = premierNombre + deuxiemeNombre;

	// On affiche le r�sultat � l'�cran
	std::cout << premierNombre << "+" << deuxiemeNombre << "=" << resultat;


}