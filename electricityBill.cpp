#include<iostream>
using namespace std;
int main(){
	int units; cout<<"Enter number of units :: "; cin>>units;
	float amount;
	
	if(units>=250){
		amount +=(units-250)*1.5; // 150
		units -= (units-250);
	}
	if(units<=250){
		amount+=100*1.20;
		units-=100;
	}
	if(units<=150){
		amount+=100*0.75;
		units-=100;
	}
	if(units<=50){
		amount+=50*0.5;
		units-=50;
	}
	
	float temp = amount * (20.0/100.0);
	
	cout<<amount + temp;
}