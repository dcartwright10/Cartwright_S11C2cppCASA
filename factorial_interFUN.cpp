#include <iostream>
using namespace std;

int factorial(int n){
	int n;
	cout<< "Ingrese el valor n deseado: "<<endl;
	cin >> n;
	int cont = 1;
	for(int i =1; i<=n;i++){
		cont*= i;
	}
	cout<< cont <<endl;
	}

int main (){
	factorial(int n);
	return 0;
	}

	
