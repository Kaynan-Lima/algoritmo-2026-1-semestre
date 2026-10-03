#include<iostream>
using namespace std;

int main(){
	
	float IMC, P, A;
	
	cout<<"informa seu peso em kg: ";
	cin>>P;
	cout<<"informe sua altura em metros: ";
	cin>>A;
	
	IMC = P / (A * A);
	cout<<"seu IMC e: "<< IMC;
	
	if (IMC < 18.5){
		cout<<"\nAbaixo do peso";
	}else if (IMC >= 18.5 && IMC <= 24.9){
		cout<<"\npeso normal";
	}else if (IMC >= 25 && IMC < 29.9 ){
		cout<<"\nsobrepeso";
	}else if (IMC >= 30){
		cout<<"\nobesidade";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
