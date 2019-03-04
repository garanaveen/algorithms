#pragma once

#include <vector>
#include <map>

typedef int RodLength;
typedef int RodPrice;

class RodCutting
{
public:
    //Returns the length of the first cut.
    int FirstCut(int rodSize);

    //Set the price table
    void SetPriceTable(const std::vector<std::pair<RodLength, RodPrice> >& priceTable);

    void FitzBuzz();
private:
    std::map<RodLength, RodPrice> PriceTable;
};

