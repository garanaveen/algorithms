#ifndef ROD_CUTTING_H
#define ROD_CUTTING_H

#include <vector>
#include <map>

using namespace std;

class RodCutting
{
public:
    int Cut(int rodSize);
    void SetPriceTable(const vector<pair<int, int> >& priceTable);

private:
    map<int, int> PriceTable;
};

#endif
