// TOLL BOOTH OF PARKING

#include<iostream>
using namespace std;

class tollbooth{
	private:
		int tcar;
		int tcash;
		
	public:
		tollbooth(){
		
		tcar = 0;
		tcash = 0;
	}
		
		
		void paycars(){
			tcar++;
			tcash = tcash+50;
		}
		
		void nopaycar(){
			tcar++;
		}
		
		void display(){
			cout <<"Total cars = " << tcar << endl;
			cout << "Total cash = "<< tcash <<" /- " << endl;
		}
};

int main(){
	
	tollbooth tb;
	char choice;
	while(true){
		cout << "Enter y for paycar and n for no pay car and q for quit"<<endl;
		
		cin>>choice;
		if(choice == 'y'){
			tb.paycars();
		}
		else if(choice == 'n'){
			tb.nopaycar();
		}
		else if(choice == 'q'){
			tb.display();
		}
		else {
			cout<<"Invalid input \n Enter y or n or q "<<endl;
		}
	}
	return 0;
	
	
	
}
