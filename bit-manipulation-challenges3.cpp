#include<iostream>
using namespace std;

void subsets(int arr[], int n){
	for(int i=0;i<(i<<n); i++){
		for(int j=0;j<n;j++){
			if(i & (i<<j)){
				cout<<arr[j]<<" ";
			}
		}
		cout<<endl;
	}
}

int main(){
	int arr[4]={1,2,3,4};
	subsets(arr,4);
	  
	return 0;
	
}
