#include "Employe.h"
#include<iostream>
using namespace std;
int Employe::compteur = 0;
double Employe::valeur = 0.0;
Employe::Employe(string nom, double s) :matricule(++compteur)
{
	this->nom = nom;
	this->indiceSalarial = s;

}

double Employe::calculerSalaire()const
{
	cout << "donner la valeur d'augmentation" << endl;
	cin >> Employe::valeur;
	return this->indiceSalarial = this->indiceSalarial + ((this->indiceSalarial * Employe::valeur) / 100);

}
void Employe::afficher() const
{
	cout << "Nom: " << this->nom << endl;
	cout << "Matricule: " << this->matricule << endl;
	cout << "Salaire: " << this->indiceSalarial << endl;
	cout<< "Valeur d'augmentation: " << Employe::valeur << endl;
}
Employe::~Employe()
{
}

