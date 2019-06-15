#include <string>

#ifndef __list
#define __list

class linkedList
{
	private:
		struct node
		{
			std::string data;
			node* next;
		};

		node* head;
		node* tail;

	public: 
		linkedList();

		void newNode(std::string addNode);
		void remvNode(std::string delNode);
		void printList();
};

#endif 