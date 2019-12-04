#include "LinkedList.h"
#include <iostream>
using namespace std;


LinkedList::LinkedList() : head(nullptr) {} //Linked List Constructor

LinkedList::~LinkedList() //Linked List Destructor
{
	Prisoner* temp = head; //Loops through Linked List and deletes all nodes from heap
	while (temp != nullptr)
	{
		Prisoner* next = temp->getNext();
		delete temp;
		temp = next;
	}
}

void LinkedList::add(int n) { //Adds prisoner 'n' to the end of the linked list (assigning its next to head)


	if (head == nullptr) { //If no head has been assigned, the next prisoner added to the list will be head
		head = new Prisoner();
		head->setNum(n);
		head->setNext(head);
		head->setPrev(head);
	}
	else { //Otherwise adds new prisoner to the end of the linked list and assings its next to head

		Prisoner* temp = head;
		while (temp->getNext() != head) {
			temp = temp->getNext();
		}

		Prisoner* newPris = new Prisoner(n, head, temp);
		temp->setNext(newPris);
		head->setPrev(newPris);
	}
}

void LinkedList::addPrisoners(int numPrisoners) { //Adds a specified number of prisoners to the linked list
	for (int i = 1; i <= numPrisoners; i++) {
		add(i);
	}
}

void LinkedList::execute(int n) { //Removes nth prisoner in the list (deletes it from the heap)
	Prisoner* temp = head;
	while(1){
		if (temp->getNum() == n)
		{
			temp->getPrev()->setNext(temp->getNext());
			temp->getNext()->setPrev(temp->getPrev());
			delete temp;
			return;
		}
		else temp = temp->getNext();
	}
}

void LinkedList::survive(int prisoners, int words) { //Takes in number of prisoners and number of words then simulates the Josephus Problem accordingly
	addPrisoners(prisoners); //Calls add prisoners (adding the specified number of prisoners)

	Prisoner* current = head; //Current is used to refer to the prisoner that the "executioner" is currently pointing to
	while (current->getNext() != current) { //Ensures that prisoners continue to be executed until there is one prisoner left (i.e. head points to itself)
		for (int i = 1; i <= words; i++) { //Moves on to the next prisoner n+1 times (where n is the amount of words in the riddle) 
			current = current->getNext();
		}
		execute(current->getPrev()->getNum()); //Executes (deletes) current's previous prisoner (the nth prisoner)
		head = current; //Sets the start of the lift to the current prisoner (nth prisoner + 1)
	}

	cout << "With " << prisoners << " Prisoners and " << words << " words, I'd like to be Prisoner number " << current->getNum() << endl; //Final Output
	head = nullptr; //Sets head to nullptr so that the same linked list can be used again
}