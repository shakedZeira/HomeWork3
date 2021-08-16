#include "Vector2.h"
#include <iostream>
using namespace std;

void initilaizeVector()
{
	int num = 15;
	int num2 = 3;
	int num3 = 4;
 	Vector Vec = *new Vector();
	cout << "Capacity: " << Vec.GetCapacity() << endl;
	cout << "size: " << Vec.GetSize() << endl;
	cout << "is empty: " << Vec.IsEmpty() << endl;
	Vec.PushBack(num);
	Vec.PushBack(num2);
	Vec.pop_back();
	Vec.PushBack(4);
	Vec.printVector();
}

void Vector::printVector()
{
	for (int i = 0; i < size; i++)
	{
		cout << "value at postion :" << i << "is: " << start[i] << endl;
	}
}
int Vector::GetSize()
{
	return size;
}
int Vector::GetCapacity()
{
	return capacity;
}
bool Vector::IsEmpty()
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
void Vector::InsertValue(int value, int postion)
{
	if (postion > size)
	{
		cout << "cant enter the value! , index out of range" << endl;
	}
	else
	{
		start[postion] = value;
	}
}
void Vector::assign(int val)
{
	for (int i = 0; i < size; i++)
	{
		start[i] = val;
	}
}
void Vector::clear()
{
	delete[] start;
}
void Vector::PushBack(const int& val)
{
	size++;
	start[size - 1] = val;
}
void Vector::pop_back()
{
	size--;
}
void Vector::reserve(int n)
{
	if (n < size)
	{
		for (int i = n; i < size + 1; i++)
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
int main()
{
	initilaizeVector();
	return 0;
}