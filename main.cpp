#include <Backpack.h>

int main(void)
{
	Backpack* p = new Backpack(3);
	Equipment* e = new Equipment("Rope", 1.2);
	Equipment* e2 = new Equipment("Lantern", 2.2);
	Equipment* e3 = new Equipment("Flint", 0.4);


	p->AddEquipment(e);
	p->AddEquipment(e2);
	p->AddEquipment(e3);

    // For testing purposes. None should fit because the array is full already!
	for (int i = 0; i < 5; i++)
	{
		bool ret = p->AddEquipment(e);
		if (!ret)
		{
			cout << "Failed!" << endl;
		}
	}

	delete p;
	delete e, e2, e3;
}