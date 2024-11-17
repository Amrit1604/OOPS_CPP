#include<iostream>
using namespace std;

class Loading{
	public:
		void sum(int a ,int b){
			cout<<"The sum is : "<< a+b << endl;
		}
		
		void mul(int a , int b){
			cout<<"The mul is : "<< a*b << endl;
		}
		
		void div(int a , int b){
			cout<<"The div is : "<< a/b << endl;
		}
		
		void fullname(string a , string b){
			cout<<"The full name is : "<< a+b << endl;
		}
}; 

int main(){
	
	Loading s;
	s.sum(3,3);
	s.mul(3,3);
	s.div(4,2);
	s.fullname("Amrit ", "Joshi");
	
	return 0;
	
}


