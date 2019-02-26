#include "HeapSort.h"
#include <iostream>

//https://www.hackerrank.com/contests/hw1/challenges/heap-sort

void HeapSort::PrintList(int i)
{
   std::vector<int>::iterator it = List->begin();
   std::cout << i << " - ";
   for(; it != List->end(); it++)
   {
      std::cout << *it << " ";
   }
   std::cout << std::endl;
}

void HeapSort::ExtractMaxNode()
{
   int temp = List->at(HeapSize-1);
   List->at(HeapSize-1) = List->at(0);
   List->at(0) = temp;

   HeapSize--;
//      std::cout << HeapSize << ":";

   MaxifyNode(0);
}

void HeapSort::MaxifyNode(int i)
{
   int larger = i;
   if(LeftChild(i) < HeapSize)
   {
      if(List->at(LeftChild(i)) > List->at(i))
      {
         larger = LeftChild(i);
      }
   }

   if(RightChild(i) < HeapSize)
   {
      if(List->at(RightChild(i)) > List->at(larger))
      {
         larger = RightChild(i);
      }
   }

   if(larger != i)
   {
      int temp = List->at(larger);
      List->at(larger) = List->at(i);
      List->at(i) = temp;
//      PrintList(i);
      MaxifyNode(larger);
   }
}

void HeapSort::SortFromMaxHeap()
{
//   std::cout << "SortFromMaxHeap" << endl;
   int initialHeapSize = HeapSize;
   while(HeapSize >= 1)
   {
      ExtractMaxNode();
   }
}

void HeapSort::BuildMaxHeap()
{
   for(int i = (HeapSize)/2 ; i>=0 ; i--)
   {
      MaxifyNode(i);
   }
//   PrintList(0);
}

void HeapSort::Sort()
{
   BuildMaxHeap();
   SortFromMaxHeap();
}

HeapSort::HeapSort(std::vector<int>& v)
   :List(&v),
   HeapSize(v.size())
{
}
