#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum=0;
    vector<int> arr={8 ,7 ,2 ,5 ,4 ,7 ,1 ,3 ,6};
	int n=arr.size();
	for(int i=0;i<arr.size();i++){
			sum+=arr[i];
	}
	cout<< sum-(n*(n-1))/2;
}