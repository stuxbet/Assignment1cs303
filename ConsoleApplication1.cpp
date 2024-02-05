#include <iostream>
#include "functions.h"
int main()
{
	//this main doesnt do anything but shows some functionality
	const int MAX_VALUES = 200;
	int values[MAX_VALUES];
	int counter = 0;
	counter = ReadTheDamnFile(values, counter);
	cout << "Look for 6: " << thisThangInHere(values, counter, 6)<<endl;
	cout << "Look for 101: " << thisThangInHere(values, counter, 101) << endl;
	//pair<int, int> resultPair = modify(4, 6, values);
	//cout << "Modified old value:" <<resultPair.first << endl;
	//cout << "New value:" <<resultPair.second << endl;
	cout << "counter:" << counter << endl;
	AddThatToEndOfArray(values, 6, counter);
	//cout << "counter:" << counter;
	for (int val : values) { cout << val<<" "; }


}

