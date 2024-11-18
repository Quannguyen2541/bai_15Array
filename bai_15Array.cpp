// bai_15Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string cars[5] = { "volvo", "BMW", "Ford", "Mazda", "Tesla" };
	for (int i = 0; i < 5; i++)
	{
		cout << cars[i] << "\n";
		cars[1] = "Toyota";
		
	}
}