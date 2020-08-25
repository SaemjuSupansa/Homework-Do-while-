//Supansa Kaewsompak
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char grade;
	float total = 0,count = 0;
	float gpa;
	do{
		cout << "Enter the letter grade(Enter 'X' to exit)"<<endl;
		cin >> grade;
		if(grade == 'a' || grade == 'A') {
			total = total + 4;
			count++; //count = count + 1
		}
		else if(grade == 'b' || grade == 'B') {
			total = total + 3;
			count++;
		}
		else if(grade == 'c' || grade == 'C') {
			total = total + 2;
			count++;
		}
		else if(grade == 'd' || grade == 'D') {
			total = total + 1;
			count++;
		}
		else if (grade == 'f' || grade == 'F') {
			total = total + 0;
			count++;
		}
	}while(grade != 'x' && grade != 'X');
	cout << "Total Grade Points : " << total << endl;
	gpa = total / count;
	cout << "GPA : " << gpa <<endl;

	return 0;
}