#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define rep(i,j,k) for (int i = (int)j; i < (int)k; i++)
#define pb(a) push_back(a)
#define vi vector<int>

vi divs(int n) {
   vi tmp;
   int c = 0;
   rep (i,2,(int)sqrt(n)) {
       if (n % i == 0) { tmp.pb(i); c++; }
       if (c == 5) break;
   }
   return tmp;
}

int main () {
    
    bool solved = false;
    
    for (int i = 1000000; solved == false; i+=2) {
        int sum = 0;
        vi d = divs(i);
        rep (j,0,d.size()) {
            sum += d[j]; 
        }
        if (sum == 2012) { cout << i; solved = true; }
        if (i == 10000000) break;
    }
    
    system("pause");
}
