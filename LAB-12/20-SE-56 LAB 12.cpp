#include<iostream>
using namespace std;
//initialized two global variables from 100
		int Total_Marks_PF=100;
		int Total_Marks_Maths=100;
            //make a class named student having following members
class student {
	private:
    int PF_marks;
    int Maths_marks;
    int roll_numb;
    double percent;
	public:
	    //following are 3 required memebers getMarks,percentage ,display
		getMarks() {
                int pf_m,math_m,roll_no;
                cout<<"\t\t\tENTER THE ROLL NUMBER OF STUDENT: ";
                cin>>roll_no;
                roll_numb =  roll_no;
                cout<<"\t\t\tENTER THE PF MARKS OF STUDENT: ";
                cin>>pf_m;
                PF_marks=pf_m;
                cout<<"\t\t\tENTER THE MATH MARKS OF SUDENT: ";
                cin>>math_m;
                cout<<endl;
                Maths_marks=math_m;
		}
		percentage() {
                int comb = PF_marks + Maths_marks;
                float perc = (comb*100) / 200;
                percent = perc;
		}
        display() {
                cout<<"\t"<<roll_numb<<"\t"<<PF_marks<<"\t\t\t"<<Maths_marks<<"\t\t"<<percent<<endl;


		}
};
int main() {
	student stdnt1,stdnt2,stdnt3;
        int a=1;
	//LIST WILL START FROM STUDENT 1 FOR RECORD AND KEEP GOING UNTIL STUDENT 3
        cout<<"\t\tStudent NO "<<a++<<endl<<endl;
        stdnt1.getMarks();
        cout<<"\t\tStudent NO "<<a++<<endl<<endl;
        stdnt2.getMarks();
        cout<<"\t\tStudent NO "<<a++<<endl<<endl;
        stdnt3.getMarks();
	//FINALLY DISPLAY THE FULL RECORD OF STUDENT
        cout<<"Roll Number\tPF Marks\tMath_Marks\tCombined Percentage\n";
            stdnt1.percentage();
            stdnt2.percentage();
            stdnt3.percentage();
            stdnt1.display();
            stdnt2.display();
            stdnt3.display();
}

