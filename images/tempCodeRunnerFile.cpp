#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum=0;
    vector<int> arr={5 ,1 ,2 ,3 ,4 ,2};
	int n=arr.size();
	for(int i=0;i<arr.size();i++){
			sum+=arr[i];
	}
	cout<< sum-(n*(n-1))/2;
}