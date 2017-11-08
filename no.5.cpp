#include<iostream>
using namespace std;
int main(){

float weight,underwight,normal,overweight;
	int height;
	
	cout<<"silahkan masukan tinggi badan anda dalam cm:"<<endl;
	cin>>height;
	cout<<"silahkan masukan berat badan anda dalam kg:"<<endl;
	cin>>weight;
	
	if(weight<height/2.5)
	cout<<"result:underweight"<<endl;
	else if(height/2.5<=weight<=height/2.3)
	cout<<"result:normal"<<endl;
	else if(height/2.3<weight)
	cout<<"result:overweight"<<endl;
	
	return 0;
}
