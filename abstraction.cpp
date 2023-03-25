#include<iostream>
using namespace std;

class A {
	int a,b;
	public : 
		void input (int a,int b) {
			this->a=a;
			this->b=b;
		}
		 virtual void output ()=0; 
			
};

class B :protected A
{
	int a,b;
		public : 
		void input (A &a1) {
			cout<<"Enter value of a : ";
			cin>>a;
			cout<<"Enter value of b : ";
			cin>>b;
			a1.input(a,b);
		}
		virtual void output () {
			cout<<"Enter value of a : "<<a;
			cout<<"Enter value of b : "<<b;
			
		}
	
};
class C :public B
{
	int a,b;
		public : 
		void input () {
			cout<<"Enter value of a : ";
			cin>>a;
			cout<<"Enter value of b : ";
			cin>>b;
		}
		 void output () {
			cout<<"Enter value of a : "<<a;
			cout<<"Enter value of b : "<<b;
			
		}
	
};
main() {
	int a,b;
		cout<<"Enter value of a : ";
		cin>>a;
		cout<<"Enter value of b : ";
		cin>>b;
	C b1;
	b1.input();
	b1.input();
	b1.B ::output();
	b1.output();
	b1.output();
	
}
