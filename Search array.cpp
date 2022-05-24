//Buscar una variable dentro de un array
#include<stdio.h>
findelement(int arr[], int llave, int size){
	for(int i=0; i<size; i++){
		if(arr[i] == llave){
			printf("The position is: %d", i+2-1);
			break;
		}
}
}

int main(){
	int arr[] = {4, 8, 12, 16, 20, 25};//Declare array. The array is a group of data
	
	int n = 6; // number of elements
	
	int key = 16; //Key to be found
	
	findelement(arr, key, n);
	return 0;
}
