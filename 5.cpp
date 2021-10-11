#include <iostream>
#include <clocale> // Biblioteca necessária para utilizar a função setlocale, para aceitar acentuações e caracteres especiais
#include <cstdlib> // Biblioteca necessária para utilizar a função rand, onde será gerado o número pseudoaleatório
#include <ctime> // Biblioteca necessária para utilizar a função srand

using namespace std;

int dado(){
	
	// Inicializa o valor da "semente" de acordo com o tempo atual cada vez que o programa é executado no rand (pseudoaleatório)
	srand(time(NULL));
	
	// Gera um número aleatório entre 1 e 6 através do rand (pseudoaleatório)
	return(1 + rand () % 6);
	
	}
	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numeroSorteado = 0;
	
	cout << "---------- Sorteio de um número aleatório entre 1 e 6 ----------\n";
	
	numeroSorteado = dado();
	cout << "\nO número sorteado foi: " << numeroSorteado << endl;
	
	return 0;
}

