#include "Armor.h"
Armor::Armor(string pName, double pWeight, int pProt)
	: Equipment(pName, pWeight)
{
	protection = pProt;
}
Armor::Armor()
	: Equipment()
{
	protection = 0;
}
