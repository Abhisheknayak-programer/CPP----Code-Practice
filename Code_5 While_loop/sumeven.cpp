#include<iostream>
using namespace std;

int main(){
    int num,sum = 0,i=1;
    cout << "Enter the Number " << ends;
    cin>>num;   

    while(i <= num){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }

    cout << "Sum of all the Number is " << sum << endl;

}