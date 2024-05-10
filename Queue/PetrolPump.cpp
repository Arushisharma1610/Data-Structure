#include <iostream>
#include <vector>

using namespace std;

class petrolPump {
public:
    int petrol;
    int distance;

    petrolPump(int p, int d) : petrol(p), distance(d) {}
};

class Solution {
public:
    // Function to find starting point where the truck can start to get through
    // the complete circle without exhausting its petrol in between.
    int tour(vector<petrolPump>& p) {
        int n = p.size();
        
        // Initialize variables
        int def = 0;
        int balance = 0;
        int start = 0;

        // Iterate through the petrol pumps
        for (int i = 0; i < n; i++) {
            balance += p[i].petrol - p[i].distance;
            
            // If balance goes negative, reset starting point
            if (balance < 0) {
                def += balance;
                start = i + 1; // Move to the next pump
                balance = 0; // Reset balance
            }
        }

        // Check if a journey is possible
        if (def + balance >= 0) {
            return start; // Starting point is found
        } else {
            return -1; // No valid starting point found
        }
    }
};

int main() {
    int n; // Number of petrol pumps
    cout << "Enter the number of petrol pumps: ";
    cin >> n;

    // Create a vector of petrol pumps
    vector<petrolPump> pumps;
    
    // Read petrol and distance values from the user
    for (int i = 0; i < n; i++) {
        int petrol, distance;
        cout << "Enter the amount of petrol at pump " << i + 1 << ": ";
        cin >> petrol;
        cout << "Enter the distance to the next pump from pump " << i + 1 << ": ";
        cin >> distance;
        pumps.push_back(petrolPump(petrol, distance));
    }

    // Create a Solution instance
    Solution solution;

    // Find the starting point and print it
    int startPoint = solution.tour(pumps);
    if (startPoint == -1) {
        cout << "The truck cannot complete the journey from any starting point." << endl;
    } else {
        cout << "The truck can start the journey from pump " << startPoint + 1 << "." << endl;
    }

    return 0;
}

