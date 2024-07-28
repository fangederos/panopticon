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

    // Functions to manage tasks will be added here
};

#endif // TASK_MANAGER_H

