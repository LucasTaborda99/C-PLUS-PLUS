#include <iostream>
#include <clocale>
using namespace std;

int parOuImpar (int parametro){
	if (parametro % 2 == 0){
		return 1;
	}
	return 0;
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n = 0;
	
	cout << "Digite um n�mero: ";
	cin >> n;
	
	if(parOuImpar(n)){
		cout << "O n�mero: " << n << " � par" << endl;
	} else{
		cout << "O n�mero: " << n << " � impar" << endl;
	}
	
	return 0;
}
