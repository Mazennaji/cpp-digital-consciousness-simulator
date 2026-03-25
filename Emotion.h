#ifndef EMOTION_H
#define EMOTION_H

#include <iostream>
using namespace std;

class Emotion {
private:
    float happiness;
    float stress;

public:
    Emotion() {
        happiness = 50;
        stress = 50;
    }

    void update(string event) {
        if (event.find("fail") != string::npos) {
            stress += 10;
            happiness -= 5;
        } else if (event.find("success") != string::npos) {
            happiness += 10;
            stress -= 5;
        } else {
            happiness += 1;
            stress += 1;
        }

        if (happiness > 100) happiness = 100;
        if (stress > 100) stress = 100;
        if (happiness < 0) happiness = 0;
        if (stress < 0) stress = 0;
    }

    float getHappiness() { return happiness; }
    float getStress() { return stress; }

    void display() {
        cout << "Happiness: " << happiness << " | Stress: " << stress << endl;
    }
};

#endif