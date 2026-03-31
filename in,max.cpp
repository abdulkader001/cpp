#include <iostream>
using namespace std;

int main(){

int a;
cin >> a;
int array[a];


for(int i=0;i<a;i++)
    cin>>array[i];

int min = array[0];
int max = array[0];

/*int n; 
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
cout<<"?";*/







for(int i=0;i<a;i++){
    if(array[i]<min){
        min=array[i];
    }
}
for(int i=0;i<a;i++){
    if(array[i]>max){
        max = array[i];
    }
}

cout << min;
cout << endl;
cout << max;
return 0;
}