
#include<iostream>
using namespace std;

class Pessoa {
	protected:
	   string cpf, nome;
		    
		int idade; 
		  
	public:
	
	Pessoa() {
		nome = "Arthur";
		cpf = "12233554443";                  
		idade = 15;                 //construtor 
		
		
		
		
     }
	 string VerificarFaixaEtaria() {
		string FaixaEtaria;
		if (idade <= 12){
			FaixaEtaria = "crianca";
		}
		if (idade >=13 && idade <18) {
			FaixaEtaria = "jovem";
		}
		if (idade >=18) {
			FaixaEtaria = "adulto";
		}
		
	cout<<"\n a pessoa eh:  \n"<<FaixaEtaria<<endl;
	return FaixaEtaria;	
		
	}
		
};
	class Funcionario: public Pessoa {
	 private:
	 double salario;
	 
	 public:
	
	
	 Funcionario() {	
      nome = "lucas";
      salario = 1200;       //construtor
	  cpf = "2222222222";
	 
      };
     
       void IncrementoSalario() {
     	 if (salario < 2000) {
     	 salario = salario+((30*salario)/100);
     		
     		
		 }
		 if (salario >= 2000) {	 	
		 salario = salario+((25*salario)/100);
		 }
		 		 
	}
    	void CadastrarFuncionario(){
		
		
		cout<<"\n Digite o nome do Funcionario e idade \n";
		cin>>nome;
		while (nome == "") {
		cout<<"\n Digite o nome!!! \n";
		cin>>nome;
		}
		
        cin>>idade;
        while (idade < 1 || idade > 103) {
		
		cout<<"\n Digite uma idade valida \n";
		
			
			
			
			cin>>idade;	
			
			
		}
	
		cout<<"\n Digite o Cpf do funcionario \n";
		
		cin>>cpf;
		while (cpf.empty()) {
	     
	     cout<<"\n ainda não digitou!! \n";
	     cin>>cpf;
	
		}
			
		
		cout<<"\n Digite o salario do funcionario \n";
		
		cin>>salario;
		while (salario <= 0) {
			cout<<"\n Digite um salario valido \n";
			cin>>salario;
		}
		
	}
		void Mostrar ()
	{
		cout<<"\n DADOS DO funcionario: \n\n";
		cout<<"\n Nome: "<<nome<<endl;
		cout<<"\n Idade: "<<idade<<endl;
		cout<<"\n Cpf: "<<cpf<<endl;
	    cout<<"\n salario: "<<salario<<endl;
		
		
		
		
	}
	
     	
     	
     };
     	
	  //verificar
	 	
	 	
	 	
	 	
	
	
	
	
	

     

    main(){
    Funcionario f;
    
	f.CadastrarFuncionario();
	cout<<"\n iNCREMENTANDO SALARIO.. DADOS ANTERIORES =  \n\n";
    f.Mostrar();	
    f.VerificarFaixaEtaria();
    f.IncrementoSalario();
    cout<<"\n iNCREMENTANDO SALARIO.. DADOS ATUALIZADOS =  \n\n";
    f.Mostrar();
	
    	
	}
    
