#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	vector<int>b;
vector<int> a;
for (int i=0;i<10;i++){
	cout<<"enter the number";
	cin>>x;
		a.push_back(x);
	}

	
	cout<<a.size()<<endl;
	a.push_back(10);
	cout<<a.size()<<endl;
	a.pop_back();
cout<<a.size()<<endl;
	sort(a.begin(),a.end());
	for (int i=0;i<a.size();i++){
		cout<<a[i]<<endl;
	}
	
	}

	
//	cout<<a.size()<<endl;
//	a.push_back(10);
	//cout<<a.size()<<endl;
	//a.pop_back();
//	cout<<a.size()<<endl;
	//sort(a.begin(),a.end());
	//cout<<"Your short value is \n";
	//for (int i=0;i<a.size();i++){
//		cout<<a[i]<<endl;
//s	}
	b.insert(b.end(), a.begin(),a.end());
	for (int i=0;i<b.size();i++){
		cout<<b[i]<<"\n";
	}
	r
sarthak bhardwaj6:51 PM
b.insert(b.end(), a.begin(),a.end());
	for(i=0; i<b.size(); i++ ){
cout<<b(i)<<endl;		
	}
	cout<<b.size();
	b.clear();
cout<<b.size()	;
}
