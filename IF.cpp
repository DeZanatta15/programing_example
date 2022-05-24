#include <iostream>

using namespace std;

int time;

int main (){
	printf ("Welcomme again \n");
	printf ("What time is it? \n");
		cin>> time;
		
	if (time >= 1 && time <= 11){
		cout << "Good day";
		if(time == 12){
			cout<< "Good afternoon";
		}
	}else{
	if (time >= 13 && time <= 17){
		cout << "Good evening";
		}
	else if (time <= 18 && time >=23){
			cout<< "Good nigths";
	if (time == 24 or time == 00){
		cout<< "Go to the bed";
			}
		}
	}
}
