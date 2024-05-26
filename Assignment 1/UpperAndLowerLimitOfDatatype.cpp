//4. Write a in C++ program to check the upper and lower limits of all the valid data types.

#include <iostream>
#include <climits>
#include <cfloat> // For floating-point limits
using namespace std;

int main() {
    cout << "The Maximum limit of char datatype is : " << CHAR_MAX << endl;
    cout << "The Minimum limit of char datatype is : " << CHAR_MIN << endl;
    cout << "The Maximum limit of unsigned char datatype is : " << UCHAR_MAX << endl;
    cout << "The Maximum limit of short datatype is : " << SHRT_MAX << endl;
    cout << "The Minimum limit of short datatype is : " << SHRT_MIN << endl;
    cout << "The Maximum limit of unsigned short datatype is : " << USHRT_MAX << endl;
    cout << "The Maximum limit of int datatype is : " << INT_MAX << endl;
    cout << "The Minimum limit of int datatype is : " << INT_MIN << endl;
    cout << "The Maximum limit of unsigned int datatype is : " << UINT_MAX << endl;
    cout << "The Maximum limit of long datatype is : " << LONG_MAX << endl;
    cout << "The Minimum limit of long datatype is : " << LONG_MIN << endl;
    cout << "The Maximum limit of unsigned long datatype is : " << ULONG_MAX << endl;
    cout << "The Maximum limit of long long datatype is : " << LLONG_MAX << endl;
    cout << "The Minimum limit of long long datatype is : " << LLONG_MIN << endl;
    cout << "The Maximum limit of unsigned long long datatype is : " << ULLONG_MAX << endl;
    cout << "The Maximum limit of float datatype is : " << FLT_MAX << endl;
    cout << "The Minimum limit of float datatype is : " << FLT_MIN << endl;
    cout << "The Maximum limit of double datatype is : " << DBL_MAX << endl;
    cout << "The Minimum limit of double datatype is : " << DBL_MIN << endl;
    cout << "The Maximum limit of long double datatype is : " << LDBL_MAX << endl;
    cout << "The Minimum limit of long double datatype is : " << LDBL_MIN << endl;

    return 0;
}
