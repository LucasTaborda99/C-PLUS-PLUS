#include <iostream>
#include <clocale>

using namespace std;

float menor (float n1, float n2, float n3){
	
	if(n1<=n2 && n1<=n3){
		return n1;
	} else if(n2<=n1 && n2<=n3){
		return n2;
	} else{
		return n3;
	}
	
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float resultado = 0;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> n1; 
	
	cout << "\nDigite o segundo n�mero: ";
	cin >> n2; 
	
	cout << "\nDigite o terceiro n�mero: ";
	cin >> n3; 
	
	resultado = menor(n1,n2,n3);
	
	cout << "\nO menor n�mero �: " << resultado << endl;
	
	return 0;
}

