#pragma once
#include "../Account/Account.h"
#include "../Hash.h"
#include <memory>

class Bank_Data {
private:
	Hash_Table account_data;
public:
	Bank_Data();
	Account* find_account(std::string account_name);
	void add_account(Account* account);

};
