#pragma once
#include "Account.h"
#include "User_account.h"
#include "../Bank_Data/Accesible_Bank_Data.h"


class Bank_Worker_Account :Account {
private:
public:
	void transfer_from_accounts(User_Account user_account_withdraw,User_Account user_account_deposit, double amount);
	void close_account(User_Account user_account, Accesible_Bank_Data bank_data);
	Accesible_Bank_Data* accesible_bank_data;
};
