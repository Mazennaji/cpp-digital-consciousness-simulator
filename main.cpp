#include <iostream>
#include "Agent.h"

using namespace std;

int main() {
    Agent agent;
    string event;

    cout << "=== Digital Consciousness Simulator ===\n";

    while (true) {
        cout << "\nEnter an event (or type 'exit'): ";
        getline(cin, event);

        if (event == "exit") break;

        agent.perceive(event);
        agent.think();
        agent.act();
    }

    return 0;
}