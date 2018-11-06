#include <iostream>

using namespace std;

float findProbabilityWinning(int, int);

int main() {
	int num, red, green;
	cin >> num;								
    for(int i=0; i < num; i++){
        cin >> red >> green;
        cout << findProbabilityWinning(red, green)<<endl; 
    }
}

float findProbabilityWinning(int red, int green){
    float redFloat = (float)red;
    float greenFloat = (float)green;
    float* probability = new float[green];
    if(red == 0){
        return 1.0;
    }
    probability[0] = 1.0;
    probability[1] = redFloat/(redFloat + 1);
    for(int i=2; i <= green; i++){
        probability[i] = (redFloat/(redFloat + greenFloat)) + (greenFloat/(redFloat+ greenFloat))*((greenFloat-1)/(redFloat+greenFloat-1))*(float)probability[i-2];
    }
    return probability[green];         
}
