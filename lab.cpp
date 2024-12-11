#include <iostream>
using namespace std;
class Person{
	protected:
		string name;
	public:
		Person(string a){
			name = a;
		}
};
class Employee: public Person{
	protected:
		string id;
	public:
		Employee(string a, string b) : Person(a){
			id = b;
		}
		void displayInfo(){
			cout<<"Student info\n";
			cout<<name<<endl;
			cout<<id<<endl;
		}
};
class Student: public Person{
	protected:
		string stu_id;
	public:
		Student(string a, string b): Person(a){
			stu_id = b;
		}
		void displayInfo(){
			cout<<"Employee info\n";
			cout<<name<<endl;
			cout<<stu_id<<endl;
		}
};
class WorkingStudent: public Student, public Employee{
	public:
		WorkingStudent(string a,string b,string c): Student(a, b), Employee(a, c){
		}
		void a(){
			cout<<"a"<<endl;
		}
		
};
int main(){
	WorkingStudent obj("Aman", "B-28494", "A-00188");
	obj.Student::displayInfo();
	obj.Employee::displayInfo();
}
