#include <iostream>
using namespace std;

int main() {

    char charac;
    cout << "\n\nUSER ENTER THE CHARACTER---->";
    cin >> charac;

    if((charac >= 'a' && charac <= 'z') || (charac >= 'A' && charac <= 'Z')) {
        cout << endl << charac << " is an ALPHABET.\n\n";
    }       else if(charac >= '0' && charac <= '9') {
        cout << endl << charac << " is a DIGIT.\n\n";
    }       else {
        cout << endl << charac << " is a SPECIAL CHARACTER.\n\n";
    }

    return 0;
}
