#include <curses.h>

int main() {
    initscr();
    noecho();
    curs_set(0);  // Hide the cursor

    int height = 10, width = 30, start_y = 5, start_x = 10;
    WINDOW *win = newwin(height, width, start_y, start_x); // Create a new window

    box(win, 0, 0);  // Draw a border around the window
    mvwprintw(win, 1, 1, "This is a window!"); // Print text inside the window
    wrefresh(win);  // Refresh to show the window

    getch();
    endwin();
    return 0;
}