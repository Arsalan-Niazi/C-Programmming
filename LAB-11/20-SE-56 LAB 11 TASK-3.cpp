#include<iostream>
using namespace std;
//DECLARING A FUNCTION FOR FIBIONIC SERIES NAMED AS fibionic
        void fibionic(int n);
        int main(){
        int n;
        cout<<"USER ENTER THE NUMBER OF ELEMENTS : ";
        cin>>n;
        cout<<"\nFIBIONIC SERIES OF GIVEN NUMBER OF ELEMENTS IS: ";
        cout<<"0 "<<"1 ";
        fibionic(n-2);
        //n-2 SHOWS THAT 2 OF THESE ARE ALREADY PRINTED
        return 0;
}
        //DEFINING THE fibionic FUNCTION
        void fibionic(int n){
        //these varibles are made static so that they can not be modified again
        static int n1=0, n2=1, n3;
        if(n>0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
        cout<<n3<<" ";
         fibionic(n-1);
    }
}
