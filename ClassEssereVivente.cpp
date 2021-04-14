#include <iostream>
#include <string>
using namespace std;

class EssereVivente{
	private:
		string nome;
	public:
		int eta;
		EssereVivente(int _eta, string _nome, string _regno, string _specie){
			this->eta=_eta;
			this->nome=_nome;
			this->regno=_regno;
			this->specie=_specie;
		}
		void print(){
			cout<<"Sono un'istanza della classe EssereVivente"<<endl;
			cout<<"\tNome: "<<this->nome<<endl;
			cout<<"\tRegno: "<<this->regno<<endl;
			cout<<"\tSpecie: "<<this->specie<<endl;
			cout<<"\tEta': "<<this->eta<<endl;
			cout<<"-------------------------------------------"<<endl;
		}
		string getNome(){					//per ritornare un private
			return this->nome;
		}
	protected:
		string regno, specie;
};

class Animale:protected EssereVivente{
	public:
		Animale(int eta, string nome, string specie):EssereVivente(eta,nome,"Animale",specie){}
		void print(){
			cout<<"Sono un'istanza della classe Animale e appartengo al regno "<<regno<<endl;
			cout<<"\tNome: "<<getNome()<<endl;
			cout<<"\tRegno: "<<this->regno<<endl;
			cout<<"\tSpecie: "<<this->specie<<endl;
			cout<<"\tEta': "<<this->eta<<endl;
			cout<<"--------------------------------------------------------------------"<<endl;
		}
};

class Mammifero:public Animale{
	public:
		Mammifero(int eta, string nome) : Animale(eta, nome, "Mammifero"){}
		void print(){
			cout<<"Sono un'istanza della classe Mammifero e appartengo al regno "<<regno<<endl;
			cout<<"\tNome: "<<getNome()<<endl;
			cout<<"\tRegno: "<<regno<<endl;
			cout<<"\tSpecie: "<<this->specie<<endl;
			cout<<"\tEta': "<<this->eta<<endl;
			cout<<"--------------------------------------------------------------------"<<endl;
		}
};

int main(){
	EssereVivente ev(10,"Pippo","Animale","Cane");
	ev.print();
	Animale a1(11,"Paperino","Papero");
	a1.print();
	Mammifero m1(18,"Topolino");
	m1.print();
}
