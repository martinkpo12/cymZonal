#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

#define rep(i,j,k) for (int i = (int)j; i < (int)k; i++)

bool isprime(int n) {
     rep (i,2,(int)sqrt(n)+1) {
         if (n % i == 0) return false;
     }
     return true;
}

int main () {
    
    bool solved = false;
    
    for (int i = 10710; solved == false; i++) {
        
        if (isprime(i) && isprime(i+2012)) {
           cout << i << endl;
           cout << i+2012;
           solved = true;
        }
    }
    
    system("pause");
}
