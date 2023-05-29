#include <iostream>
using namespace std;
// find maximum of three

int findMax(int num1, int num2 ,int num3){
  if(num1>num2 && num1>num3){
    // cout<<num1<<" is greatest among three:-";
    return num1;
  }
  else if(num2>num1 && num2>num3){
    // cout<<num2<<" is greatest among three:-";
    return num2;
  }
  else{ return num3;}
}


int main(){
  int a,b,c;
  cout<<"Enter the value of a, b, c:-";
  cin>>a>>b>>c;

  int result=findMax(a,b,c);   
  cout<<"Greatest number is:-"<<result;
  return 0;
}