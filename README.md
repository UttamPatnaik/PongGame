# 🏓 Pong (Work in Progress) — C++ / SFML

A minimal **Pong-style paddle system** built using **C++** and the **SFML graphics library** 🎮.
This project focuses on building a strong foundation in **real-time input handling, movement systems, and game architecture**.

> Current Stage: Core paddle system (movement + rendering)

---

# 🎯 Objective

Build a fully functional Pong game step-by-step by implementing:

• Paddle movement
• Ball physics
• Collision system
• Scoring system

---

# 🚀 Current Features (v0.1)

## 🎮 Paddle System

• Smooth left/right movement
• Delta-time based motion
• Boundary-constrained movement
• Input-driven state system

## 🎹 Input Handling

• Real-time keyboard detection
• Continuous movement (not event-based)
• Directional control flags

## ⚙️ Rendering System

• SFML-based window rendering
• Frame update loop
• Custom color theme (dark + neon)

---

# 🎮 Controls

| Key            | Action            |
| -------------- | ----------------- |
| ⬅ Left Arrow   | Move paddle left  |
| ➡ Right Arrow  | Move paddle right |
| ❌ Close Window | Exit              |

---

# 🧱 Technical Architecture

This project follows a **modular object-oriented design**:

• Separate `Bat` class for paddle logic
• Real-time game loop
• Delta-time movement system
• Input-state based control system

---

# 🗂 Project Structure

```bash
Pong/
│
├── main.cpp        # Game loop, window, input handling
├── bat.h           # Bat class definition
├── bat.cpp         # Bat logic implementation
└── README.md
```

---

# ⚙️ Build & Run

### 🛠 Compile

```bash
g++ main.cpp bat.cpp -o pong -lsfml-graphics -lsfml-window -lsfml-system
```

### ▶ Run

```bash
./pong
```

---

# 🧩 System Breakdown

## 1️⃣ Paddle Movement System

### Features

• Direction flags (`m_isMovingLeft`, `m_isMovingRight`)
• Continuous motion using delta time
• Speed-based movement

### Core Logic

```cpp
m_position.x += m_speed * dt.asSeconds();
```

---

## 2️⃣ Boundary System

### Purpose

Prevents paddle from leaving the screen

### Logic

```cpp
if (m_position.x < windowWidth - batWidth)
```

---

## 3️⃣ Input System

### Approach

Uses **real-time polling** instead of event-only input

### Functions

```cpp
moveLeft()
moveRight()
stopLeft()
stopRight()
```

---

## 4️⃣ Rendering System

### Flow

• Clear screen
• Draw objects
• Display frame

---

# 🎯 Learning Outcomes

• Real-time game loop design
• Delta-time based movement
• Object-oriented design in C++
• Input handling (event vs real-time)
• Basic game architecture
• SFML rendering pipeline

---

# ⚠️ Current Limitations

• No ball implemented
• No collision system
• No scoring system
• No sound effects
• No UI

---

# 🔮 Planned Improvements

• Ball physics system ⚽
• Paddle-ball collision detection
• Scoring system 🧮
• Game states (start / pause / game over)
• Sound effects 🔊
• UI elements (score display)
• AI opponent 🤖

---

# 🧑‍💻 Author

**Developer:** Uttam Patnaik
**Project Type:** Learning / Game Development
**Language:** C++
**Library:** SFML

---

# 📌 Version Info

**Version:** 0.1-alpha
**Stage:** Early Prototype
**Focus:** Core Movement System

---

# 🏓 Pong

**Precision. Control. Evolution.** 🎮

---
