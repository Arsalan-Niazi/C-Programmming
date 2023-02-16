#include <iostream>
#include<iomanip>
using namespace std;
    //using nested while loop to print pyramid of alphabets
int main(){
    //initializing an i from 1
    //declaring character data type from 'A' using its ASCI value
	int p=1;
char charac=65;

        while (p<=5){
            int q=1;
            while (q<=p){
			cout <<setw(2)<< charac;
			q++;
    }
            cout << endl;
     //in each line next character start repeating as number of its row
		p++;
        charac++;
	}
}
