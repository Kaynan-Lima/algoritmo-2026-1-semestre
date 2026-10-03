#include<iostream>
using namespace std;

int main(){
	char tipo;
    float P1, P2, L1, L2, FP, Media1, Media2, Media3, MediaF;
	
	do{
		cout<<"digite R para aluno regular ou E para aluno em regime especial: ";
		cin>>tipo;
		if (tipo!='R'&& tipo!='r'&& tipo!='E'&& tipo!='e'){
			cout<<"apenas R para regular ou E para especial";
		}
	}while(tipo!='R'&& tipo!='r'&& tipo!='E'&& tipo!='e');
	
	do{
	cout<<"informe a nota da P1: ";
	cin>>P1;
	cout<<"informe a nota da P2: ";
	cin>>P2;
	
	if (P1<0.0 && P1>10.0 && P2<0.0 && P2>10.0){
		cout<<"informe valores de 0 a 10";
	}
	
}while (P1<0.0 && P1>10.0 && P2<0.0 && P2>10.0);
	

		switch (tipo){
		case 'R': case'r':
			
			do{
			cout<<"informe a nota da lista (L1): ";
			cin>>L1;
			cout<<"informe a nota da lista (L2): ";
			cin>>L2;
			
			if (L1<0.0 && L1>10.0 && L2<0.0 && L2>10.0){
		cout<<"informe valores de 0 a 10";
}
	
}while (P1<0.0 && P1>10.0 && P2<0.0 && P2>10.0);
			
			do{
			cout<<"informe a frequencia do aluno: ";
			cin>>FP;
			
				if (FP<0.0 && FP>10.0){
		cout<<"informe uma frequencia de 0 a 10";
	}
	
}while (FP<0 && FP>100);
			
			
		Media1 = (((P1 + P2) /2) *0.5);
		Media2 = (((L1 + L2) /2) *0.4);
		Media3 = (FP * 0.1);  
		MediaF = Media1 + Media2 + Media3;
		
	cout<<"sua media final: "<< MediaF;

	break;
		case 'E': case'e':
		
		MediaF = (P1 + P2)/2.0;
}
	if(MediaF>=6.0){
		cout<<"\nAprovado";
		
	}else if (MediaF>=2.0 && MediaF<=5.9){
		cout<<"\nsubstitutiva";
		
	}else if (MediaF<2.0){
		cout<<"\nreprovado";
	}
	
	return 0;
	}
	
	



