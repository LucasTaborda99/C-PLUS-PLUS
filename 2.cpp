#include <iostream>
#include <clocale>

using namespace std;

float delta (float a, float b, float c){
	
	float d = ((b*b)-(4*a*c));
	return d;
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float a = 0;
	float b = 0;
	float c = 0;
	float delta1 = 0;
	
	cout << "Digite o valor de a: ";
	cin >> a; 
	
	cout << "\nDigite o valor de b: ";
	cin >> b; 
	
	cout << "\nDigite o valor de c: ";
	cin >> c; 
	
	delta1 = delta (a, b, c);
	
	cout << "\nO valor de Delta é: " << delta1 << endl;
	
	return 0;
}


