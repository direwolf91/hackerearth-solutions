#include<iostream>
using namespace std;

long num_ways(long);
int main(){
    long num_of_test_cases, num_days;
    cin >> num_of_test_cases;
    for(long i=0;i<num_of_test_cases;i++){
        cin >> num_days;
        cout << num_ways(num_days) << endl;
    }
}

long num_ways(long days){
    long m = 1000000007;
    long num_days_two =1;
    long num_days_one = 2; 
    long temp;
    for (long i=2; i <= days; i++){
        temp = num_days_one;
        num_days_one = (num_days_one + num_days_two)%m;
        num_days_two = temp;
    }
    return num_days_one;
}

