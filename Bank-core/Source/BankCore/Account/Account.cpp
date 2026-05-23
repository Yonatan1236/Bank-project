
#include <iostream> 
#include <string>
#include "Account.h"

Account::Account(std::string name, const double amount, const int password) :user_name(name), amount(amount), password(password) { this->in_debt = amount > 0; }

Account::~Account() {
	std::cout << " destroyed account of " << this->user_name << std::endl;
}

std::string Account::get_name() const { return this->user_name; }

double Account::get_amount() const { return this->amount; }
void Account::set_amount(double amount) { this->amount = amount; }
void Account::withdraw(double amount) {
	if (amount < this->amount) {
		this->amount -= amount;
	}
	else {
		std::cout << "error: trying to withdraw more than account balance" << std::endl;
	}
}
void Account::deposit(double amount) { this->amount += amount; }

bool Account::get_in_debt() const { return this->in_debt; }

int Account::get_password() const { return this->password; }