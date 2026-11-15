#pragma once
#include<iostream>
using namespace std;
class Employe
{
protected:
	double indiceSalarial;
private:
	string nom;
	const int matricule;
	static double valeur;
	static int compteur;
public:
	Employe(string, double s);
	virtual double calculerSalaire()const;
	virtual void afficher()const;
	~Employe();
};



