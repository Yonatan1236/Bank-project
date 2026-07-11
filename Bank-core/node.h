#pragma once
#include "../Bank-core/Source/BankCore/Account/Account.h"
class node {
private:
	node* next;
	node* prev;
	int key;
	Account* value;
public:
	node();

	int getKey();
	node* getNext();
	node* getPrev();
	Account* getValue();

	void setKey(int key);
	void setNext(node* next);
	void setPrev(node* prev);
	void setValue(Account* value);
};