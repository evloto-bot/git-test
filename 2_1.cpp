#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
    int N;
    int x;
    int i,k,lim;
    bool prim = false;
    cin >> N;
    int *p = new int[N+1];
    p[1] = 2;
    cout << p[1]<<endl;
    x = 1; lim = 1;
    for(i = 2; i <= N; i++){
         do{
             x += 2;
             if( lim * lim < x)
                 lim += 1;
             k = 2;
             prim = true;
             while(prim && k < lim){
                  prim = (x % p[k]) != 0;
                  k +=1;}
         }
         while(!prim);
         p[i] = x;
         cout << x << endl;
    }
    delete[] p;
    return 0;   
}
