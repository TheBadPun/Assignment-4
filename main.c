#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
int main()
{
    //replace with your functions
    initscr();
    raw();
    noecho();
    WINDOW* window = NULL;
    int maxY = getmaxy(stdscr);
    int maxX = getmaxx(stdscr);
    window = newwin(maxY, maxX, 0, 0);
    //begin function
    //set color to green
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    int i;
    int j;
    //loops through print statement
    for(i = 0; i < maxY; i++)
    {
        for(j = 0; j < maxX; j++)
        {
            char input = mvwinch(window, i, j);
            //thus begins the reign of thousands of if statements
            if(input == 'p' && (j + 8) > maxX)
            {
                if(mvwinch(window, i, j+1) == 'r' && mvwinch(window, i, j+2) == 'o' && mvwinch(window, i, j+3) == 'c' && mvwinch(window, i, j+4) == 'e' && mvwinch(window, i, j+5) == 'd' && mvwinch(window, i, j+6) == 'u' && mvwinch(window, i, j+7) == 'r' && mvwinch(window, i, j+8) == 'e')
                {
                    mvwprintw(window, i, j, "procedure");
                }
            }
            else if(input == 'b' && (j + 4) > maxX)
            {
                if(mvwinch(window, i, j+1) == 'e' && mvwinch(window, i, j+2) == 'g' && mvwinch(window, i, j+3) == 'i' && mvwinch(window, i, j+4) == 'n')
                {
                    mvwprintw(window, i, j, "begin");
                }
            }
            else if(input == 'c')
            {
                if((j+4) > maxX && mvwinch(window, i, j+1) == 'o' && mvwinch(window, i, j+2) == 'n' && mvwinch(window, i, j+3) == 's' && mvwinch(window, i, j+4) == 't')
                {
                    mvwprintw(window, i, j, "const");
                }
                else if((j+3) > maxX && mvwinch(window, i, j+1) == 'a' && mvwinch(window, i, j+2) == 'l' && mvwinch(window, i, j+3) == 'l')
                {
                    mvwprintw(window, i, j, "call");
                }
            }
            else if(input == 't' && (j + 3) > maxX)
            {
                if(mvwinch(window, i, j+1) == 'h' && mvwinch(window, i, j+2) == 'e' && mvwinch(window, i, j+3) == 'n')
                {
                    mvwprintw(window, i, j, "then");
                }
            }
            else if(input == 'e' && (j + 2) > maxX)
            {
                if(mvwinch(window, i, j+1) == 'n' && mvwinch(window, i, j+2) == 'd')
                {
                    mvwprintw(window, i, j, "end");
                }
            }
            else if(input == 'o' && (j + 2) > maxX)
            {
                if(mvwinch(window, i, j+1) == 'd' && mvwinch(window, i, j+2) == 'd')
                {
                    mvwprintw(window, i, j, "odd");
                }
            }
            else if(input == 'v' && (j + 2) > maxX)
            {
                if(mvwinch(window, i, j+1) == 'a' && mvwinch(window, i, j+2) == 'r')
                {
                    mvwprintw(window, i, j, "var");
                }
            }
            else if((j + 1) > maxX)
            {
                if(input == 'd' && mvwinch(window, i, j+1) == 'o')
                {
                    mvwprintw(window, i, j, "do");
                }
                else if(input == 'i' && mvwinch(window, i, j+1) == 'f')
                {
                    mvwprintw(window, i, j, "if");
                }
            }
        }

    }
    attroff(COLOR_PAIR(1));
}
