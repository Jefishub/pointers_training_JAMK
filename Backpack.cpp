#include <Backpack.h>

Backpack::Backpack(){
    eqs = new Equipment[10];
}
Backpack::Backpack(int size){
    eqs = new Equipment[size];
}      
Backpack::~Backpack(){
    delete[] eqs;
}
bool Backpack::AddEquipment(Equipment *pEq){
    bool retVal = false;
    for (int i=0; i < 10;i++){
        if (&eqs[i] == NULL){
            eqs[i] = *pEq;
            retVal = true;
        }
    }
    return retVal;
}


