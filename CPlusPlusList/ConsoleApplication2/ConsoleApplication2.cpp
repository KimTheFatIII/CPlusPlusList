// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "PointList.h"
using namespace std;

void main()
{
	PointList pointLst;
	pointLst.CreatList(1);
	for (int i = 0; i < 10; i++)
	{
		LocationPoint point;
		point.altitude = 54.001;
		point.latitude = 40.065;
		point.longitude = 116.1004;
		pointLst.Insert(i+1,point);
	}
	int a;
	cin>>a;
}

