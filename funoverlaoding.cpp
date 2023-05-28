#include<iostream>

using namespace std;

class Display{
	public:
		void print(int x){
			cout<<"integer value is :"<<x<<endl;
	}
	
			void print(float x){
				cout<<"float value is :"<<x<<endl;
			}
		};

int main(){
	
	Display obj5;
	obj5.print(6);
	obj5.print(6.7f);
}
