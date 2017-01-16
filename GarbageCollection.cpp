#include "GarbageCollection.hpp"

GarbageCollection& GarbageCollection::getInstance()
{
    static GarbageCollection instance;
    return instance;
}

void GarbageCollection::getDisposalCoordinates(CoordinateList& disposalCoordinates)
{
    if (roadCoordinates_.empty() || houseCoordinates_.empty())
    {
	cout << "Empty coordinates for road/houses provided!!" << endl;
	return;
    }

    // average of y coordinates of houses
    float avgY = 0.0;
    int countY = 0;
    for(CoordinateList::iterator iter = houseCoordinates_.begin()
	;iter != houseCoordinates_.end(); ++iter)
    {
	++countY;
	avgY += iter->second;
    }

    avgY /= (float)countY;

    for(CoordinateList::iterator iter = roadCoordinates_.begin()
	    ;iter != roadCoordinates_.end(); ++iter)
    {
	disposalCoordinates.push_back(make_pair(iter->first, avgY));
    }
}
