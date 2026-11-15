#pragma once
#include "Employe.h"
class Personnel : public Employe
{
private:
	Employe** tab;
	int capacite;
	int nbr;
public:
	Personnel(string n, double s, int c, int nb);
	double calculerSomme()const;
	void ajouterEmploye(Employe* e);
	void afficher()const override;
	⁓Personnel();
};

