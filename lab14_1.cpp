#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int x,y;
	for(int i = 1 ; i < N ; i++){
		x = d[i];
		y = i - 1;

		while (y >= 0 && d[y] < x)
		{
			d[y+1] = d[y];
			--y;
		}
		d[y+1] = x;
		cout << "Pass "<< i << ":";
		for(int j = 0 ; j < N ; j++){
		cout << d[j] << " " ;
		}
		cout << "\n";
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
