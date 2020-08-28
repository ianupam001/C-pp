#include<iostream>
using namespace std;
int main(){
		int a[50],size,pos,num,i;
		cout<<"Enter the size of array:";
		cin>>size;
		if(size>50){
			cout<<"Overflow condition! Size must be less than equal to 50.";
		}
		else{
		cout<<"Enter the elements of array:";
		for(i=0;i<size;i++){
			cin>>a[i];
		}
	}
		cout<<"Enter the element to be inserted:";
		cin>>num;
		cout<<"Enter the position:";
		cin>>pos;
		if(pos<=0 || pos>size){
			cout<<"Invalid postion. Position must be less or equal to "<<size<<endl; 
		}
		else{
			for(i=size-1;i>=pos-1;i--){
				a[i+1]=a[i];
			}
			a[pos-1]=num;
			size++;
		}
		cout<<"Elements of array are:";
		for(i=0;i<size;i++){
			cout<<" "<<a[i];
		}
		return 0;
	
	
}
