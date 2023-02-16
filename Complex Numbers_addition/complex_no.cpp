// C++ program to add two complex numbers
#include <iostream>
#include<conio.h>
using namespace std;

//defining structure for complex numbers say user defined
    struct Complex_num {
        int realPart;
        int imaginaryPart;

};

        int main() {
    //defining two character data types for sign and to run again the pprogramm
        char run,signImag;
    //using do while loop in order to repeated program running
            do{
                Complex_num n1, n2, sum;

                cout << "Enter value of A and B  where A + iB is first complex number\n";
                cin >> n1.realPart >> n1.imaginaryPart;

                cout << "Enter value of A and B  where A + iB is second complex number\n";
                cin >> n2.realPart >> n2.imaginaryPart;

      //applying simple addition of both real and imaginary parts
                    sum.realPart = n1.realPart + n2.realPart;
                    sum.imaginaryPart = n1.imaginaryPart + n2.imaginaryPart;

     // Ternary operator for determining imaginary part sign
                    signImag = (sum.imaginaryPart > 0) ? '+' : '-' ;
    //Ternary operator used to determine position of sign
                    sum.imaginaryPart = (sum.imaginaryPart > 0) ? sum.imaginaryPart : -sum.imaginaryPart ;
                            cout <<"The Sum is  " << sum.realPart <<signImag << sum.imaginaryPart <<"i"  <<endl <<endl<<endl;
    //if user want to run program again
                            cout << "If you want to repeat the programm press any key without 'N'OR'n' "  << endl;
                            cin >> run;


}
                                while(!(run == 'N' || run=='n'));


                                return 0;
 }
