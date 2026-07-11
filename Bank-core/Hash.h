#pragma once
#include "node.h"
#include <vector>
#include <functional>

#define INITIAL_VEC_SIZE 100
class Hash_Table {
private:
	std::vector<node> hashTable;
	std::hash<std::string> hashFunction;
public:
	Hash_Table();
	Account* getValueHash(std::string key);
	void setValueHash(std::string key, Account* value);
};