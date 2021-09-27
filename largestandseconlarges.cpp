#include<bits/stdc++.h>
using namespace std;
int largest(int num){
	int Largest= 0,Sec_Largest=0,reminder;
while (num > 0)
    {
reminder = num % 10;
if (Largest < reminder)
 {
     Sec_Largest=Largest;
       Largest = reminder;
 }
 else if(reminder>Sec_Largest && reminder!=Largest)
        Sec_Largest=reminder;
num = num / 10;
    }
    return Largest;
}
int secondlargest(int num){
	int Largest= 0,Sec_Largest=0,reminder;
while (num > 0)
    {
reminder = num % 10;
if (Largest < reminder)
 {
     Sec_Largest=Largest;
       Largest = reminder;
 }
 else if(reminder>Sec_Largest && reminder!=Largest)
        Sec_Largest=reminder;
num = num / 10;
    }
    return Sec_Largest;
}
int main(){
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	cout<<(largest(num1)+largest(num2)+largest(num3))-(secondlargest(num1)+secondlargest(num2)+secondlargest(num3));

  	return 0;
}