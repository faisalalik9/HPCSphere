#include<iostream>
using namespace std;


int gcd(int a, int b){ 
            if (b == 0){
                return a; 
            } 
                 
        return gcd(b, a % b); 
    } 
  
   
    int lcm(int a, int b) { 
        return (a / gcd(a, b)) * b; 

    }


int main(){

    int M,N;

    cout<<"Enter the first number"<<endl;
    cin>>M;
    cout<<"Enter the second number"<<endl;
    cin>>N;


    int temp = 1;
    
 

    for(int i=M; i<=N; i++){
        temp = lcm(temp, i);
    }

    cout<<temp;

    return 0;

}




