#include<iostream>
using namespace std;
class Student {
	private:
		char name[30];
		int rollNo;
		float marks;
	public:
		void inputDetails(){
			cout<<"Enter student name:";
			cin>>name;
			cout<<"enter roll no:";
			cin>>rollNo;
			cout<<"enter marks:";
			cin>>marks;
		}
		void displayDetails(){
			cout<<"student name:"<<name<<endl;
			cout<<"rollNo:"<<rollNo<<endl;
			cout<<"marks:"<<marks<<endl;
			
		} 	
			
	};
	int main(){
		cout<<"Name: Shivani Pradip Chavan"<<endl;
		cout<<"Roll No:26 SY S2"<<endl;
		Student studentObj;
		studentObj.inputDetails();
		cout<<"\nStudent Details:\n";
		studentObj.displayDetails();
		return 0;
	}

