#ifndef AGENT_H
#define AGENT_H

#include <iostream>
#include "Memory.h"
#include "Emotion.h"
#include "DecisionEngine.h"

using namespace std;

class Agent {
private:
    Memory memory;
    Emotion emotion;
    DecisionEngine decision;

public:
    void perceive(string event) {
        cout << "\nEvent: " << event << endl;

        memory.addExperience(event);
        emotion.update(event);
    }

    void think() {
        cout << "Thought: Reflecting on -> " << memory.recallRandom() << endl;
    }

    void act() {
        string action = decision.decide(emotion.getHappiness(), emotion.getStress());
        cout << "Decision: " << action << endl;
        emotion.display();
    }
};

#endif