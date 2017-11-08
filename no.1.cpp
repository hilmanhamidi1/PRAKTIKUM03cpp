#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main(){
 int x,y,z;
 cout<<"input nilai x=";
 cin>>x;
 
 cout<<"input nilai y=";
 cin>>y;
 
 
 if(x>y){
  z=y-x;
  cout<<abs(z)<<endl;
  cout<<"hasil positif";
 }
 
 else if(y>x){
  z=x-y;
  cout<<abs(z)<<endl;
  cout<<"hasil positif";
 }
 
}
