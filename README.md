# panopticon

Task Manager MVP is a simple terminal-based task manager application built with C++ and ncurses. This MVP (Minimum Viable Product) allows you to manage daily tasks with basic functionalities such as navigation and task completion.

## Features

- Display a list of daily tasks
- Navigate through tasks using the arrow keys
- Toggle task completion status using the space bar
- Clear and refresh the screen to ensure proper display

## Installation

1. **Clone the repository**:

   ```sh
   git clone <URL>
   cd <DIR>
   ```

2. **Build the project**:

   ```sh
   make
   ```

## Usage

1. **Run the application**:

   ```sh
   ./task_manager
   ```

2. **Interact with the application**:
   - Use the **arrow keys** to navigate between tasks.
   - Press the **space bar** to toggle the completion status of the selected task.
   - Press **'q'** to quit the application.

## Project Structure

```plaintext
project_root/
├── include/
│   ├── task_manager.h
│   └── ui.h
├── src/
│   ├── main.cpp
│   ├── task_manager.cpp
│   └── ui.cpp
├── Makefile
└── README.md
```

## Code Overview

- **main.cpp**: Initializes the ncurses environment, sets up the main loop, handles user input, and manages task navigation and completion toggling.
- **ui.h** and **ui.cpp**: Contains the UI class that handles the display of the main menu and tasks.
- **task_manager.h** and **task_manager.cpp**: Contains the TaskManager class that manages the tasks and their completion status.
