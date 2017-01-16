#pragma once
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

typedef pair<float, float> Coordinates;
typedef vector<Coordinates> CoordinateList;

class GarbageCollection
{
public:
    static GarbageCollection& getInstance();
    void setHouseCoordinates(const CoordinateList& coordinates)
	{
	    houseCoordinates_ = coordinates;
	}
    void setRoadCoordinates(const CoordinateList& coordinates)
	{
	    roadCoordinates_ = coordinates;
	}
    void getDisposalCoordinates(CoordinateList& disposalCoordinates);

private:
    GarbageCollection() {}
    GarbageCollection(const GarbageCollection&) {}
    GarbageCollection& operator= (const GarbageCollection&) {}
    
    CoordinateList houseCoordinates_;
    CoordinateList roadCoordinates_;
};

