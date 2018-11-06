#include <iostream>
//1 1 1 1 0 0 1 1 0 0 0 1 0 0
using namespace std;

int getArray(int*, int);
int findMaximumGoodness(int*, int, int*);

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
    int* array = new int[num];
    getArray(array, num);
    findMaximumGoodness(array, num);
}

int getArray(int* array, int num){
    for (int i=0; i< num;i++){
        cin>> array[i];
    }
}

int findMaximumGoodness(int* array, int num){
    int maximum_length = 0;
    int max_sum = 0;
    int current_sum = 0;
    int current_length_to_consider = num;
    while(current_length_to_consider > 0){
        int start_index = 0;
        int end_index = start_index + current_length_to_consider - 1;
        for(int i= start_index; i<=end_index;i++){

        }
    }
}
