#include <iostream>
using namespace std;

int main(){

int a;
cin >> a;
int array[a];


for(int i=0;i<a;i++)
    cin>>array[i];

int n; 
cin >>n;
bool flag =false;
for(int i=0;i<a;i++){
  if (array[i] ==n){
    flag = true;
    break;
  }

}
if(flag)
cout<<"ok";
else
cout<<"?";
return 0;













}
