#include <iostream>
#include <iomanip>
#include <fstream>
#include "linkedList.h"

using namespace std;

int main()
{
        //declare int main variables
        double tempInfo, average, minNum, maxNum;
        int count = 0;
        int max = 100;
        //call constructor and initialize head and current pointers
        linkedList lnkLst;

        //open the thing to read in from a file
        ifstream ifs;
        ifs.open("doubles.txt");

        //use a for loop to read doubles in from file, to a temporary variable, and into the list
        for(count = 0; count < 100; count++){
            ifs >> tempInfo;
            lnkLst.push(tempInfo, count, max);
        }

        for (count = 0; count < max; count++)
        {
            lnkLst.print();
        }

        cout << count << endl;
        //call print function to print out variables into 5 even spaced columns

        //call sum, average, min, and max functions and return their values to their respective variables
    return 0;
}
