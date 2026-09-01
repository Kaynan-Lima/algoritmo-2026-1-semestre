/* faca um algoritmo que receba via teclado a operação (+,-,* e /)e dois numeros
Calcule e imprima o resultado em video

Observação sobre o uso do char
char operacao;
cin>>operacao;
if (operação == '+'){
r=n1+n2;
}...
*/

#include<iostream>
using namespace std;
int main()
{
	float n1, n2, resultado;
	char op, opcao;
	
	
	
	
	cout<< "digite um numero ";
	cin>>n1;
	cout<< "digite outro numero ";
	cin>>n2;
	
	do{
		
		cout<< "\ndigite a operacao ";
		cin>> op;
	
     }while (op != '+' && op != '-' && op != '*' && op != '/');
	
		if (op == '+'){
			resultado = n1 + n2;
		
	}	else if (op == '-'){
			resultado = n1 - n2;
		
	} 	else if (op == '*'){
			resultado = n1 * n2;
		
    }	else if (op == '*'){
			resultado = n1 * n2;

    }	else if (op == '/')
			resultado = n1 / n2;
	
	cout<< "o resultado: " << resultado;
	
	do{
	cout<<"\ndeseja continuar? (s/n) " ;
	cin>> opcao;

}while (opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n');




	return 0;
	
}
