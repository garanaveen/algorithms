#include "HeapSort.h"
#include <iostream>
//#include <algorithm>


using namespace std;

void HeapSort::PrintList(int i)
{
   vector<int>::iterator it = List->begin();
   cout << i << " - ";
   for(; it != List->end(); it++)
   {
      cout << *it << " ";
   }
   cout <<endl;
}

void HeapSort::ExtractMaxNode()
{
   int temp = List->at(HeapSize-1);
   List->at(HeapSize-1) = List->at(0);
   List->at(0) = temp;

   HeapSize--;
//      cout << HeapSize << ":";

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
//   cout << "SortFromMaxHeap" << endl;
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
//   std::sort(List->begin(), List->end());
   BuildMaxHeap();
   SortFromMaxHeap();
}

HeapSort::HeapSort(vector<int>& v)
   :List(&v),
   HeapSize(v.size())
{
}
