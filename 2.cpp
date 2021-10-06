#include <iostream>
#include <clocale>
using namespace std;

float valores (float a, float b, float c, float delta){
	
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float a = 0;
	float b = 0;
	float c = 0;
	float delta = 0;
	
	cout << "\nDigite o valor de a: ";
	cin >> a; 
	
	cout << "\nDigite o valor de b: ";
	cin >> b; 
	
	cout << "\nDigite o valor de c: ";
	cin >> c; 
	
	delta = (b * b)- (4 * a * c);
	
	float valores((a, b, c));
	cout << "\nO valor de Delta é: " << delta << endl;
	
	return 0;
}
