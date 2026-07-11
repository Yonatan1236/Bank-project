#include "Hash.h"
#include <iostream>

Hash_Table::Hash_Table() { this->hashTable = std::vector<node>(INITIAL_VEC_SIZE); }
Account*  Hash_Table::getValueHash(std::string key) { return this->hashTable[(this->hashFunction)(key)].getValue(); }
void Hash_Table::setValueHash(std::string key,Account* value) { 
	node entry = node();
	entry.setValue(value);
	this->hashTable[this->hashFunction(key)] = entry; }