#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

// Function to get CPU usage
float getCPUUsage() {
    ifstream file("/proc/stat");
    string cpu;
    long user, nice, system, idle;
    file >> cpu >> user >> nice >> system >> idle;
    file.close();
    return (float)(user + nice + system) / (user + nice + system + idle) * 100;
}

// Function to get Memory usage
float getMemoryUsage() {
    ifstream file("/proc/meminfo");
    string key;
    long total, free;
    file >> key >> total >> key >> free;
    file.close();
    return (float)(total - free) / total * 100;
}

int main() {
    cout << "--------------------------------------\n";
    cout << "     SYSTEM MONITOR TOOL (Linux)\n";
    cout << "--------------------------------------\n";
    cout << "Press Ctrl+C to exit.\n\n";

    while (true) {
        float cpu = getCPUUsage();
        float mem = getMemoryUsage();

        cout << "CPU Usage: " << cpu << "%\n";
        cout << "Memory Usage: " << mem << "%\n";
        cout << "--------------------------------------\n";

        this_thread::sleep_for(chrono::seconds(3));
    }

    return 0;
}
