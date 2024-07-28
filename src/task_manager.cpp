#include "task_manager.h"

// Function to toggle task completion
void TaskManager::toggleTaskCompletion(int index) {
    if (index >= 0 && static_cast<size_t>(index) < dailyTasks.size()) {
        dailyTasks[index].completed = !dailyTasks[index].completed;
    }
}
