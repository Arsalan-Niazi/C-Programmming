#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//declaring 3 variables x,y,z
        int x,y,z;

            for(x=1;x<=5;x++)
        {

                for(y=x;y<40;y++)
            {

                cout<<" ";
            }
                for(z=1;z<=(2*x-1);z++)
            {
                cout<<("*");
            }
            cout<<"\n";

    }
}

