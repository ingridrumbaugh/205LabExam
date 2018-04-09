#include <iostream>
#include <curses.h>
#include <string>

using namespace std;

// Define methods you need in the class here (Like in a header)

// DON'T FORGET: IN THE .PRO FILE, INCLUDE THIS LINE TO DO A TUI
// LIBS    += -lncurses

int main() {

    initscr();
    do {
        // hide the cursor from view (comment this line out for debugging)
        curs_set(0);
        cbreak();

        // control whether characters  typed  by  the user  are echoed
        // by getch as they are typed
        noecho();

        // the user can press a function key (such as an arrow key) and
        // getch returns a single value representing the  function  key,
        // as in KEY_LEFT
        keypad(stdscr, TRUE);

        // initialize the interaction loop to run
        bool continue_looping = true;
        //RobotEngine r(rows, cols);
        //draw_screen(&r);

        do {
            // draw the new screen
            refresh();

            // obtain character from keyboard
            int ch = getch();

            // operate based on input character
            bool result;

            switch (ch) {
            case 'l':
                //keyresult = r.move_east();
                break;
            }
            //draw_screen(&r);
            refresh();
        } while(continue_looping);
        refresh();
        endwin();
//        std::cout<< "Game Over!"<<endl;
//        std::cout<< "Do you want to play another game? (Yes/No):";
//        std::string ans;
//        std::cin >> ans;
//        if(! ans.compare("Yes") || !ans.compare("yes"))
//            newGame = true;
//        else
//            newGame = false;
//        std::cout << std::endl;

      // while(newGame) below
    } while(true);

    return 0;
}

// Write the actual methods you need here (Like in the .cpp class)

//void draw_screen(RobotEngine *r) {
//    //Clear the screen
//    clear();

//    for(int i = 0; i < rows; i++){
//        mvprintw(i, 0, "|");
//        mvprintw(i, cols-7, "|");
//    }

//    for(int i = 0; i < cols-7; i++){
//        mvprintw(0, i,    "-");
//        mvprintw(rows, i, "-");
//    }

//    // get player position
//    int x = r->get_player_x();
//    int y = r->get_player_y();
//    std::cout<<"player x: "<<x<<"  player y: "<<y<<endl;
//    mvprintw(x, y, "@");

//    int roboLength = r->get_num_robots();

//    for(int i = 0; i < roboLength; i++){
//        int roboX = r->get_robot_position_x(i)+1;
//        int roboY = r->get_robot_position_y(i)+1;
//        mvprintw(roboX,roboY,"+");
//        refresh();
//    }

//    //Setting up directions
//    mvprintw(0,66+3, "Directions:");
//    mvprintw( 2, 66+3, "y");
//    mvprintw(2, 70+3,"k" );
//    mvprintw(2, 74+3, "u");


//    //refresh();
//}
