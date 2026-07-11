#pragma once

#include "Bank_Data.h"
class Accesible_Bank_Data :Bank_Data {
private:
	Accesible_Bank_Data() = default;
	~Accesible_Bank_Data() = default;
	inline static Accesible_Bank_Data* accesible_bank_data = nullptr;
	Account* user_accounts;
public:
	static Accesible_Bank_Data& get_instance();
	void load_data(Account* accounts);
	void open_account(Account account);
	void close_account(std::string account_name);
	Account* get_account(std::string account_name);
};
