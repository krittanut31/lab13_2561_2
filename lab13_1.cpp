#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int p;
for(int j=1;j<N;j++){
		for(int k=0;k<N;k++){
			if(k==j){cout << "["<< d[k] <<"]" << " ";
			}else
			{
				cout << d[k] << " " ;
			}
			
		}
	int i=j;
	p=i;
		while(i>0){
			if(d[i]>d[i-1]){
				swap(d,i,i-1);
				p = i-1 ;
				
			}
			
			i--;
		}
		
		
		cout<< " => ";
			
			for(int k=0;k<N;k++){
			if(k==p){cout << "["<< d[k] <<"]" << " ";
			}else
			{
				cout << d[k] << " " ;
			}
		}
		cout <<"\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
