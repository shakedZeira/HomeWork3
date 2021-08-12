#include "Vector2.h"
#include <iostream>
using namespace std;

int main()
{

	Vector Vec = *new Vector();
	cout<<Vec.GetCapacity()<<endl;
	return 0;
}