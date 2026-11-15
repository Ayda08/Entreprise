#include "Commercial.h"
#include "Employe.h"
using namespace std;
Commercial::Commercial(string n, double f, double v, double s,double t) :Employe(n, s)
{
	this->fixe = f;
	this->taux = t;
	this->vente = 0;
}
void Commercial::afficher() const
{
		cout << "Indice salarial : " << this->indiceSalarial << endl;
		cout << "Salaire fixe : " << this->fixe << endl;
		cout << "Vente : " << this->vente << endl;
		cout << "Salaire : " << this->calculerSalaire() << endl;

		Employe::afficher();


}

double Commercial::calculerSalaire() const
{
	 return this->fixe + (this->vente * this->taux);
}

void Commercial::mettreAjourVente(double v)
{
	this->vente = v;
}

Commercial::~Commercial()
{
}
