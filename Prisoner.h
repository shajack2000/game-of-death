#pragma once

class Prisoner { //Prisoner Class
private:
	int num; //Stores Prisoner Number
	Prisoner* next; //Next Prisoner
	Prisoner* prev; //Previous Prisoner
public:
	Prisoner(); //Prisoner Default Constructor
	Prisoner(int theNum, Prisoner* nextPris, Prisoner* prevPris); //Prisoner Constructor
	int getNum(); //Returns Prisoner Number
	void setNum(int newNum); //Sets Prisoner Number
	Prisoner* getNext(); //Returns Next Prisoner
	void setNext(Prisoner* newNext); //Sets Next Prisoner
	Prisoner* getPrev(); //Returns Previous Prisoner
	void setPrev(Prisoner* newPrev); //Sets Previous Prisoner

};
