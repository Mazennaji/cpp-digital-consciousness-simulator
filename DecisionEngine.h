#ifndef DECISION_ENGINE_H
#define DECISION_ENGINE_H

#include <string>
using namespace std;

class DecisionEngine {
public:
    string decide(float happiness, float stress) {
        if (stress > 70) return "Take a break";
        if (happiness > 70) return "Keep going";
        if (stress > happiness) return "Work harder";
        return "Stay consistent";
    }
};

#endif