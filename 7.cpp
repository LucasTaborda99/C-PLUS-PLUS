#include <iostream>
#include <clocale>

using namespace std;

float mediaTresNotas (float nota1, float nota2, float nota3){
	float media = ((nota1 + nota2 + nota3)/3);
	return media;
}

float maiorNota (float nota1, float nota2, float nota3){
	if(nota1 >= nota2 && nota1 >= nota3){
		return nota1;
	} else if(nota2 >= nota1 && nota2 >= nota3){
		return nota2;
	} else {
		return nota3;
	}
}

float menorNota (float nota1, float nota2, float nota3){
	if(nota1 <= nota2 && nota1 <= nota3){
		return nota1;
	} else if(nota2 <= nota1 && nota2 <= nota3){
		return nota2;
	} else {
		return nota3;
	}
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float nota1 = 0, nota2 = 0, nota3 = 0;
	float mediaDasNotas = 0, mediaDasDuasMaioresNotas = 0, maior = 0, menor = 0;
	
	cout << "---------- Notas das provas ----------" << endl;
	
	cout << "\nDigite o valor da primeira nota: ";
	cin >> nota1;
	
	cout << "Digite o valor da segunda nota: ";
	cin >> nota2;
	
	cout << "Digite o valor da terceira nota: ";
	cin >> nota3;
	
	mediaDasNotas = mediaTresNotas(nota1, nota2, nota3);
	mediaDasDuasMaioresNotas = (nota1 + nota2 + nota3 - menorNota(nota1, nota2, nota3))/2;
	maior = maiorNota(nota1, nota2, nota3);
	menor = menorNota(nota1, nota2, nota3);
	
	cout << "\nSua maior nota foi: " << maior;
	cout << "\nSua menor nota foi: " << menor;
	cout << "\nSua média com as três notas foi: " << mediaDasNotas;
	cout << "\nSua média com as duas notas mais alta foi: " << mediaDasDuasMaioresNotas << endl;
	
	return 0;
}

