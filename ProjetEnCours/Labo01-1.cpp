// But : �crire un programme qui affiche un message � l'�cran
// Auteur : Karine Moreau
// Date : 2021-08-26



// Il faut ouvrir un porte � notre programme. 
// Le programme recherche toujours la fonction principale pour commencer, 
// qui s'appelle toujours main
// n'importe quelle fonction dans un programme est suivie de parenth�ses qui contiendront
// la liste des param�tres qui peut rester vide
// N'importe quelle fonction peut ou pas retourner un r�sultat. 
// Si elle retourne rien alors on indique void avant son nom


// Avant de partir, il faut prendre ses outils pour afficher un message � l'�cran
#include <iostream>	// On doit inclure un biblioth�que qui contient plusieurs fonctions pour 
					// saisir de l'information au clavier(i : in : input : entr�e) 
					// ou afficher des messages � l'�cran (o: out : output : sortie)
					// Sur ces p�riph�riques les donn�es circulent => flux : stream 


void main()

// Toutes instruction doit �tre mises entre accolades qui d�limitent un bloc d'instructions
// L'accolade ouvrante doit toujours �tre au dessus de l'accolade fermante
{			// Ouvre le bloc d'instructions

	// Pour que les messages s'affichent avec les bons caract�res accentu�s
	setlocale(LC_ALL, "");


	// Ici on peut commencer le programme
	// On veut afficher un message � l'�cran (output) c(channel)out(ouptput)

	std::cout << "Bienvenue � tous !";

	// Les messages doivent �tre �crits entre guillemets
	// Les becs de canard << indiquent la direction vers o� les donn�es sont envoy�es
	// Chaque instruction en C++ doit se terminer par un point virgule ;

	// Avant de terminer le programme, on va faire une pause pour permettre � l'utilisateur 
	// de lire le message
	system("pause");



}			// Ferme le bloc d'instructions
