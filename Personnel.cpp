#include "Personnel.h"

Personnel::Personnel(string n, double s, int c, int nb):Employe(n,s)
{
	this->capacite = c;
	this->nbr = 0;
	this->tab = new Employe * [this->capacite];
	for (int i = 0;i < this->capacite;i++) {
		this->tab[i] = nullptr;
	}
}

double Personnel::calculerSomme() const
{
	double somme = 0.0;
	for (int i = 0;i < this->nbr;i++) {
		somme += this->tab[i]->calculerSalaire();
	}
	return somme;
}

void Personnel::ajouterEmploye(Employe* e)
{
	if (this->nbr < this->capacite && e != nullptr) {
		this->tab[this->nbr] = new Employe(*e);
		this->nbr++;
	}
	else {
		cout << "Impossible d'ajouter l'employé" << endl;
	}
}

void Personnel::afficher() const
{
	cout << "e=";
	for (int i = 0;i < this->nbr;i++) {
		cout << this->tab[i] << "";
	}
	cout << endl;
}

Personnel::⁓Personnel()
{
	delete[]this->tab;
	this->tab = nullptr;
	for (int i = 0;i < this->nbr;i++) {
		delete tab[i];
		tab[i] = nullptr;
	}
}
