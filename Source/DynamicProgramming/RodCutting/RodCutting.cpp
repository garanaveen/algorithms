#include "RodCutting.h"

void RodCutting::SetPriceTable(const vector<pair<int, int> > &priceTable)
{
    vector<pair<int, int> >::const_iterator it = priceTable.begin();
    for(; it != priceTable.end(); it++){
        PriceTable[(*it).first] = (*it).second;
    }


}
