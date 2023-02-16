    #include <iostream>
    using namespace std;
    int main()
    {
        //defining 2 variables of integer data type and asssigning pointers to both
    int i,j,*n1=&i,*n2=&j;
    cout<<"\n\n\tENTER THE 1ST NUMBER--->";
    cin>>i;
    cout<<"\n\tENTER THE SECOND NUMBER--->";
    cin>>j;
    cout<<"\n\n\tBEFORE SWAPPING 1st NUMBER-->"<<*n1<<"\n\tBEFORE SWAPPING 2nd NUMBER-->"<<*n2<<endl;
    //using pointers to swap numbers
    *n1=*n1+*n2;
    *n2=*n1-*n2;
    *n1=*n1-*n2;
    cout<<"\n\tAFTER SWIPE 1st NUMBER-->"<<*n1<<"\n\tAFTER SWAPPING 2nd NUMBER-->"<<*n2<<endl;

            cout<<"\n*********************************************";
       return 0;
    }

