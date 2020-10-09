#pragma once
#include <iostream>
#include <Equipment.h>
using namespace std;
class Backpack
{
private:
	Equipment* eqs;

public:
	Backpack();
    Backpack(int size);
    ~Backpack();
    bool AddEquipment(Equipment *pEq);
};

