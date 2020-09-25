#include<bits/stdc++.h>
using namespace std;
float cmp(pair<int, float>a, pair<int, float>b){
	return a.second>b.second;
}
int main()
{
	vector<pair<int,float>> vec;
	int n;
	cout<<"Enter the number of object: ";
	cin>>n;
	for (int i = 0; i<n; i++){
		int profit, weight;
		float pbyw;
		cin>>weight>>profit;
		pbyw = float(profit)/float(weight);
		vec.push_back(make_pair(weight, pbyw));
	}
	cout<<endl;	
	sort(vec.begin(), vec.end(), cmp);
	int bag;
	cout<<"Enter the size of bag: ";
	cin>>bag;
	float maxprofit = 0;
	while(bag > 0){
		for(auto it : vec){
			if(bag > it.first){
				maxprofit += float(it.first) * it.second;
				bag -= it.first;
			}
			else{
				maxprofit += (float(bag)/float(it.first))*(float(it.first)*it.second);
				bag -= it.first;
				break;
			}
		}
	}			
	cout<<endl;	
	cout<<"Maximum profit is: "<<maxprofit<<endl;
}
	
	
