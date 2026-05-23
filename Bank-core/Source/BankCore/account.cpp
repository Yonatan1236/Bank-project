
#include <iostream> 
#include <string>
#include "account.h"

account::account(std::string name, const double amount, const int password) :user_name(name), amount(amount), password(password) { this->in_debt = amount > 0; }

account::~account() {
	std::cout << " destroyed account of " << this->user_name << std::endl;
}

std::string account::get_name() const { return this->user_name; }

double account::get_amount() const { return this->amount; }
void account::set_amount(double amount) { this->amount = amount; }
void account::withdraw(double amount) {
	if (amount < this->amount) {
		this->amount -= amount;
	}
	else {
		std::cout << "error: trying to withdraw more than account balance" << std::endl;
	}
}
void account::deposit(double amount) { this->amount += amount; }

bool account::get_in_debt() const { return this->in_debt; }

int account::get_password() const { return this->password; }