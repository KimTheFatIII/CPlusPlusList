#pragma once
#include "stdafx.h"
#include "LocationPoint.h"

class PointList
{
private:
	LocationPoint * Head;
public:
	PointList();
	~PointList();
	void CreatList(int n);
	void Insert(int n,LocationPoint npoint);
};
 