#pragma once


#include <vector>

class SupermarketQueue
{
    public:
	int CalculateTime(const std::vector<int>& queue, int numberOfQueues);
    private:
	void InitializeCurrentQueue(int size);
	void InsertToQueue(int i);
	std::vector<int> CurrentQueueStatus;
};

