#include "MissingNumbers.h"
#include <iostream>

//https://www.hackerrank.com/challenges/missing-numbers

using namespace std;

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_DIFF = 300;
int OffSet = 0;
int crossingPoint = 0;
void PrintVi(const vector<int>& vi){
    vector<int>::const_iterator it=vi.begin();
    for(; it != vi.end(); it++){
        //cout << *it << " ";
    }
    //cout<<endl;
}

int HashMod(int num){
    return num%MAX_DIFF;
}

int HashUnMod(int num){
    return num+OffSet*MAX_DIFF;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> vi(MAX_DIFF);
    int A,B;
    cin >> A;
    
    int num;
    cin >> num;
    OffSet = num/MAX_DIFF;    
    //cout << "OffSet " << OffSet <<endl; 
    vi[HashMod(num)]--;
    
    //Since first element is already read, start from 1 instead of 0.
    for(int i=1; i < A; i++){
        num;
        cin >> num;
        vi[HashMod(num)]--;
    }
    PrintVi(vi);
    
    cin >> B;
    for(int i=0; i < B; i++){
        int num;
        cin >> num;
        vi[HashMod(num)]++;
    }
    PrintVi(vi);
    
    for(int i=0; i < MAX_DIFF; i++){
        if(vi[i] > 0)
            cout << HashUnMod(i) << " ";
    }
    
    
        
    return 0;
}

