#include "GarbageCollection.hpp"
#include "RoadCoordinates.hpp"
#include "HouseCoordinates.hpp"

int main()
{
    GarbageCollection& gc = GarbageCollection::getInstance();
    gc.setRoadCoordinates(roadCoordinates);
    gc.setHouseCoordinates(houseCoordinates);
    CoordinateList disposalCoordinates;
    gc.getDisposalCoordinates(disposalCoordinates);

    // print output
    CoordinateList::iterator iter = disposalCoordinates.begin();
    for ( ; iter != disposalCoordinates.end(); ++iter)
    {
	cout << "(" << iter->first << ", " << iter->second << ")" << endl;
    }
}
