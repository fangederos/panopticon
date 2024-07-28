#include <ncurses.h>
#include "ui.h"
#include "task_manager.h"

TaskManager taskManager; // Define the taskManager object

// Main function to initialize the application
int main() {
    // Initialize ncurses
    initscr();            // Start ncurses mode
    cbreak();             // Disable line buffering
    noecho();             // Disable echoing of typed characters
    keypad(stdscr, TRUE); // Enable function keys

    // Initialize UI
    UI ui;

    int currentTask = 0; // Index of the currently selected task
    int ch;

    // Main loop
    bool running = true;
    while (running) {
        clear(); // Clear the screen

        // Ensure print statements are correct and in the right order
        mvprintw(0, 0, "Welcome to Task Manager MVP!");
        mvprintw(1, 0, "Use the arrow keys to move between tasks");
        mvprintw(2, 0, "Press 'SPACE' to checkmark boxes.");
        mvprintw(3, 0, "Press 'q' to quit.");

        ui.displayMainMenu(currentTask); // Display the main menu with the current task highlighted
        refresh(); // Refresh the screen to show changes

        ch = getch(); // Get user input
        switch (ch) {
            case 'q':
                running = false; // Exit the loop
                break;
            case KEY_UP:
                if (currentTask > 0) {
                    currentTask--; // Move cursor up
                }
                break;
            case KEY_DOWN:
                if (currentTask < static_cast<int>(taskManager.dailyTasks.size()) - 1) {
                    currentTask++; // Move cursor down
                }
                break;
            case ' ': // Space bar to toggle task completion
                taskManager.toggleTaskCompletion(currentTask);
                break;
            // Other cases for user interactions will be added here
        }
    }

    // End ncurses mode
    endwin();
    return 0;
}
