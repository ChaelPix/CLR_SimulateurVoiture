#pragma once
#include <bitset>
#include <iostream>

ref class CVoiture
{
private:

	uint32_t trame = 0b00000000000000000000000000000000;
	void MajTrame(int nbBites, uint32_t nouvelleValeur, int position);

public: 
	enum class EtatPhare { Eteints, Position, Croisement, Route };
	enum class EtatVitre { Stop, Monter, Descendre };

	CVoiture();
	uint32_t recupTrame();
	uint32_t CalculeMasque(int nbBites, int position);

	void accelerateurAppuyer();
	void accelerateurRelacher();

	void freinAppuyer();
	void freinRelacher();

	void fixerPhares(EtatPhare etatPhare);
	
	void allumerChauffage();
	void eteindreChauffage();

	void allumerClim();
	void eteindreClim();

	void fixerActionVitre(EtatVitre etatVitre);

	void fixerPositionFenetre(int fenetrePosition);

	void fixerTemperature(int temperature);

	void fixerVitesse(int vitesse);
};

