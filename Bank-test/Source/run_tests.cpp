#include "../../Bank-core/Source/BankCore/account.h"
#include <vector>
#include <iostream>

#define DOUBLE_EPS std::pow(10,-14)


bool test_account() {
	account test_account("test", 1000, 102938);
	test_account.deposit(500);
	test_account.withdraw(2000);
	test_account.withdraw(750);
	return test_account.get_amount() - 750 < DOUBLE_EPS;
}

void run_test(int test_count, std::vector<int> tests, bool(*test)()) {
	if (test())
		tests.emplace_back(test_count);
	test_count++;
}

void run_tests() {
	int test_count = 0;
	std::vector<int> tests;
	run_test(test_count,tests,test_account);
	std::cout << "tests: ";
	for (const auto& i : tests)
		std::cout << i <<",";
	std::cout << "passed" << std::endl;
}