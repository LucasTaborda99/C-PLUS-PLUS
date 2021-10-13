#include <iostream>
#include <clocale>

using namespace std;

int positivoOuNegativo (int numero){
	
	if (numero >= 0){
		return 1;
	}
	return 0;
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n = 0;
	
	cout << "Digite um número: ";
	cin >> n;
		
	if (positivoOuNegativo(n) == 0){
		cout << "\nO número: " << n << " é negativo" << endl;
	} else{
		cout << "\nO número: " << n << " é positivo" << endl;
	}
	
	return 0;
}
