#pragma once
#include <bitset>
#include "CVoiture.h"

ref class CBusLin : public CVoiture
{

public :

	CBusLin();

	uint8_t lireTrame(int nbBites, int position);

	bool lireEtatAccelerateur();

	bool lireEtatFrein();

	int lireEtatVitres();

	int lireEtatPhares();

	bool lireEtatChauffage();

	bool lireEtatClimatisation();

	int lireVitesse();

	int lireTemperature();

	int lirePositionFenetre();
};

