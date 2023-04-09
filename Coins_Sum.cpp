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

const int N = 1100 ;
int dp[N] ;

int solve(int n){
	if(n < 0)
		return 0 ;
	if(n == 0)
		return 1 ;
	if(dp[n] != -1)
		dp[n];
	return dp[n] = solve(n-1) + solve(n-3) + solve(n-5) ;
}

int main(){
	int n ;cin >> n;
	cout << solve(n) << endl ;
}
// time C = O(n) ;
