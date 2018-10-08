#pragma once
struct LocationPoint
{
public:
	double longitude;
	double latitude;
	double altitude;
	long utc;
	LocationPoint * Next;
};

