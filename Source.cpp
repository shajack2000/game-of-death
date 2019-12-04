/*
Game of Death (Josephus Problem)
Description : This program simulates the Josephus Problem utilizing circular linked lists
Author: Sha Jackson
E - mail Address : shajack2000@gmail.com
Computer Programming II, Assignment 4.3
Last Changed : December 1, 2019.
*/

#include "LinkedList.h"

int main() {

	LinkedList ll;

	//3 Prisoners - 3 Words - 2 Survives
	ll.survive(3, 3);

	//6 Prisoners - 2 Words - 5 Survives
	ll.survive(6, 2);
	
	//10 Prisoners - 1 Words - 10 Survives
	ll.survive(10, 1);
	
	//20 Prisoners - 1 Words - 20 Survives
	ll.survive(20, 1);
	
	//153 Prisoners - 37 Words - 137 Survives
	ll.survive(153, 37);
	
	//20134 Prisoners - 4 Words - 15209 Survives
	ll.survive(20134, 4);
}