#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int rows, number = 1;



    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout <<std::right<<setw(5)<< number << "  ";
            number=number+2;
        }

        cout << endl;
    }

    return 0;
}
