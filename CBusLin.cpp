#include "CBusLin.h"

CBusLin::CBusLin()
{

}

uint8_t CBusLin::lireTrame(int nbBites, int position)
{
	uint32_t mask = CalculeMasque(nbBites, position);
	uint32_t selectedBits = recupTrame() & mask; // Sélectionne les bits
	return selectedBits >> position; // Décale les bits récupérés vers la droite
}

bool CBusLin::lireEtatAccelerateur()
{
	if (lireTrame(1, 0) == 0b0)
		return false;
	else
		return true;
}

bool CBusLin::lireEtatFrein()
{
	if (lireTrame(1, 1) == 0b0)
		return false;
	else
		return true;
}

int CBusLin::lireEtatVitres()
{
	return lireTrame(2, 2);
}

int CBusLin::lireEtatPhares()
{
	return lireTrame(2, 4);
}

bool CBusLin::lireEtatChauffage()
{
	if (lireTrame(1, 6) == 0b0)
		return false;
	else
		return true;
}

bool CBusLin::lireEtatClimatisation()
{
	if (lireTrame(1, 7) == 0b0)
		return false;
	else
		return true;
}

int CBusLin::lireVitesse()
{
	return lireTrame(8, 8);
}

int CBusLin::lireTemperature()
{
	return lireTrame(8, 16);
}

int CBusLin::lirePositionFenetre()
{
	return lireTrame(8, 24);
}