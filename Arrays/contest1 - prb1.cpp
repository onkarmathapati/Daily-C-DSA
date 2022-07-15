#include<iostream>
using namespace std;

int main(){
          int T;
          cin>>T;
          while(T--){
                    int N;
                    cin>>N;
                    string S;
                    cin>>S;
                    string out = "";
                    for(int i = 0; i<N; i+=2){
                          if(S.at(i) == '0' && S.at(i+1) == '0'){
                             out+="A";

                          }
                          else if(S.at(i) == '0' && S.at(i+1) == '1'){
                              out+="T";
                          }
                          else if(S.at(i) == '1' && S.at(i+1) == '0'){
                              out+="C";
                          }
                          else if(S.at(i) == '1' && S.at(i+1) == '1'){
                              out+="G";
                          }
                          
                    }
                    cout<<out<<endl;


          }
          return 0;
}