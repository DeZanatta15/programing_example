//rEALICE UN PROGRAMA QUE SOLICITE DE LA ENTRA ESTAN
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num;
	do{
		cout<<"Digite number: "; cin>>num;	
	}while((num<1)||(num>100000000));
	for(int i=1;i<=20;i++){
	cout<<num<<"*"<<i<<"="<<num*i<<endl;
}
cout<<"\n\n";
system("pause");

	return 0;
}
