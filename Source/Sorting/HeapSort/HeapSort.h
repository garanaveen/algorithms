#pragma once

#include <vector>

class HeapSort
{
public:
   HeapSort(std::vector<int>& v);
   void Sort();
private:
   void MaxifyNode(int i);
   void BuildMaxHeap();

   int HeapSize;
   std::vector<int>* List;
   void PrintList(int i);
   void SortFromMaxHeap();
   void ExtractMaxNode();

   inline int Parent(int i) {return (i+1)/2-1;}
   inline int LeftChild(int i) {return (i+1)*2-1;}
   inline int RightChild(int i) {return (i+1)*2;}
};

