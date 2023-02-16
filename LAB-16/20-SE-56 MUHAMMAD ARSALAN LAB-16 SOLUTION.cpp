
#include <iostream>
//we used this header file for ifstream,ofstream
#include <fstream>
using namespace std;

int main()
{
	//offstream class object
        ofstream output;
        string line;
        output.open("sample.txt");

	// this loop will execute if file opened successfully
        while (output) {
    // getline is used to read the line form input
		getline(cin, line);
    //here press the 0 to exit
		if (line == "0")
			break;

    // for writing in file
		output << line << endl;
	}
        output.close();

	// Creation of ifstream class object to read the file
        ifstream input;
        input.open("sample.txt");

	// this loop will execute until the end of file
        while (input) {

		getline(input, line);

    // for displaying line on console
		cout << line << endl;
	}

	//file close
        input.close();

            return 0;
}
