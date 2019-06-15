#include "pch.h"

#include <iostream>
#include <cstddef>

#include "list.h"

using namespace std;

linkedList::linkedList()
{
	head = NULL;
	tail = NULL;
}

void linkedList::newNode(string addNode)
{
	node *temp = new node;
	temp->data = addNode;
	temp->next = NULL;
	
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

void linkedList::remvNode(string delNode)
{
}

void linkedList::printList()
{
	node *temp = new node;
	temp = head;
	
	while (temp != NULL)
	{
		cout << temp->data << ", ";
		temp = temp->next;
	}
}
