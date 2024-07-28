#include "ui.h"
#include "task_manager.h"
#include <ncurses.h>

extern TaskManager taskManager; // Declare an external taskManager object

// Function to display the main menu
void UI::displayMainMenu(int currentTask) {
    mvprintw(5, 0, "Daily Tasks:");
    // Display tasks with the current task highlighted and completion status
    for (size_t i = 0; i < taskManager.dailyTasks.size(); ++i) {
        std::string taskDisplay = taskManager.dailyTasks[i].completed ? "[X] " : "[ ] ";
        taskDisplay += taskManager.dailyTasks[i].description;
        mvprintw(6 + i, 0, currentTask == static_cast<int>(i) ? "> %s" : "  %s", taskDisplay.c_str());
    }
    refresh(); // Refresh the screen to show changes
}
