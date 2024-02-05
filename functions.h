#pragma once
#include <utility> 
using namespace std;
#include <iostream>
#include <fstream>
#include <sstream>

int ReadTheDamnFile(int numList[], int counter);

int thisThangInHere(int Here[],int size, int target);

pair<int, int> modify(int index, int newval, int numList[]);

void AddThatToEndOfArray(int arrayToModify[], int that, int &counter);

void modifyArrayAtIndex(int arr[], int index, bool remove, int counter);


