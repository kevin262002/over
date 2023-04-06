#include<iostream>

using namespace std;

class Cricket{
	
	public:
		void getTotalOvers(){
			
			cout<<"Cricket Overs"<<endl;
		}	
};

class T20 : public Cricket{
	
	public:
		void getTotalOvers(){
			
			cout<<"T20 : 20 Overs"<<endl;
		}
};

class Test : public Cricket{
	
	public:
		void getTotalOvers(){
			
			cout<<"Test : 450 Overs"<<endl;
		}
};

int main(){
	
	T20 obj1;
	Test obj2;
	
	obj1.Cricket::getTotalOvers();
	obj1.getTotalOvers();
	
	obj2.Cricket::getTotalOvers();
	obj2.getTotalOvers();
		
	return 0;
}
