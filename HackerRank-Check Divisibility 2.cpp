#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* 1 2 3 4 5
 * 6 4 5
 * 24 5
 * 120
 *     15 /
 * -------
 *  8*/
bool check(int n){
    if(n%2==0)
        return false ;
    int limit = (int)sqrt(n+1.0);
    bool flag = true;
    for(int i = 3; i <= limit ;  i+=2)
            if(n%i==0){
                flag = false;
                break ;
            }
    return flag ;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    int tcase;
    cin >> tcase;
    while(tcase--){
    long long int n;
    scanf("%lld",&n);
    puts(check(n+1)?"NO" :"YES");
    }
    return 0;
}
