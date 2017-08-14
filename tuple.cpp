#include<bits/stdc++.h>

using namespace std;

pair<int ,pair< int , int > > divide (int dividend, int divisor)
{
	return make_pair(dividend/divisor,make_pair(dividend%divisor,divisor));
}
int main()
{
	pair<int ,pair< int, int > > ans= divide(10,3);
	cout<<ans.first<<" "<<ans.second.first<<ans.second.second<<endl;
	return 0;
}
