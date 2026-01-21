# Rebirth System

Short Description 💬
-----------------
Console-based incremental game implemented in C++. Players earn XP, perform rebirths to reset XP, and increase their power multiplier. The rebirth system allows infinite progression by rewarding players with increased power for each rebirth. This project demonstrates core C++ concepts including variables, functions, conditional logic, loops, and menu-based user interaction.

Announcement 📢
------------
This project is written using C++17.

Features ✅
--------
- Menu-driven gameplay loop 🧭  
- **Rebirth system:** reset XP to 0 and increase power 🔁  
- Track total rebirths for progression 📊  
- Infinite progression logic ♾️  

### Example usage / sample session 💡

A short example flow (user input shown after prompts):

```text
====================
Rebirth: 0
Power: 1x
XP: 0
====================
[1] - Earn XP
[2] - Rebirth
[3] - Exit
Choose: 1
// Player gains 10 XP (10 * Power)

Choose: 1
// XP increases again

Choose: 2
// Player has >=100 XP, performs rebirth
// XP resets to 0
// Power increases by 1
// Rebirth count increases by 1

Choose: 3
// Program exits
```
### Notes and limitations ⚠️
- All progress is stored only in memory; exiting the program resets everything.  
- XP and Power mechanics are simplified for learning purposes.  
- No save/load system, difficulty scaling, or advanced gameplay mechanics.  
- Minimal input validation; invalid input may cause unexpected behavior.  

### Author 👤
- wdemirkoll — GitHub: @wdemirkoll
- 📅 January 2026

