#include "SupermarketQueue.h"
#include<iostream>
#include <vector>
#include <map>
using namespace std;

void SupermarketQueue::InitializeCurrentQueue(int size)
{
    CurrentQueueStatus.reserve(size);
    CurrentQueueStatus.resize(size);
    // Is there a better way to initialize vector of ints to 0s?
    std::vector<int>::iterator it = CurrentQueueStatus.begin();
    for(; it != CurrentQueueStatus.end(); it++)
    {
	*it = 0;
    }
}	

void SupermarketQueue::InsertToQueue(int i)
{
    //Insert in to CurrentQueue;
    std::vector<int>::iterator min = std::min_element(CurrentQueueStatus.begin(), CurrentQueueStatus.end()); 
    //    std::cout << "i:" << i << ", min : " << *min << std::endl;
    *min += i;
}

int SupermarketQueue::CalculateTime(const std::vector<int>& queue, int numberOfQueues)
{
    InitializeCurrentQueue(numberOfQueues);
    //    std::cout << "vector-size : " << CurrentQueueStatus.size() << std::endl;

    int queueTime = 0 ;
    for (auto i : queue)
    {
	InsertToQueue(i);
	//queueTime += i;

    }

    std::vector<int>::iterator max = std::max_element(CurrentQueueStatus.begin(), CurrentQueueStatus.end()); 
    //    std::cout << "max : " << *max;
    return *max;
}
