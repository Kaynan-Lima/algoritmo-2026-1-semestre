#include <iostream>
using namespace std;
int main(){
	char tipo;
	float largura, comprimento, raio, area;
	
	do{
	cout<<"sera um calculo de retangulo(R) ou circulo(C): ";
	cin>>tipo;
	
	if(tipo!='R'&& tipo!='r'&& tipo!='C'&& tipo!='c'){
		cout<<"digite apenas R ou C.";
		
	}
	}while(tipo!='R'&& tipo!='r'&& tipo!='C'&& tipo!='c');
	
	switch (tipo){
	
	case 'R': case 'r':
	
	do{
	cout << "Digite a largura do retangulo: ";
	cin >> largura;
	cout << "Digite o comprimento do retangulo: ";
	cin >> comprimento;
	area = largura * comprimento;
	
	if(largura <= 0 || comprimento <= 0){
		cout << "Valores invalidos! Digite novamente.\n";
	}else{
		cout << "A area do retangulo e: " << area;
	}

}while(largura <= 0 || comprimento <= 0);
	break;

	case 'C': case 'c':
		do{
		
	cout << "Digite a raio do circulo: ";
	cin >> raio;
	area = 3.14 * (raio * raio);

	
	if(raio <= 0) {
		cout << "Valor invalido! Digite novamente.";
	}else{
		cout << "A area do circulo e: " << area;
	}

}while(raio <= 0);
}
}










































