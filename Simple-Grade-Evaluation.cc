#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	
	double grade;

	cout << "enter the grade: " << endl;
		cin>> grade;
	if (grade >= 75  && grade <=100){
		cout << "passed" << endl;
	}else if(grade >=101){
		cout<<"error grade" << endl;
	}else if(grade < 75){
		cout << "failed"<< endl;
	}else{
		cout << "invalid"<< endl;
	}
		
	return 0;
}
