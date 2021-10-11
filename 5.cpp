#include <iostream>
#include <clocale> // Biblioteca necess�ria para utilizar a fun��o setlocale, para aceitar acentua��es e caracteres especiais
#include <cstdlib> // Biblioteca necess�ria para utilizar a fun��o rand, onde ser� gerado o n�mero pseudoaleat�rio
#include <ctime> // Biblioteca necess�ria para utilizar a fun��o srand

using namespace std;

int dado(){
	
	// Inicializa o valor da "semente" de acordo com o tempo atual cada vez que o programa � executado no rand (pseudoaleat�rio)
	srand(time(NULL));
	
	// Gera um n�mero aleat�rio entre 1 e 6 atrav�s do rand (pseudoaleat�rio)
	return(1 + rand () % 6);
	
	}
	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numeroSorteado = 0;
	
	cout << "---------- Sorteio de um n�mero aleat�rio entre 1 e 6 ----------\n";
	
	numeroSorteado = dado();
	cout << "\nO n�mero sorteado foi: " << numeroSorteado << endl;
	
	return 0;
}

