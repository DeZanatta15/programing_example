#include <iostream>

using namespace std;

float banlace = 1000.00, deposit, withdraw;
int operation;

int main(){
	
	cout<<"Welcome again"<< endl;
	cout<<"Select the operation that you want realice: "<< endl;	
		cout<<"1.-Check your balance"<< endl;
		cout<<"2.-Realice a deposit"<< endl;
		cout<<"3.-Realice  a withdraw"<< endl;
	cin>>operation;
	
	if(operation == 1){
		cout<<"Your balance is: "<< balance<< endl;
	}
	else if(operation == 2){
		cout<<"How much do you want to deposit: "<<balance+cin<<endl;
	}
	else if(operation == 3){
		cout<<"How much do you want to withdraw: "<<balnce-cin<<endl;
		if(balance<operation 3)
		cout<<"You don´t hace enough money";
	}

	return 0;
}
