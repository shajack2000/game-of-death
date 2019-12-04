#include "Prisoner.h"

//Constructors
Prisoner::Prisoner() : num(0), next(nullptr), prev(nullptr) {}

Prisoner::Prisoner(int theNum, Prisoner* nextPris, Prisoner* prevPris) : num(theNum), next(nextPris), prev(prevPris) {}

//Num setters and getters
int Prisoner::getNum() { return num; }

void Prisoner::setNum(int newNum) { num = newNum; }

//Get next/prev
Prisoner* Prisoner::getNext() { return next; }

Prisoner* Prisoner::getPrev() { return prev; }

//Set next/prev
void Prisoner::setNext(Prisoner* newNext) { next = newNext; }

void Prisoner::setPrev(Prisoner* newPrev) { prev = newPrev; }
