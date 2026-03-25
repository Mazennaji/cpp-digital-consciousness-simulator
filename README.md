# 🧠 Digital Consciousness Simulator

A **C++ console-based simulation** that models the core building blocks of an artificial mind — perception, memory, emotion, thought, and decision-making — built entirely with Object-Oriented Programming principles.

---

## 📌 Overview

The Digital Consciousness Simulator creates an autonomous agent that processes events through a cognitive pipeline: incoming stimuli are stored as memories, trigger emotional responses, spark generated thoughts, and ultimately drive decisions. The system runs in a continuous loop, allowing the agent to evolve its internal state over time as it encounters new experiences.

This project demonstrates advanced OOP design, modular architecture, and AI behavior modeling — making it a compelling showcase of system-level thinking in C++.

---

## 🎯 Features

| Feature | Description |
|---|---|
| 🧠 Memory System | Stores and retrieves past experiences chronologically |
| ❤️ Emotion Engine | Tracks happiness and stress levels, updated by events |
| 💭 Thought Generation | Produces context-aware thoughts based on current state |
| ⚖️ Decision Engine | Makes autonomous decisions driven by emotional state |
| 🔁 Simulation Loop | Continuous event processing cycle mimicking cognition |
| 🤖 Autonomous Behavior | Agent operates independently once events are fed in |

---

## 🧱 OOP Concepts Demonstrated

| Concept | Implementation |
|---|---|
| **Encapsulation** | Internal cognitive states are private, accessed only through controlled interfaces |
| **Abstraction** | Each subsystem exposes a simple API while hiding complex internal logic |
| **Composition** | `Agent` is composed of `Memory`, `Emotion`, and `DecisionEngine` modules |
| **Polymorphism** | Extensible architecture — swap or extend behavior engines without modifying the agent |

---

## 🏗️ Project Structure

```
DigitalConsciousness/
├── main.cpp              # Simulation entry point & event loop
├── Agent.h               # Core agent — orchestrates all cognitive modules
├── Memory.h              # Experience storage & retrieval system
├── Emotion.h             # Emotional state tracking (happiness, stress)
└── DecisionEngine.h      # Decision-making logic based on internal state
```

---

## ⚙️ Cognitive Pipeline

```
┌───────────────┐     ┌───────────────┐     ┌───────────────┐
│   EVENT IN    │────▶│  MEMORY       │────▶│  EMOTION      │
│  (stimulus)   │     │  (store)      │     │  (update)     │
└───────────────┘     └───────────────┘     └───────┬───────┘
                                                    │
                                                    ▼
                      ┌───────────────┐     ┌───────────────┐
                      │  DECISION     │◀────│  THOUGHT      │
                      │  (act)        │     │  (generate)   │
                      └───────────────┘     └───────────────┘
                              │
                              ▼
                      ┌───────────────┐
                      │  LOOP BACK    │
                      │  (next event) │
                      └───────────────┘
```

---

## ▶️ Usage

### Compile & Run

```bash
g++ main.cpp -o mind
./mind
```

### Sample Simulation

```
══════════════════════════════════════════
       DIGITAL CONSCIOUSNESS SIMULATOR
══════════════════════════════════════════

[Event] → "You failed an exam"

  🧠 Memory    : Experience stored (total: 1)
  ❤️ Emotion   : Stress ▲ 72%  |  Happiness ▼ 35%
  💭 Thought   : "I should improve my preparation."
  ⚖️ Decision  : "Study harder and seek help."

──────────────────────────────────────────

[Event] → "You got a job offer"

  🧠 Memory    : Experience stored (total: 2)
  ❤️ Emotion   : Stress ▼ 30%  |  Happiness ▲ 88%
  💭 Thought   : "This is a great opportunity."
  ⚖️ Decision  : "Accept and celebrate."

──────────────────────────────────────────

[Status] Memories: 2  |  Mood: Optimistic  |  Cycles: 2
```

---

## 🔮 Roadmap

- [ ] 🧠 Long-term vs short-term memory with decay
- [ ] 🧬 Personality traits — risk tolerance, discipline, curiosity
- [ ] 📊 Learning module — improve decisions from past outcomes
- [ ] 🤖 Reinforcement learning integration
- [ ] 🖥️ GUI visualization of cognitive state over time

---

## 📚 Learning Outcomes

- Design complex systems through composition and modular OOP architecture
- Model intelligent agent behavior with event-driven cognitive pipelines
- Practice abstraction by building clean interfaces over intricate subsystems
- Understand the fundamentals of AI simulation and decision-making logic

---

## 👨‍💻 Author

**Mazen Naji**

---

## ⭐ Contributing

Contributions are welcome! Fork the repo, create a feature branch, and open a pull request — help evolve this into a full AI simulation engine.
