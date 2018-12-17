#include <iostream>
#include <string>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, "portuguese");
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/*Se a senha digitada pelo usu�rio e armazenada na vari�vel SenhaDigitada for igual a senha de acesso as instru��es ap�s o if ser�o executadas pois a condi��o foi verdadeira true 1 */
	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//atrav�s de outra vari�vel booleana bAcesso
		bAcesso = true;
		//system("PAUSE");
	}
	/*Se a condi��o for falsa ent�o as isntru��es do else ser�o executadas*/
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0); //sai do programa, for�a o fechamento da aplica��o
	}
	bFezSol = false; 
	bCarroPronto = false; 
	bSalarioDepositado = false;
	//Aqui podemos deixar apenas a vari�vel
	//N�o � necess�rio == pois ser� buscado o valor de bAcesso e ficar� assim:
	//if (true) ou if(false)
	if (bAcesso)
	{
		if (bFezSol || bCarroPronto || bSalarioDepositado)
		{
			std::cout << "\nVai dar Praia!!!" << std::endl;
		}
		//Aqui ser� executado se a condi��o do if falhar e se
		//bSalarioDepositado for false
		//Da mesma forma aqui
		//Como bSalarioDeposito � falso !(n�o) Falso dar� True e ai entra no else if
		else if (!bSalarioDepositado)
		{
			std::cout << "N�o vai d� Praia, o sal�rio tamb�m n�o foi Depositado" << "\n";
		}
	}

	system("PAUSE");
	
}