#include<iostream>
using namespace std;

int main( )
{
    char strng_1[110], strng_2[110];

    cout<<"\n\nENTER YOUR FIRST STRING---> ";
    cin.getline(strng_1, 110);

    cout<<"\n\nENTER YOUR SUB-STRING--> ";
    cin.getline(strng_2, 110);

                    int length = 0;

                    for(length = 0; strng_2[length] != '\0'; length++);

                    int i, j;

                    for(i = 0, j = 0; strng_1[i] != '\0' && strng_2[j] != '\0'; i++)
                    {
                        if(strng_1[i] == strng_2[j])
                        {
                            j++;
                        }
                        else
                        {
                            j = 0;
                        }
                    }

                    if(j == length)
                        cout<<"\n\nPOSITION OF SUBSTRING IS--->"<< i - j +1<<endl<<endl;
                    else
                        cout<<"\n\nNO SUBSTRING FOUND!!!!!!!!\n\n";

                    return 0;
}

