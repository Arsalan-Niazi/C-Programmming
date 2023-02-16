//C++ PROGRAMM TO CONVERT DECIMAL TO BINARY BY CALLING ARGUMENTS IN  FUNCTION NAMED "DecimalToBinary".
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

        long long DecimalToBinary (int);

        int main(){

        int deci_num,binary_num;
                cout<<endl<<endl;
                    cout<<setw(3)<<"DECIMAL NUMBER TO BE CONVERTED=>>>>  ";
                    cin>>deci_num;
            binary_num=DecimalToBinary(deci_num);
                cout<<endl<<endl;
                cout<<setw(3)<<"BINARY OF GIVEN NUMBER IS=>>>>>>>  "<<binary_num;
                cout<<endl<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
                return 0;


        }
    long long DecimalToBinary(int deci_num )

    {

        long long binary_num=0;
            int remainder,i=1;
                while (deci_num!=0)
        {
                    remainder=deci_num%2;
                    deci_num/=2;
                    binary_num+=remainder*i;
                    i*=10;
        }

                    return binary_num;

    }
