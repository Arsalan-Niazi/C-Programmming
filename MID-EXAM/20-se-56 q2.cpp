//SIMPLE C++ PROGRAMM IN ORDER TO PRINT PYRAMID
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //INITIALIZING ALL REQUIRED VARIABLES
    int rows,
    //OUR COUNT WILL START FROM ZERO
    count = 0,
    count1 = 0,
    m = 0;
    //USER WILL PUT NUMBER OF ROWS HE WANT TO DISPLAY OF TRIANGLE
    cout << "NUMBER OF ROWS BEING PRINTED ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
 //USING NESTED FOR LOOP AND WHILE LOOP WITHIN FOR LOOP
    {
            for(int space = 1; space <= rows-i; ++space)
        {
            cout << "  ";
            ++count;
        }

    while(m != 2*i-1)
        {
        //WHILE LOOP COMPRISE OF IF-ELSE SENERIO
                if (count <= rows-1)
                {
                cout <<setw(1)<< i+m << " ";
                ++count;
                }
                else
                {
                ++count1;
                cout << setw(1)<<i+m-2*count1 << " ";
                }
                ++m;
            }
            //ALL THESE VARIABLES ARE EQUAL TO 0
                count1 = count = m = 0;

                cout << endl<<endl;
            }

                    return 0;
            }
