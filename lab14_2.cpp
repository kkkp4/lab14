#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool X[N][N]){
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			cout << X[i][j] << " ";
		}
		cout <<  "\n" ;
	}
}

void inputMatrix(double Y[N][N]){
	for(int i = 0 ; i < N ; i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0 ; j < N ; j++){
		cin >> Y[i][j];
		}
	}
}

void findLocalMax(const double Z[][N], bool O[][N]){
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			if(Z[i][j] >= Z[i][j+1] && Z[i][j] >= Z[i+1][j] && Z[i][j] >= Z[i][j-1] && Z[i][j] >= Z[i-1][j] && i >= 1 && j >= 1 && i <= N -2 && j <= N-2) O[i][j] = true ;
			else{
				O[i][j] = false ;
			}
		}
	}
}