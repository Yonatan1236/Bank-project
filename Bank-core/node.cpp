#include "node.h"
#define NONE_VAL -1

node::node() {
	this->value = nullptr;
	this->prev = nullptr;
	this->next = nullptr;
	this->key = NONE_VAL;
};

	void  node::setKey(int key) { this->key = key; }
	void  node::setNext(node* next) { this->next = next; }
	void  node::setPrev(node * prev) { this->prev = prev; }
	void node::setValue(Account* value) { this->value = value; }

	int node::getKey() { return this->key; }
	node* node::getNext() { return this->next; }
	node* node::getPrev() { return this->prev; }
	Account* node::getValue() { return this->value; }
