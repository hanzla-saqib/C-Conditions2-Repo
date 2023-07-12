#include<iostream>

using namespace std;

int main(){
	
	float mass,gravity,weight;
	
	cout<<"Enter the mass and gravity\n";
	cin>>mass>>gravity;
	
	weight = mass * gravity;//2 * 10 = 20
	
	cout<<"The weight is "<<weight<<"kg";
}
