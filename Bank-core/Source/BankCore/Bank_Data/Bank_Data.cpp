#include "Bank_Data.h" 


Bank_Data::Bank_Data() {
	this->account_data = Hash_Table(); }
void Bank_Data::add_account(Account* account) { this->account_data; }
Account* Bank_Data::find_account(std::string account_name) {
	return account_data.getValueHash(account_name);
}