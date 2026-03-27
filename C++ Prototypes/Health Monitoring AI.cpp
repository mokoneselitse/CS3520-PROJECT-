#include <iostream>
using namespace std;

int main() {
    // Patient heart rate history (last 6 readings)
    int heartRates[6] = {72, 74, 73, 75, 71, 95};
    int numReadings = 6;
    
    // Calculate average heart rate from history
    int sum = 0;
    for (int i = 0; i < numReadings - 1; i++) {
        sum += heartRates[i];
    }
    float average = sum / 5.0;
    
    int currentRate = heartRates[5]; // Latest reading
    
    cout << "Average heart rate: " << average << endl;
    cout << "Current heart rate: " << currentRate << endl;
    
    // Anomaly detection
    if (currentRate > average + 20 || currentRate < average - 20) {
        cout << "MEDICAL ALERT: Abnormal heart rate detected!" << endl;
    } else {
        cout << "Vital signs normal" << endl;
    }
    
    return 0;
}
