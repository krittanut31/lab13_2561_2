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
	int key , p;
	bool chk = false;
	for(int i = 1;i<N;i++){
		key = d[i];
		for(int a = 1;a>0;a--){
			for(int k = 0;k<N;k++){
				if(d[k]==key&&chk == false){
					cout << "["<<d[k]<<"]"<<" ";
					chk = true;
				}else{
					cout << d[k]<<" ";
				}
			}
			chk = false;
			cout << "=>";
			for(int j = i; j > 0;j--){
				if(key>d[j-1]){
					swap(d,j,j-1);
					p = j;
				}
		}	
			for(int k = 0;k<N;k++){
				
				if(d[k]==key && chk == false){
					chk = true;
					cout << "["<<d[k]<<"]"<<" ";
				}else{
					cout << d[k]<<" ";
				}
			}
			chk = false;
			cout << endl;
		}
		
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
