#include "ui.h"
#include <ncurses.h>

// Function to display the main menu
void UI::displayMainMenu() {
    mvprintw(2, 0, "Daily Tasks:");
    // Display tasks (this will be updated to display actual tasks)
    mvprintw(3, 0, "[ ] Task 1");
    mvprintw(4, 0, "[ ] Task 2");
    mvprintw(5, 0, "[ ] Task 3");
    refresh(); // Refresh the screen to show changes
}
