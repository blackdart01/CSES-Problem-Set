#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter number n"<<endl;
    cin>>n;
    cout<<n<<" ";
    for( ; ;){
        if(n==1){
            break;
        }
        else if(n%2==0){
            n=n/2;
        }else{
            n=n*3+1;
        }
        cout<<n<<" ";
            }
return 0;
}
