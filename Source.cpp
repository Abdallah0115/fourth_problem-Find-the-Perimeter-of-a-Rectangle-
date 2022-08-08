#include<iostream>
using namespace std;
int findPerimeter(int h, int w)
{
	if (h < 0 || w < 0)
		return 0;
	else return (h + w) * 2;
}