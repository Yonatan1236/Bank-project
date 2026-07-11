#include "Accesible_Bank_Data.H"

Account* Accesible_Bank_Data::get_account(std::string account_name) { return accesible_bank_data->find_account(account_name); }