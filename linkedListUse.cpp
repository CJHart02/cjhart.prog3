#include <iostream>
#include <iomanip>
#include <fstream>
#include "linkedList.h"

using namespace std;

int main()
{
        //declare int main variables
        double tempInfo, sum, average, minNum, maxNum;
        int listCount = 0;
        int count = 0;
        int max = 100;
        //call constructor and initialize head and current pointers
        linkedList lnkLst;

        //open the thing to read in from a file
        ifstream ifs;
        ifs.open("doubles.txt");

        //use a for loop to read doubles in from file, to a temporary variable, and into the list
        for(count = 0; count < max; count++){
            ifs >> tempInfo;
            lnkLst.push(tempInfo, count, max);
        }

        listCount = count;

        //call print function to print out variables into 5 even spaced columns
        lnkLst.columnPrint(count, max);

        //call sum, average, min, and max functions and return their values to their respective variables
        sum = lnkLst.sum(count, max);
        average = lnkLst.average(count, max);
        minNum = lnkLst.minimum(count, max);
        maxNum = lnkLst.maximum(count, max);

        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl;
        cout << "Smallest Number: " << minNum << endl;
        cout << "Biggest Number: " << maxNum << endl;
        cout << "Range: " << minNum << " - " << maxNum << endl;
        cout << "Memory Location of Head: ";
        lnkLst.printHead();


    return 0;
}
