#include <ncurses.h>
#include "ui.h"
#include "task_manager.h"

// Main function to initialize the application
int main() {
    // Initialize ncurses
    initscr();            // Start ncurses mode
    cbreak();             // Disable line buffering
    noecho();             // Disable echoing of typed characters
    keypad(stdscr, TRUE); // Enable function keys

    // Initialize UI and Task Manager
    UI ui;
    TaskManager taskManager;

    // Main loop
    bool running = true;
    while (running) {
        clear(); // Clear the screen
        mvprintw(0, 0, "Welcome to Task Manager MVP!");
        mvprintw(1, 0, "Press 'q' to quit.");
        ui.displayMainMenu(); // Display the main menu
        refresh(); // Refresh the screen to show changes

        int ch = getch(); // Get user input
        switch (ch) {
            case 'q':
                running = false; // Exit the loop
                break;
            // Other cases for user interactions will be added here
        }
    }

    // End ncurses mode
    endwin();
    return 0;
}
