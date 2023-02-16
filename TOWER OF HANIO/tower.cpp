// C++ PROGRAM TO MAKE TOWERS OF HANOI USING RECURSION WHERE USER CHOSES NUMBER OF DISCS TO BE MOVED AND ON WHICH TOWER
#include <iostream>
using namespace std;

//DECLARED FUNCTION FOR TOWER OF HANOI
    void towers_Hanoi(int,char,char,char);
    // IT IS MAIN FUNCTION OF THIS PROGRAMM
int main()
{
    //DEFINING VARIABLES TO BE USED IN PROGRAMM

    int num_disc;
    char from_tower,aux_tower,to_tower;
    cout<<" Enter Number Of Disc User Wants To Use:";
    cin>>num_disc;
        cout<<"At Which Tower You Want To Move Disc:";
        cin>>to_tower;
        //HERE TERNITORY OPERATORS ARE USED IN ORDER TO CHOOSE ON WHICH TOWER DISCS ARE TO BE MOVED
        aux_tower=(to_tower=='C'||to_tower=='c')?'B':'C';
        cout<<endl;

    towers_Hanoi(num_disc, 'A', to_tower, aux_tower);
cout<<"\n\n\nGAME HAS ENDED THANK YOU FOR PLAYING\n\n\n";

     return 0;
}
// DEFINING FUNCTION INVOLVING DISCS MOVEMENT
void towers_Hanoi(int num_disc, char from_tower,
                    char to_tower, char aux_tower)
{
            if (num_disc== 1)
    {
        cout << "Move disk 1 from Tower " << from_tower <<
                            " to Tower " << to_tower<<endl;
        return;

    }
        else
        //HERE RECURSION IS INVOLVED FOR USING CALLING SAME TOWER OF HANOI FUNCTION AGAIN AND AGAIN
       {

        towers_Hanoi(num_disc - 1, from_tower, aux_tower, to_tower);
        cout << "Move disk " << num_disc << " from Tower " << from_tower <<
                                " to Tower " << to_tower << endl;
        towers_Hanoi(num_disc - 1, aux_tower, to_tower, from_tower);
}
}

