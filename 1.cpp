#include <iostream>
#include <clocale>

using namespace std;

float positivoOuNegativo (float numero){
	
	if (numero >= 0){
		return 1;
	}
	return 0;
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n = 0;
	
	cout << "Digite um número: ";
	cin >> n;
	
	if(n >=0){
		cout << "\nO número: " << n << " é positivo" << endl;
	} else{
		cout << "\nO número: " << n << " é negativo" << endl;
	}
	
	return 0;
}
