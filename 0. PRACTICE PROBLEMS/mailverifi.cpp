//#include <iostream>
//#include <string>
//using namespace std;
//
//bool isValidEmail(const string& email) {
//    size_t atPosition = email.find('@');      // Find the position of '@'
//    size_t dotPosition = email.find('.');     // Find the position of the first '.'
//
//    // Check if '@' exists and '.' exists and '.' appears after '@'
//    if (atPosition == string::npos || dotPosition == string::npos || dotPosition < atPosition + 1) {
//        return false; // Email is invalid
//    }
//    return true; // Email is valid
//}
//
//int main() {
//    string email;
//    cout << "Enter email: ";
//    cin >> email;
//
//    try {
//        if (!isValidEmail(email)) {
//            throw "Invalid"; // Throw an exception if email is invalid
//        }
//        cout << "Valid" << endl; // Email is valid
//    } catch (const char* msg) {
//        cout << msg << endl; // Print "Invalid"
//    }
//
//    return 0;
//}


#include<iostream>
#include<string>

using namespace std;

bool validmail(const string & email){
	size_t atpose = email.find('@');
	size_t dotpose = email.find('.');
	
	if (atpose == string :: npos || dotpose == string :: npos || atpose+1 >dotpose ){
		return false;
	}
	return true;
	
}

int main(){
	string email;
	cout<<"Enter the mail"<<endl;
	cin>>email;
	
	try{
		if(! validmail(email)){
			throw "Invalid";
		}
		cout<<"Valid"<<endl;
	}
	catch(const char* msg){
		cout<<msg<<endl;
	}
	
	return 0;
}

