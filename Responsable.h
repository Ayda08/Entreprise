#pragma once
#include "Employe.h"
using namespace std;
class Responsable :public Employe
{
private:
	Employe** sub;
	int nmbrSubmax;
	int nbr;
public:
	void afficher()const override;
	Responsable(string n, double s, int nbr);
	void ajouterEmploye(Employe* e);
	void afficherInferieursDirects()const;
	~Responsable();

};