#include<iostream>
using namespace std;

int main()
{

    char strng[70];
  int length_s, i;

 cout<<"\nENTER A STRING PLEASE--->> ";
    cin.getline(strng, 70);
    for(length_s = 0; strng[length_s] != '\0'; length_s++);

    cout<<"\n\nBACKWARD STRING IS--->>";

    for(i = length_s - 1; i >= 0; i--)
    {
        cout << strng[i];

    }
    cout<<endl<<endl<<"**********END OF THE PROGRAM**********"<<endl;
    return 0;
}
