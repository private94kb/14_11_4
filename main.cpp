
#include <iostream>
#include <ctime>//для бібліотеки time
#include <cstdlib>//для бібліотеки random
using namespace std;
int main(){
	int arr[4][6];
	int sum = 0;
	srand(time(NULL));//кожного разу, коли програма запускається, буде створюватися нова початкова точка для генерації послідовності чисел  
	for (int i = 0; i < 4; i++) { // для рядків 
		for (int j = 0; j < 6; j++) {// для стовпчиків
			arr[i][j] =rand() %10;
		}
	}
	for (int i = 0; i < 6; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			sum=arr[j][i]+sum;
		}
		cout << "in " << i << " column sum is = " << sum << endl;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}