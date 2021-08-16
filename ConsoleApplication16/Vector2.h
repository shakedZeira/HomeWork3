#pragma once
#include <iostream>
using namespace std;

class Vector {
private:
	int* start;
	int size;
	int capacity;
	int resizeFactor;
public:
	Vector(int n = 10)
	{
		start = new int[n];
		size = 0;
		capacity = n;
		resizeFactor = 0;
	}
	void printVector();
	int GetSize();
	int GetCapacity();
	bool IsEmpty();
	void InsertValue(int value, int postion);
	void assign(int val);
	void clear();
	void PushBack(const int& val);
	void pop_back();
	void reserve(int n);
	//the big three?
	//part d to do
	//to d try and except
};
