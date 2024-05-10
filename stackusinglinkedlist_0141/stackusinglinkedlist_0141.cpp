#include <iostream>
using namespace std;


//Node class representing a single nod ein the linked list

class Node
{
public :
	int data;
	Node* next;

	Node()
	{
		next = NULL;
	}
};

//Stack class
class Stack
{
private :
	Node* top; //Pointer to the top node of the stack.
};