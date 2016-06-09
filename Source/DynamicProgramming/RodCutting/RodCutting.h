#ifndef ROD_CUTTING_H
#define ROD_CUTTING_H

#include <vector>
#include <map>

typedef int RodLength;
typedef int RodPrice;

using namespace std;

class RodCutting
{
public:
    //Returns the length of the first cut.
    int FirstCut(int rodSize);

    //Set the price table
    void SetPriceTable(const vector<pair<RodLength, RodPrice> >& priceTable);

    void FitzBuzz();
private:
    map<RodLength, RodPrice> PriceTable;
};

#endif
