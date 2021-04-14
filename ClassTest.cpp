#include <iostream>
using namespace std;

class A{
	public:
		//costruttore senza parametri
		A(){
			this->pippo=10;
			this->paperino=20;
			this->pluto=30;
		}
		//costruttore con parametri
		A(int _p1, int _p2, int _p3){
			pippo=_p1;
			paperino=_p2;
			pluto=_p3;
		}
		int pippo;
		void print(){
			cout<<"Classe A"<<endl;
			cout<<"La somma e' "<<somma()<<endl;
		}
	protected:
		int pluto;
		int somma(){
			return pippo+paperino+pluto;
		}
	private:
		int paperino;
};

class B:public A{
	public:
		B():A(){}
		void print(){
			cout<<"Sono la classe B"<<endl;	
			cout<<"La somma e' "<<somma()<<endl;		
		}
};

int main(){	
	A objA1;
	A objA2(1,2,3);
	B objB;

	objA1.print();
	objA2.print();
	objB.print();
}
