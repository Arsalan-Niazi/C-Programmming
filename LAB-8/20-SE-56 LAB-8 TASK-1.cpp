#include <iostream>
#include<conio.h>


using namespace std;

        int main(){
            //defining 2 integer type variables for characters and words count

        int chCount=0,wdCount=0;
        char ch;

        cout<<"Enter a phrase: ";

            //phrase will complete when user press enter and result will be displayed
        while(ch!='\r')
        {

        ch=getche();
            //whenever user gives space it means 1 word is counted
        if(ch==' ')
                wdCount++;
            //else if user dont provide space it will count characters
        else chCount++;
        }
    cout<<"\n Words:"<<wdCount+1;
    cout<<"\n Letters:"<<chCount-1<<endl;
    getch();

    }
