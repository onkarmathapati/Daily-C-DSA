#include<iostream>
using namespace std;

int main() {
          int n;
          cin>>n;
          
          bool flag = 0;

          for(int i =2; i<sqrt(n); i++){
                    if(n%2 == 0){
                              cout<<"not a prime number"<<endl;
                              flag = 1;
                              break;
                    }
                    

          }
                    if(flag == 0){
                              cout<<"it is a prime number"<endl;
                              
                    }
          return 0;
}