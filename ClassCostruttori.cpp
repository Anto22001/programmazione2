#include <iostream>
using namespace std;

class A{
	private:
		int x;
		float y;
	public:
		/*A(int x, float y){								//1° modo di inizializzare
			this->x=x;	
			this->y=y;
		}*/
		A(int _x, float _y):x(_x),y(_y){}					//2° modo di inizializzare
		A(int _x):A(_x,0.0f){}								//3° modo di inizializzare (1 valore solo e l'altro a 0)
		A(float _y):A(0,_y){}
		void print(){
			cout<<"Classe A"<<endl;
			cout<<"x = "<<x<<", y = "<<y<<endl;
		}
};

int main(){
	A a1(1,1.0f);
	a1.print();
	A a2(1);
	a2.print();
	A a3(3.1f);
	a3.print();
}
