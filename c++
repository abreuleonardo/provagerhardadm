#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
	system("mkdir DOC1");
	system("mkdir DOCBKP");
	
	std::ofstream arquivo("DOC1/texto.txt");
	arquivo << "teste do arquivo texto.txt" << std::endl;
	arquivo.close();
	
	int escolha;
	
	do {
		std::cout << "Digite 1 - Abrir calculadora" << std::endl;
		std::cout << "Digite 2 - Abrir o bloco de notas" << std::endl;
		std::cout << "Digite 3 - Fazer backup" << std::endl;
		std::cout << "Digite 0 - Sair" << std::endl;
		std::cin >> escolha;
		
		switch (escolha) {
			case 1:
				system("calc");
				break;
			case 2:
				system("notepad");
				break;
			case 3: // backup
				system("xcopy /s /e /i DOC1 DOCBKP");
				std::cout << "Backup realizado!" << std::endl;
				break;
			case 0:
				std::cout << "Saindo do programa." << std::endl;
				break;
			default:
				std::cout << "Escolha inválida. Tente novamente." << std::endl;
		}
			
	} while (escolha != 0);
	
	return 0;
}
