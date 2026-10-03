#include<iostream>
using namespace std;

int main(){
	char FK, opcao, loop;
	float Cel, Fa, Ke;
	
	 do{
	 
	 	
	cout<<"digite quantos graus em celsius: ";
	cin>>Cel;
	
	do{
	cout<<"gostaria de converter para kelvin(K) ou fahrenheit(F)? ";
	cin>>FK;
	
	if(FK!='F' && FK!='f' && FK!='K' && FK!='k'){
		cout<<"digite apenas K ou F.";
	}
	}while(FK!='F' && FK!='f' && FK!='K' && FK!='k');
	

	
	switch (FK){
	
	
	case 'F' : case 'f':
		
		Fa = (Cel * 1.8) + 32;
		cout<<"Convertendo em fahrenheit ficou: "<< Fa;
		
		do{
		
		cout<<"\ngostaria de converter para kelvin tambem?(s/n) ";
		cin>>opcao;
		
		if(opcao =='S' || opcao=='s'){
		
		Ke = Cel + 273.15;
		cout<<"Convertendo em kelvin ficou: "<< Ke;
		
		}else{
		cout<<"\ntudo bem";
	}
		
		if (opcao!='S' && opcao!='s' && opcao!='N' && opcao!='n'){
			cout<<"apenas sim ou não (s\n).";
		}
	}while(opcao!='S' && opcao!='s' && opcao!='N' && opcao!='n');
		
		break;
		
		case 'K' : case 'k':
			
		Ke = Cel + 273.15;
		cout<<"Convertendo em Kelvin ficou: "<< Ke;
		
		do{
		
		cout<<"\ngostaria de converter para fahrenheit tambem?(s/n) ";
		cin>>opcao;
		
		if(opcao =='S' || opcao=='s'){
		
			Fa = (Cel * 1.8) + 32;
			cout<<"Convertendo em fahrenheit ficou: "<< Fa;
	}else{
		cout<<"\ntudo bem";
	}
		
		if (opcao!='S' && opcao!='s' && opcao!='N' && opcao!='n'){
			cout<<"apenas sim ou não (s\n).";
		}
		}while(opcao!='S' && opcao!='s' && opcao!='N' && opcao!='n');
			
			
	}
	
	
	cout<<"\ngostaria de fazer outra convercao?(s/n) ";
	cin>>loop;

	}while(loop =='S'||loop =='s');
	
	
	return 0;

	}
	

