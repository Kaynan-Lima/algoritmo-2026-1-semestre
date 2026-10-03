#include<iostream>
using namespace std;

int main(){
	int tipo;
	
	do{
	cout<<"digite o codigo de acesso: ";
	cin>>tipo;
	
	if(tipo != 145 && tipo != 235 && tipo != 322){
		cout<<"codigo errado\n";
	}
	
	}while(tipo != 145 && tipo != 235 && tipo != 322);

	
	switch (tipo){
		
		case 145:
			
			cout<<"tipo de acesso: administrador ";
			cout<<"\nacesso total";
			
		break;
		
		 case 235:
			
			cout<<"tipo de acesso: funcionario ";
			cout<<"\nacesso basico";
			
		break;
		
		 case 322:
			
			cout<<"tipo de acesso: visitante ";
			cout<<"\nacesso restrito";
	}
	
	return 0;
}
