#include <curses.h>

int main() {
    initscr();                 
    keypad(stdscr, TRUE);      // Enable function keys (F1-F12, Arrows, etc.)
    noecho();                  // Prevent echoing of typed characters

    printw("Press an arrow key or 'q' to exit...\n");
    refresh();

    int ch;
    while ((ch = getch()) != 'q') {  // Exit on 'q'
        switch (ch) {
            case KEY_UP:
                printw("Up Arrow Pressed!\n");
                break;
            case KEY_DOWN:
                printw("Down Arrow Pressed!\n");
                break;
            case KEY_LEFT:
                printw("Left Arrow Pressed!\n");
                break;
            case KEY_RIGHT:
                printw("Right Arrow Pressed!\n");
                break;
            default:
                printw("You pressed: %c\n", ch);
        }
        refresh();
    }

    endwin();
    return 0;
}