#include "functions.h"

int ReadTheDamnFile(int numList[], int counter){
    ifstream inputFile("A1input.txt");

    if(!inputFile.is_open()) {
        cout << "Error opening the file." << endl;
    }
    string line;
    while(getline(inputFile, line)) {
        istringstream iss(line);

        int value;
        while (iss >> value) {
            numList[counter++] = value;
        }
    }
    inputFile.close();
    return counter;
}

int thisThangInHere(int Here[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (Here[i] == target) {
            return i;
        }
    }
    return -1;
}

pair<int, int> modify(int index, int newval, int numList[]) {
    try {
        int oldval = numList[index];
        numList[index] = newval;

        pair<int, int> returnPair(newval, oldval);
        return returnPair;
    }

    catch (const std::exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
}

void AddThatToEndOfArray(int arrayToModify[], int that, int &counter) {

    try {
        arrayToModify[counter] = that;
        counter++;
    }

    catch (const std::exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
}

void modifyArrayAtIndex(int arr[], int index, bool remove, int counter) {
    if (index >= 0 && index < counter) {
        if (remove) {
            for (int i = index; i < counter - 1; ++i) {
                arr[i] = arr[i + 1];
            }
            counter--;
        }
        else {
            arr[index] = 0;
        }
    }
}
