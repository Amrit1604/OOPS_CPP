#include<iostream>
#include <vector>
using namespace std;

int main(){
//	vector<int> * vp = new vector<int>();    DYNAMICALLY LOCATED
	vector<int> v;  // STATIC LOCATE (DELETE BY OWN AFTER SCOPE ENDS)
	
	for(int i = 0 ; i<100 ; i++){
		v.push_back(i+1);
	}
	
	
	// HOW TO ADD ELEMENTS IN ORDER LIKE IN AN ARRAY WITHOUT DEFINING THE SIZE 
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	v[1]= 100;
	
//	v[3] = 1002;    // 	VALUE ADDED IN RANDOM PLACE WHICH IS WRONG
//	v[4] = 1234;    // DONT USE THIS FOR INSERTING ELEMENTS

	v.push_back(23);  // OVERRIDES THE VALUES IN  3 AND 4 PLACE
	v.push_back(234);
	
	v.pop_back();
	
	for(int i =0; i<v.size(); i++){
		cout<<v[i]<<endl;
		
	}
	
	
//	cout<< v[0] << endl;
//	cout<< v[1]<<endl;
//	cout<< v[2]<<endl;
//	cout<< v[3]<<endl;
//	cout<< v[4]<<endl;
//	cout<< v[5]<<endl;
//	cout<< v[6]<<endl;
//	
//	cout<<"Size : "<<v.size()<<endl;
//	
//	cout<<v.at(2) << endl;
//	cout<<v.at(6) << endl;



}

