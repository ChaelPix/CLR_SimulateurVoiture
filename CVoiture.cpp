#include "CVoiture.h"

CVoiture::CVoiture()
{

}

uint32_t CVoiture::recupTrame()
{
	return trame;
}

uint32_t CVoiture::CalculeMasque(int nbBites, int position)
{
	uint32_t masque = 0b11111111111111111111111111111111;
	masque = masque >> (32 - nbBites); //Permet d'avoir le nombre de 1 désiré
	masque = masque << position; //positionne le masque
	return masque;
}

void CVoiture::MajTrame(int nbBites, uint32_t nouvelleValeur, int position)
{
	uint32_t masque = CalculeMasque(nbBites, position);
	trame = (trame & ~masque) | (nouvelleValeur << position); //retire l'ancienne valeur, positionne la nouvelle valeur, puis la place dans la trame
}

void CVoiture::accelerateurAppuyer()
{
	MajTrame(1, 1, 0);
}

void CVoiture::accelerateurRelacher()
{
	MajTrame(1, 0, 0);
}

void CVoiture::freinAppuyer()
{
	MajTrame(1, 1, 1);
}

void CVoiture::freinRelacher()
{
	MajTrame(1, 0, 1);
}

void CVoiture::fixerActionVitre(EtatVitre etatVitre)
{
	MajTrame(2, (int)etatVitre, 2);
}

void CVoiture::fixerPhares(EtatPhare etatPhare)
{
	MajTrame(2, (int)etatPhare, 4);
}

void CVoiture::allumerChauffage()
{
	eteindreClim();
	MajTrame(1, 1, 6);
}

void CVoiture::eteindreChauffage()
{
	MajTrame(1, 0, 6);
}

void CVoiture::allumerClim()
{
	eteindreChauffage();
	MajTrame(1, 1, 7);
}

void CVoiture::eteindreClim()
{
	MajTrame(1, 0, 7);
}

void CVoiture::fixerVitesse(int vitesse)
{
	MajTrame(8, vitesse, 8);
}

void CVoiture::fixerTemperature(int temperature)
{
	MajTrame(8, temperature, 16);
}

void CVoiture::fixerPositionFenetre(int fenetrePosition)
{
	MajTrame(8, fenetrePosition, 24);
}

