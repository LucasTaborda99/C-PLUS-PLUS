#include <iostream>
#include <clocale>

using namespace std;

int parOuImpar (int numero){
	
	if (numero % 2 == 0){
		return 1;
	}
	return 0;
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n = 0;
	
	cout << "Digite um número: ";
	cin >> n;
	
	if(parOuImpar(n)){
		cout << "\nO número: " << n << " é par" << endl;
	} else{
		cout << "\nO número: " << n << " é impar" << endl;
	}
	
	return 0;
}

