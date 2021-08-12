#pragma once
#include <iostream>
using namespace std;

class Vector {
private:
	int* begin;
	int size;
	int capacity;
	int resizeFactor;
public:
	Vector(int n = 10)
	{
		
		throw begin = new int[n];
		size = 0;
		capacity = n;
		resizeFactor = 0;
	}
	int GetSize()
	{
		return size;
	}
	int GetCapacity()
	{
		return capacity;
	}
	bool IsEmpty()
	{
		if (size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void assign(int val)
	{
		for (int i = 0; i < size; i++)
		{
			begin[i] = val;

		}
	}
	void clear()
	{
		delete[] begin;
	}
	//why int & ?
	void PushBack(const int& val)
	{
		size++;
		begin[size] = val;
	}
	//to check if capacity is the right way
	void pop_back()
	{
		int* begin_New = new int[size - 1];
		copy(begin, begin + size - 1, begin_New);
		swap(begin, begin_New);
		delete[] begin;
	}
	void reserve(int n)
	{
		if (n < size)
		{
			for (int i = n; i < size+1; i++)
			{
				pop_back();
			}
		}
		if (n > size && n < capacity)
		{
			for (int i = n; i < capacity + 1; i++)
			{
				PushBack(0);
			}
		}
		if (n > capacity)
		{
			int temp = capacity;
			capacity = n;
			for (int i = temp; i < capacity; i++)
			{
				PushBack(0);
			}
		}
	}
	//the big three?
	//part d to do
	//to d try and except
};
