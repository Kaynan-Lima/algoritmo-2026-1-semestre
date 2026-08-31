/*aula 3 */
/* faça um algoritmo que leia a nota de um aluno e exiba o conceito,
   conforme as regras a seguir:
   de 0.0 a 2.9 - conceito E
   de 3.0 a 4.9 - conceito D
   de 5.0 a 6.9 - conceito C
   de 7.0 a 8.9 - conceito B
   de 9.0 a 10 - conceito E
   
   obs: todos os exercicios devem ser resolvidos utilizando operadores logicos
   */

#include<iostream>
using namespace std;
int main()
{
    float nota_final_do_aluno;
    char op;
do{
    do{    
    cout<<"\ndigite a nota do aluno ";
    cin>> nota_final_do_aluno;
    
    if (nota_final_do_aluno < 0.0 || nota_final_do_aluno > 10.0){
        cout<<"erro! digite apenas notas de 0 a 10";
    }
    
    } while (nota_final_do_aluno < 0.0 || nota_final_do_aluno > 10.0 );
    
        if(nota_final_do_aluno >= 0.0 && nota_final_do_aluno <= 2.99){
         cout<< "sua clasificao foi E";
            
        } else if(nota_final_do_aluno >= 3.0 && nota_final_do_aluno <= 4.9){
            cout<< "sua classificao foi D";
            
        } else if(nota_final_do_aluno >= 5.0 && nota_final_do_aluno <= 6.9){
            cout<< "sua classificao foi C";
            
        } else if(nota_final_do_aluno >= 7.0 && nota_final_do_aluno <= 8.9){
            cout<< "sua classificao foi B";
            
        } else if(nota_final_do_aluno >= 9.0 && nota_final_do_aluno <= 10.0){
            cout<< "sua classificao foi A, PARABENS!!!!";
        }
        cout<<  "\ndeseja continuar (s/n)? ";
        cin>>op;
        
        }while (op=='s' || op=='S');
    

    return 0;
}
