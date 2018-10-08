#include "stdafx.h"
#include "PointList.h"

PointList::PointList()
{
}

PointList::~PointList()
{
}

void PointList::CreatList(int n)
{
	LocationPoint *point;
	point = new LocationPoint;
	LocationPoint *tempPoint;
	point = Head;
	for (int i = 0;i < n;i++)
	{
		tempPoint = new LocationPoint;
		point->Next = tempPoint;
		point = tempPoint;
	}
}

void PointList::Insert(int n, LocationPoint npoint)
{
	LocationPoint *tempPoint = new LocationPoint;
	tempPoint = Head;
	int i = 0;
	while (tempPoint && i<n -1)
	{
		tempPoint = tempPoint->Next;
		i++;
	}
	if (!tempPoint || i>n-1)
	{

	}
	else
	{
		LocationPoint *p;
		p = new LocationPoint;
		p->altitude = npoint.altitude;
		p->latitude = npoint.latitude;
		p->longitude = npoint.altitude;
		p->utc = npoint.utc;
		tempPoint->Next = p;
	}
}


