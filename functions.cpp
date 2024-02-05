#include "functions.h"

int ReadTheDamnFile(int numList[], int counter){
    // uses string stream and getline to access input file and separate values
    ifstream inputFile("A1input.txt");

    if(!inputFile.is_open()) {
        cout << "Error opening the file." << endl;
    }
    string line;
    while(getline(inputFile, line)) {
        istringstream iss(line);

        int value;
        while (iss >> value) {
            //increments counter when it addes value to array
            numList[counter++] = value;
        }
    }
    inputFile.close();
    return counter;
}

int thisThangInHere(int Here[], int size, int target) {
    //iterates through array to find target value
    // returns index if successful and -1 if not
    for (int i = 0; i < size; ++i) {
        if (Here[i] == target) {
            return i;
        }
    }
    return -1;
}

pair<int, int> modify(int index, int newval, int numList[]) {
    try {
        // sets old value to the array at the selected index to save it
        int oldval = numList[index];
        numList[index] = newval;
        //changes value and returns a pair of the new and old value
        pair<int, int> returnPair(newval, oldval);
        return returnPair;
    }

    catch (const std::exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
}

void AddThatToEndOfArray(int arrayToModify[], int that, int &counter) {
    
    try {
        // adds value to last index of array using counter system
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
            //if remove is selected we just set the array at that index to the next value
            for (int i = index; i < counter - 1; ++i) {
                arr[i] = arr[i + 1];
            }
            counter--;
        }
        else {
            // if remove isnt selected then we set it to 0
            arr[index] = 0;
        }
    }
}
