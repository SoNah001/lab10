#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int N =0;
	do{
	    char grade;
		cout << "Student [" << N+1 << "]: ";
		cin >> grade;
		if(grade=='0') {
		    break;
		} //The loop must be terminated when grade = '0'
		
		if(grade=='A'){ // if grade is A
			count[0]++;
			N++;
		}
		else if(grade=='B'){ // if grade is B
			count[1]++;
			N++;
		}
		else if(grade=='C'){ // if grade is B
			count[2]++;
			N++;
		}
		else if(grade=='D'){ // if grade is B
			count[3]++;
			N++;
		}
		else if(grade=='F'){ // if grade is B
			count[4]++;
			N++;
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n";
		}
	}while(true);
	
	
	cout << "In total "<< N <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	//	and so on ... for grade = C, D, F	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];
	return 0;
}