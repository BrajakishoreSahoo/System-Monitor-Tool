🖥️ Linux-Based System Monitor (C++)
📘 Objective

A simple Linux-based system monitor built in C++, which displays real-time CPU usage, memory usage, and running process count by reading data from the /proc file system.
This project was developed as part of the Capstone Project (Linux System Programming).

⚙️ Features

✅ Displays live CPU utilization percentage

✅ Shows current memory usage

✅ Counts and displays the total number of running processes

✅ Automatically refreshes every 3 seconds

🧠 Technologies Used

C++

Linux (WSL 2 on Windows)

/proc filesystem

🚀 How to Run

Open your Linux terminal (or WSL) and execute:

g++ main.cpp -o monitor
./monitor

📊 Output Example

CPU Usage: 1.31%

Memory Usage: 62.5%

------------------------------------

🏁 Conclusion

This project demonstrates how low-level system statistics can be accessed using the /proc filesystem in Linux, providing real-time system insights through simple C++ programming techniques.
<img width="1919" height="1068" alt="Screenshot 2025-11-08 110304" src="https://github.com/user-attachments/assets/ae6b5c65-2e26-4a87-ac0e-275236ac5744" />
