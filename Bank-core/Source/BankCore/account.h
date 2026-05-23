#pragma once
#include <string>


class account {
private:
	const std::string user_name;
	double amount;
	bool in_debt;
	const int password;
public:
	account(std::string name, const double amount, const int password);
	~account();

	std::string get_name() const;

	double get_amount() const;
	void set_amount(double amount);
	void withdraw(double amount);
	void deposit(double amount);

	bool get_in_debt() const;

	int get_password() const;



};

