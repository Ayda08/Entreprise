#pragma once
#include "Employe.h"
using namespace std;
class Commercial :
    public Employe
{
private:
    double fixe;
    double vente;
    double taux;
public:
    Commercial(string n, double f, double v, double s,double t);
    void afficher()const override;
    double calculerSalaire()const override;
    void mettreAjourVente(double v);
    ~Commercial();

};

