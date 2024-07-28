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

    std::vector<Task> dailyTasks = {
        {"Task 1", false},
        {"Task 2", false},
        {"Task 3", false}
    };

    void toggleTaskCompletion(int index);

    // Other functions to manage tasks will be added here
};

#endif // TASK_MANAGER_H
