#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

// We define N & M for the field of play, its height and width.
/* Find the meaning for 20 and 40 - height & width? or coordinate & position?*/
#define N 20 // number of columns
#define M 40 // number of rows

int i,j,Field[N][M],x,y,Gy,Head,Tail,Game,Cursed_Apple,a,b,var,dir,score,HighScore,speed;

/*

    Field[N][M] defines the field of play in a 2D area.
    x & y are the coordinate points for the position of the snake.
    Head & Tail is the position of the head and tail of the snake, it's the value for both, respectively.
    Gy is a temporary variable for y.
    Game is for the "Game loop". The value of '0' means that the game is running. If value is '1', then the game will stop.
    Cursed_Apple is for the initialization of the cursed apple to be eaten by the snake.
    a & b holds the temporary value for the random coordinate positions of the cursed apple.
    var holds the input value from the user.
    dir holds the direction of the snake moving CONTINUOUSLY and only updates if another key direction is pressed.
    score gives the score during a session. HighScore gives the accumulation of the scores.
    speed holds the speed of the snake.

*/

// create file handler
FILE *f; // *f to indicate a file. This is used to save the high score of the game.

void snake_initialization(){ // This function initializes the snake and the cursed apple.

    f = fopen("highscore.txt","r"); // used to open the file in read-mode ("r")
    fscanf(f, "%d", &HighScore); // notify that this will read through the highscore.txt and put the value in HighScore variable.
    fclose(f); //closes the file f

    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            Field[i][j] = 0;
        }
    }

    x = N/2; y = M/2; // The beginning position of the snake when the game starts.
    // x holds the value of 10 while y, 20.
    Gy = y; // holds the value of y which is 20
    Head = 5; Tail = 1;
    /*
    In the screen, whenever the area holds the value of '5', that is the head of the snake.
    If '1', it's the tail. In between 1 and 5 , is the body of the snake
    */
    Game = 0; // Game is running with value '0'.
    Cursed_Apple = 0; // If '0'  add cursed apple, if != 0, not add any cursed apple.
    dir = 'd'; // This automatically moves the snake continuously to the right as if the 'd' key is pressed already.
    score = 0; // starts the score of the session with 0
    speed = 99; // This determines the speed of the snake.

    for(i=0; i<Head; i++){ // This is where the positioning of the head is.
        Gy++;
        Field[x][Gy-Head] = i + 1;
    }

}

void print_fieldOfplay(){ // This function creates the field of play, the score, the snake and the cursed apple.

    //We use a for loop to create the upper portion of the field of play.
    for(i=0; i<=M+1; i++){
        if(i==0){
            printf("%c",201); // top-most left
        }
        else if(i==M+1){
            printf("%c",187); // top-most right
        }
        else{
            printf("%c",205); // in-between
        }
    }

    printf("  Current Score: %d   ||   High Score: %d", score, HighScore);

    printf("\n");

    // This is for the sides of the field of play.
    for(i=0; i<N; i++){

        printf("%c", 186); // left-most line

        for(j=0; j<M; j++){

            if(Field[i][j]==0){printf(" ");} // the space in-between the left and right lines

            if(Field[i][j]>0 && Field[i][j]!=Head){printf("%c",176);} // This prints the "head of the snake.

            if(Field[i][j]==Head){printf("%c",178);} // This prints the "body" (and tail) of the snake.

            if(Field[i][j]==-1){printf("%c",15);} // This prints the cursed apple.

            if(j==M-1){printf("%c\n",186);} // right-most line
        }
    }

    //This is for the lower portion of the field of play.
    for(i=0; i<=M+1; i++){
        if(i==0){
            printf("%c",200); // bottom-most left
        }
        else if(i==M+1){
            printf("%c",188); // bottom-most right
        }
        else{
            printf("%c",205); // in-between
        }
    }

}

void ResetScreenPosition(){ // Function for the Game loop. This makes the field of play look constant.

    HANDLE hOut; // define
    COORD Position; // define position coordinate - the top-most left
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut,Position);

}

Random(){ // Get random number that will be its coordinate(a,b) for the cursed apple, that is in the field of play. This also gives the speed of the snake the longer the game is.

    srand(time(NULL)); // to make sure that the numbers will be random

    a = 1 + rand() % 18;
    b = 1 + rand() % 38;
    // added 1 so that it will not be in the borders of the field of play

    if(Cursed_Apple == 0 && Field[a][b] == 0){ // Used to check if there is cursed apple in the screen and if field[a][b] (which can also be the coordinate of our snake body) is 0.
        Field[a][b] = -1;
        Cursed_Apple = 1; // flag that notifies not to add anymore a cursed apple.
        if(speed > 10 && score != 0){ // This increases the speed of the snake every time a cursed apple is eaten. This increases the difficulty of the game.
            speed = speed - 15;
        }
    }

}

int getch_noblock(){ // This function returns the integer value of the ASCII from the keyboard.
    if(_kbhit()){ // "If keyboard is hit, "
        return _getch(); // "then returns the ASCII value of the keyboard"
    }
    else{
        return -1; // nothing
    }

}

void movement(){// This function is for controlling the movement of the snake. This takes input from the user.

    var = getch_noblock();
    var = tolower(var); // converts to lower case - so that there would be no problems if all caps lock during gameplay.

    if(((var == 'd' || var == 'a') || (var == 'w' || var == 's')) // This is so the snake will not go back its opposite direction or go over his body.
       && (abs(dir - var) > 5)){
        /*

        d & a for left and right
        w & s for up and down

        ex.
        d - a > 5, w - s > 5. d - w < 5, a - s < 5
        with this, the use of the absolute value is that it only moves in a certain direction if the value is greater than (<) 5.
        The certain direction is wherein the snake will not go over its own body.

        */

        dir = var; // dir is used so that there is CONTINUOUS movement of the snake.
    }

    if(dir == 'd'){ // This moves the snake to the RIGHT.
        y++; // moves the position
        if(Field[x][y] != 0 && Field[x][y] != -1){GameOver();} // The GameOver() function will be triggered here IF the snake's head is over its own body. For this to work, the snake MUST NOT be on the OPEN AREA or on the CURSED APPLE.
            // 1st, this checks if the Field of the head is empty or not (0), if not there are 2 possibilities, either the cursed apple or its own body.
            // If not on the cursed apple, then it must be on its own body, hence it triggers the GameOver() function.
            // 0 stands for the snake. -1 stands for the value of the cursed apple.
        if(y == M - 1){y = 0;} // This is to let the snake continue from the opposite side of the border WITHOUT going to the next line. So, from the right side, it will go the left, without going into a new line.
        if(Field[x][y] ==  -1){ // This generates a new cursed_apple randomly whenever it is "eaten" by the snake.
            Cursed_Apple = 0;
            score += 5; // This adds +5 to the score during a session of a game.
            Tail -= 2; // This also translates to "Tail = Tail - 5". This increases the length of the snake by decreasing the value of the tail, whenever the snake "eats" the cursed apple.
        }
        Head++; // moves the head
        Field[x][y] = Head; // moves the body
    }

    if(dir == 'a'){ // This moves the snake to the LEFT.
        y--;
        if(Field[x][y] != 0 && Field[x][y] != -1){GameOver();}
        if(y == 0){y = M - 1;} // From left, it will go the right.
        if(Field[x][y] ==  -1){
            Cursed_Apple = 0;
            score += 5;
            Tail -= 2;
        }
        Head++;
        Field[x][y] = Head;
    }

    if(dir == 'w'){ // This moves the snake to the TOP.
        x--;
        if(Field[x][y] != 0 && Field[x][y] != -1){GameOver();}
        if(x == -1){x = N - 1;} // From top, it will go to the bottom. -1 so that it will be better and more realistic.
        if(Field[x][y] ==  -1){
            Cursed_Apple = 0;
            score += 5;
            Tail -= 2;
        }
        Head++;
        Field[x][y] = Head;
    }

    if(dir == 's'){ // This moves the snake to the BOTTOM.
        x++;
        if(Field[x][y] != 0 && Field[x][y] != -1){GameOver();}
        if(x == N - 1){x = 0;} // From top, it will go to the bottom.
        if(Field[x][y] ==  -1){
            Cursed_Apple = 0;
            score += 5;
            Tail -= 2;
        }
        Head++;
        Field[x][y] = Head;
    }

    /* Take consideration of the position of Field[x][y] & the position of Field[0][0] as the top-most left portion. */
}

void TailRemove(){ // This updates the value of the tail of the snake. Since the tail follows where the head is, the tail also updates its value.

    for(i=0; i<N; i++){ // This for loop checks the entire field of play.
        for(j=0; j<M; j++){
            if(Field[i][j] == Tail){
                Field[i][j] = 0; // This turns that point into nothing (0).
            }
        }
    }
    Tail++; // This is where the updating is.

}

void GameOver(){ // This function makes the game over - this is when the snake eats its own body or eats the cursed_apple.
    printf("\a"); // beep Sound
    Sleep(1500); // In milliseconds, this is time.
    system("Cls"); // clear screen

    if(score > HighScore){ // This compares the current score with the high score.
        printf("    NEW HIGH SCORE: %d !!!!!!\n\n",score); // prints the new high score
        system("pause"); //
        f = fopen("highscore.txt", "w"); // This overwrites the score for the new high score. This is in "Write mode" (w)
        fprintf(f, "%d", score); // This edits and overwrites the score.
        fclose(f); // closes the file
    }

    system("Cls");
    printf("\n\n              GAME OVER !!!!!!");
    printf("                  Score: %d\n\n", score);
    printf("                  Press ENTER to play again or ESC to exit... \n");

    while(1){
        var = getch_noblock();
        if(var == 13){ // 13 is the ASCII key for ENTER.
            Game = 0; // continues the game
            snake_initialization(); // initialize back the game
            break; // break the while loop
        }
        else if(var == 27){ // 27 is the ASCII key for ESC.
            Game = 1; // ends the game
            break;
        }
    }
    system("Cls");
    //Game = 1; This signifies that the game loop is not anymore running. Game is over. Otherwise, if Game = 0, the game will continue.

}


void main(){

    snake_initialization();

    while(Game == 0){
        print_fieldOfplay(); // This the field of play which puts the place, snake and the cursed apple.
        ResetScreenPosition(); // This makes the field of play look constant since it will repeatedly print at the same coordinates.
        Random(); // This generates the cursed apple randomly in the field of play.
        movement(); // This function is for controlling the movement of the snake.
        TailRemove();// This function updates the tail of the snake.
        Sleep(speed); // This is how fast or slow the snake will be. This is the delay base on the variable speed.

    }


}
