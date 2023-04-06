#include<iostream>

using namespace std;

class A{
	
	public:
		
		void sum(int a , int b){
			
			cout<<"Division : "<<a/b<<endl;
		} 
		void sum(int a,int b,int c){
			
			cout<<"Subtraction : "<<a-b-c<<endl;
		}
		void sum(int a,int b,int c,int d){
			
			cout<<"Multiplication : "<<a*b*c*d<<endl;
		}
		void sum(int a,int b,int c,int d,int e){
			
			cout<<"Addition : "<<a+b+c+d+e<<endl;
		}	
};

class B : public A{
	
	public:
		
		void calculate(){
			
			sum(50,2);
			sum(100,30,20);
			sum(1,2,3,4);
			sum(50,50,50,50,50);
		}	
};

int main(){
	
	B obj;
	
	obj.calculate();

	return 0;
}
