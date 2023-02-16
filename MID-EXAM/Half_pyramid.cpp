#include <iostream>
#include <iomanip>
    using namespace std ;
    //using nested  while loop to print a pyramid of numbers 5 times
        int main(){
    //initializing the loop from 1 via while loop
        int i=1;

        while (i<=5){
    //using another nested while loop for respective output
            int j=1;
            while (j<=i){
    //using setw manipulator from <iomanip> library in order to make output presentable
                cout<<setw(2)<<j;
                j++;
            }
            cout<<endl;
            i++;

            }
return 0;
            }
