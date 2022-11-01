#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void suma(int n,int &s){
    s=0;
    int v[10];
    while(n){
        v[n%10]=1;
        n/=10;
    }
    for(int i=1;i<=9;i+=2)
        if(v[i])
            s+=i;


}


int main()
{
    ifstream f("bac.txt");
    int k;
    f>>k;
    int x,c=0,cmax=0,a=0;
    while(f>>x){

        if(x%k==0){
            c++;
        }
        else{
            if(c>cmax){
                cmax=c;
                a=1;
            }
            else
                if(c==cmax)
                    a++;
            c=0;

        }


    }
    if(c>cmax){
                cmax=c;
                a=1;
            }
            else
                if(c==cmax)
                    a++;
            c=0;

    cout<<cmax<<" "<<a;



}
