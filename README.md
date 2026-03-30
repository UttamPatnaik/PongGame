# 🏓 Pong — C++ / SFML

A fully functional **Pong-style game** built using **C++** and the **SFML graphics library** 🎮
This project demonstrates core concepts of **game development**, including real-time input, physics, collision detection, and game state management.

> ✅ Status: Completed (Core Gameplay Implemented)

---

# 🎯 Objective

To build a classic Pong game while learning:

• Real-time game loop
• Physics-based movement
• Collision detection
• Game state handling
• Object-oriented design in C++

---

# 🚀 Features (v1.0)

## 🎮 Gameplay System

• Paddle (Bat) movement
• Ball physics and motion
• Collision detection (walls + bat)
• Score tracking system
• Lives system

## 🎯 Game States

• Running state
• Game Over state
• Restart using **Enter key**

## 🎨 UI System

• Real-time score display
• Lives counter
• Centered **Game Over message**
• Custom color theme

## 👻 Visual Behavior

• Bat and Ball disappear on Game Over
• Reappear on restart

---

# 🎮 Controls

| Key           | Action            |
| ------------- | ----------------- |
| ⬅ Left Arrow  | Move paddle left  |
| ➡ Right Arrow | Move paddle right |
| ⏎ Enter       | Restart game      |
| ❌ Escape      | Exit              |

---

# 🧠 Ball Movement Logic

The ball follows directional vectors (`X`, `Y`) and changes direction based on collisions.

---

## 📊 Collision Cases

### 🟥 Case 1: Left Wall Collision

• Ball hits left boundary
• X direction becomes **positive (+ve)**

---

### 🟥 Case 2: Right Wall Collision

• Ball hits right boundary
• X direction becomes **negative (-ve)**

---

### 🟦 Case 3: Bat Collision

• Ball hits paddle
• Y direction becomes **negative (upward)**

---

### 🟨 Case 4: Top Wall Collision

• Ball hits top boundary
• Y direction becomes **positive (downward)**

---

### 🟥 Case 5: Bottom (Missed Ball)

• Ball crosses bottom boundary
• Life decreases
• Ball resets to starting position

---

# 📈 Diagrammatic Representation

![Image](assets/image1.png)

![Image](assets/image2.png)

![Image](assets/image3.png)

![Image](assets/image4.png)

![Image](assets/image5.png)]

---

# 🧱 Technical Architecture

This project follows a **modular OOP design**:

• `Bat` class → Paddle logic
• `Ball` class → Physics & movement
• `main.cpp` → Game loop & control

---

# 🗂 Project Structure

```bash
Pong/
│
├── main.cpp        # Game loop, input, UI, states
├── Bat.h           # Paddle class definition
├── Bat.cpp         # Paddle logic
├── Ball.h          # Ball class definition
├── Ball.cpp        # Ball physics & movement
├── font/           # Custom font file
└── README.md
```

---

# ⚙️ Build & Run

### 🛠 Compile

```bash
g++ main.cpp Bat.cpp Ball.cpp -o pong -lsfml-graphics -lsfml-window -lsfml-system
```

---

### ▶ Run

```bash
./pong
```

---

# ⚙️ Core Systems Breakdown

## 1️⃣ Movement System

• Delta-time based movement
• Smooth and frame-independent motion

```cpp
m_position += speed * dt.asSeconds();
```

---

## 2️⃣ Collision System

• Boundary detection (walls)
• Paddle collision using `FloatRect::intersects()`

---

## 3️⃣ Game State System

• Boolean-based state (`gameOver`)
• Input-triggered restart

---

## 4️⃣ Rendering Pipeline

• Clear → Draw → Display loop
• SFML rendering engine

---

# 🎯 Learning Outcomes

• Real-time game loop design
• Collision detection in 2D
• Object-oriented programming in C++
• SFML graphics handling
• Game state management
• Input handling (real-time vs event-based)

---

# ⚠️ Limitations

• No sound effects
• No AI opponent
• Fixed ball speed
• Basic physics (no angle variation)

---

# 🔮 Future Improvements

• AI paddle 🤖
• Dynamic ball angles 🎯
• Increasing difficulty 📈
• Sound effects 🔊
• Pause menu ⏸
• Multiplayer mode 👥

---

# 🧑‍💻 Author

**Developer:** Uttam Patnaik
**Project Type:** Game Development / Learning
**Language:** C++
**Library:** SFML

---

# 📌 Version Info

**Version:** 1.0
**Stage:** Complete (Core Game)
**Focus:** Gameplay + Physics + UI

---

# 🏓 Pong

**Precision. Control. Reflex.** 🎮🔥
