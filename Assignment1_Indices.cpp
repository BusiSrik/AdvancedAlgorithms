#include<iostream>
#include<array>
using namespace std;

void findindices(int targetnumber, int arrayinput[],int arraysize){
	for (int j=0;j<(arraysize-1);j++){
		for (int k=(j+1);k<arraysize;k++){
			if((arrayinput[j]+arrayinput[k])==targetnumber){
				cout<<j;
				cout<<k;
				cout<<"\n";
			}
		}
	}


}

int main() {
	int arraysize;
	int arrayinput[105];
	int targetnumber;
	int i=0;
	cout<<"Enter the number of elements in array";
	cin>>arraysize;
	cout<<"Enter the numbers in the array";
	while(i<arraysize){
		cin>>arrayinput[i];
		i++;
	}
	cout<<"Enter the target number";
 	cin>>targetnumber;
 	findindices(targetnumber,arrayinput,arraysize);
}








