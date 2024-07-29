#include "task_manager.h"
#include <fstream>

// Function to toggle task completion
void TaskManager::toggleTaskCompletion(int index) {
    if (index >= 0 && static_cast<size_t>(index) < dailyTasks.size()) {
        dailyTasks[index].completed = !dailyTasks[index].completed;
    }
}

// Function to save tasks to a file
void TaskManager::saveTasks() {
    std::ofstream file("tasks.txt");
    for (const auto& task : dailyTasks) {
        file << task.description << "," << task.completed << "\n";
    }
    file.close();
}

// Function to remove a task
void TaskManager::removeTask(int index) {
    if (index >= 0 && static_cast<size_t>(index) < dailyTasks.size()) {
        dailyTasks.erase(dailyTasks.begin() + index);
    }
}
