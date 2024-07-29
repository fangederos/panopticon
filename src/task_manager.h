#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <vector>
#include <string>

class TaskManager {
public:
    struct Task {
        std::string description;
        bool completed;
    };

    std::vector<Task> dailyTasks;
    std::vector<Task> dayDependentTasks;
    std::vector<Task> weeklyTasks;
    std::vector<Task> monthlyTasks;

    void toggleTaskCompletion(int index);
    void saveTasks(); // Add this line
    void removeTask(int index); // Add this line
};

#endif // TASK_MANAGER_H
