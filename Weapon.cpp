#include "Weapon.h"
Weapon::Weapon(string pName, double pWeight, int pDam)
	: Equipment(pName, pWeight)
{
	damage = pDam;
}
Weapon::Weapon()
	: Equipment()
{
	damage = 0;
}
