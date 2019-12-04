#pragma once
#include "Prisoner.h"

class LinkedList { //LinkedList Class
private:
	Prisoner* head; //Points to the First Prisoner in the List
public:
	LinkedList();
	~LinkedList();
	void add(int n);
	void addPrisoners(int numPrisoners);
	void execute(int n);
	void survive(int prisoners, int words);
};