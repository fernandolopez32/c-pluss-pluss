#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

// here we use the standard namespace 
using namespace std;

// variable outside function
int imGlobal = 0; 
const double PI = 3.141;

int main(int argc, char** argv)
{
    cout<< "hello my c++ world";

    // data type 

    bool married = true;
    short int smallNum = 10;

    
    cout << "min unsigned short int " << 
            numeric_limits<short int>::min()
        << endl;
     cout << "max unsigned short int " << 
            numeric_limits<short int>::max()
        << endl;
     cout << "min unsigned double " << 
            numeric_limits<double>::min()
        << endl;
     cout << "max unsigned double " << 
            numeric_limits<double>::max()
        << endl;
    
    



    return 0;
}