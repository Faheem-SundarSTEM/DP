/*
    Author  ---> Faheem khan
    find for Fibonocci numbers . 
*/
// # include <bits/stdc++.h>
# include <iostream>
# include <vector>  
# include <algorithm>
# include <cmath>
# include <set>
# include <map>
# include <string>
# include <climits>
using namespace std ;
# define int long long
# define all(x) (x).begin(),(x).end()
# define f_Actoral ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i<<' ';}cout<<endl ;
// M_u_h_a_m_m_a_d  S.A.W  ...</>... 
// a == 97 ; 0 == 48  ; A  == 65 ;

//   DP ...</>....

const int N = 1001 ;
int fib[N] ;
void print(){
	for(int i = 0 ; i < 20 ;i++){
		cout << fib[i] << ' ';
	}cout << endl ;
} 
int main(){
	fib[0] = 0 ;
	fib[1] = 1 ;
	for(int i = 2 ; i < 20 ;i++){
		fib[i] = fib[i-1] + fib[i-2] ;
	}
	print() ;
}
