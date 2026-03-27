#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Simulated voice feature arrays (simplified MFCC coefficients)
    float storedVoice[4] = {0.2, 0.5, 0.7, 0.1};
    float inputVoice[4] = {0.3, 0.55, 0.72, 0.12};
    
    // Calculate similarity score using Euclidean distance
    float sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += pow(storedVoice[i] - inputVoice[i], 2);
    }
    float distance = sqrt(sum);
    
    cout << "Voice match distance: " << distance << endl;
    
    if (distance < 0.15) {
        cout << "VOICE COMMAND ACCEPTED" << endl;
    } else {
        cout << "Voice not recognized" << endl;
    }
    
    return 0;
}
