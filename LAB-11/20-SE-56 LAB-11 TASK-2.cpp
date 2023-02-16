#include <iostream>
#include <cmath>
using namespace std;
//declaring a function having return type of long long
        long long ConvertBinaryToDecimal(int);

        int main()
{
        //defining two int type variables
    int x, binary_numb;

    cout << "USER ENTER THE DECIMAL NUMBER: "<<endl<<endl;
    cin >> x;
    cout<<endl<<endl;
    //displaying output
    binary_numb =ConvertBinaryToDecimal (x);
    cout <<endl<<"\t"<< x << " in decimal : " << binary_numb<< " in binary:" << endl ;
    return 0;
}
//defining function named binary_to_decimal conversion
        long long ConvertBinaryToDecimal(int x)
{
        long long binary_numb = 0;
        int remainder, i = 1, step = 1;

            while (x!=0)
        {
                remainder = x%2;
                cout << "\tStep " << step++ << ": " << x << "/2, Remainder : " << remainder << ", Quotient : " << x/2 << endl;
                x /= 2;
                binary_numb += remainder*i;
                i *= 10;
        }
    return binary_numb;
}
