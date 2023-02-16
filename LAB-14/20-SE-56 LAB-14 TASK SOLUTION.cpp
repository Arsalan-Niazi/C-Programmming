#include<iostream>
using namespace std;
int main(){
    //a string named input is declared for getting string from user
    string in_put;
        int i = 0;
    //integer data type to count number of time cat appears
        int cat_count = 0;
    //used get line function to read string or line from input stream
            getline(cin, in_put, '\n');

            for(i = in_put.find("cat", 0); i != string::npos; i = in_put.find("cat", i))
{
    //used increment to move next to last detected instance of required word
            cat_count++;
                i++;
}
        cout<<endl<<cat_count<<endl<<endl;
        cout<<"-------------------------------------------";

        return 0;
}
