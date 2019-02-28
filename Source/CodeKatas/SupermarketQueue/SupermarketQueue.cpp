#include "SupermarketQueue.h"
#include <iostream>
#include <algorithm>

void SupermarketQueue::InitializeCheckoutTills(int size)
{
    CurrentCheckoutTills.reserve(size);
    CurrentCheckoutTills.resize(size);
    // Is there a better way to initialize vector of ints to 0s?
    std::vector<int>::iterator it = CurrentCheckoutTills.begin();
    for(; it != CurrentCheckoutTills.end(); it++)
    {
	*it = 0;
    }
}	

void SupermarketQueue::InsertCustomerToCheckoutTill(int i)
{
    std::vector<int>::iterator min = std::min_element(CurrentCheckoutTills.begin(), CurrentCheckoutTills.end()); 
    //    std::cout << "i:" << i << ", min : " << *min << std::endl;
    *min += i;
}

int SupermarketQueue::CalculateTime(const std::vector<int>& queue, int numberOfCheckoutTills)
{
    InitializeCheckoutTills(numberOfCheckoutTills);
    //    std::cout << "vector-size : " << CurrentCheckoutTills.size() << std::endl;

    int queueTime = 0 ;
    for (auto i : queue)
    {
	InsertCustomerToCheckoutTill(i);
    }

    std::vector<int>::iterator max = std::max_element(CurrentCheckoutTills.begin(), CurrentCheckoutTills.end()); 
    //    std::cout << "max : " << *max;
    return *max;
}

