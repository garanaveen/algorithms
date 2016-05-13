#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include <vector>

using namespace std;

class HeapSort
{
public:
   HeapSort(vector<int>& v);
   void Sort();
private:
   void MaxifyNode(int i);
   void BuildMaxHeap();

   int HeapSize;
   vector<int>* List;
   void PrintList(int i);
   void SortFromMaxHeap();
   void ExtractMaxNode();

   inline int Parent(int i) {return (i+1)/2-1;}
   inline int LeftChild(int i) {return (i+1)*2-1;}
   inline int RightChild(int i) {return (i+1)*2;}
};

#endif //HEAP_SORT_H

