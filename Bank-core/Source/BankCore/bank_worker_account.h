#pragma once
#include "account.h"
#include "user_account.h"

class modifiable_bank_data;

class bank_worker_account :account {
private:
public:
	void transfer_from_accounts(user_account user_account_withdraw,user_account user_account_deposit, double amount);
	void close_account(user_account user_account, modifiable_bank_data bank_data);
	friend class modifible_bank_data;
};
