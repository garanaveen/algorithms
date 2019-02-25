#pragma once

#include <vector>

class SupermarketQueue
{
    public:
	int CalculateTime(const std::vector<int>& queue, int numberOfCheckoutTills);
    private:
	void InitializeCheckoutTills(int size);
	void InsertCustomerToCheckoutTill(int i);
	std::vector<int> CurrentCheckoutTills;
};

