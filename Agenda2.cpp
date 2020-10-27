
// André Furlan
#include <iostream>

int main(int argc, char **argv)
{
	int dia = 0; //Precisa inserir =0?
	int mes = 0; //Sem =0 tmbem fuciona?
	int ano = 0;
	char *descricao = new char[100];
//Precisa inserir =newchar[100] - sem funciona?

	std::cout << "Informe o dia:" << std::endl;
	std::cin >> dia;

	std::cout << "Informe o mes:" << std::endl;
	std::cin >> mes;

	std::cout << "Informe o ano:" << std::endl;
	std::cin >> ano;

	std::cout << "Descreva o compromisso:" << std::endl;
	std::cin >> descricao;

	// Exibe apenas o dia
	std::cout << dia << std::endl;

	// Exibe o dia, mes e ano separados por "-"
	std::cout << dia << "-" << mes << "-" << ano << std::endl;

	// Exibe o dia, mes e ano separados por "-" mais a descricao
	std::cout << dia << "-" << mes << "-" << ano << ": " << descricao << std::endl;
	//Na execução pq os dados estão para ser inserido na proxima linha e não na frente da frase?
}
