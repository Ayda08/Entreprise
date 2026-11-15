
#include "Responsable.h"


Responsable::Responsable(string n, double s, int nbr) :Employe(n, s)
{
	this->nmbrSubmax = nbr;
	this->sub = new Employe * [this->nmbrSubmax];
	for (int i = 0;i < this->nmbrSubmax;i++) {
		this->sub[i] = nullptr;
	}

}

void Responsable::ajouterEmploye(Employe* e)
{
	if (this->nbr < this->nmbrSubmax && e != nullptr) {
		this->sub[this->nbr] = new Employe(*e);
		this->nbr++;
	}
	else {
		cout << "Impossible d'ajouter l'employé" << endl;
	}
}

void Responsable::afficherInferieursDirects() const
{
	for (int i = 0;i < this->nmbrSubmax;i++) {
		this ->sub[i]->afficher();
	}
}


Responsable::~Responsable()
{
	delete[]this->sub;
	this->sub = nullptr;
	for (int i = 0;i < this->nmbrSubmax;i++) {
		delete sub[i];
		sub[i] = nullptr;
	}
}





void Responsable::afficher() const
{
	cout << "e=";
	for (int i = 0;i < this->nmbrSubmax;i++) {
		cout << this->sub[i] << "";
	}
	cout << endl;

}
