/* -----------------------------------------------------------
   Program 2: Cuatro

   Class: CS 141, Spring 2022.  Tues 4pm lab, MWF 10am Lecture
   System: CLion
   Author: Krishna Chaitanya Bavana (Krish Bavana)
-----------------------------------------------------------
 */
#include <iostream> // for cin and cout
#include <iomanip> // for setw() method for spaces in the displayBoard()
#include <cctype> // for checking weather the type of the text is upper or lower, used for win
using namespace std; //for not prefixing std, every where
char p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16; //sixteen char board pieces for sixteen characters in the board and made it global to access it from everywhere

string upperRowPiecesToPlay = "OO/CC  II/ZZ"; //string used for displaying the upper pieces available after every move, made it gloabal to access it from any where in the function
string lowerRowPiecesToPlay = "oo/cc  ii/zz"; //string used for displaying the loweer pieces avaiable after every move, made it gloabal to access it from any where in the function

void displayInstructions(){ //this function is for displaying all the instructions in the beginning of the game, it is beening called only once in the main

    cout << "Welcome to the game of Cuatro, where you try to complete a set      \n" //instructions text
         << "of four pieces that are alike.  Players take turns making moves.    \n"
         << "On each move your OPPONENT chooses the piece, then YOU get to       \n"
         << "place it on the board.  If you create a set of four alike when      \n"
         << "you place your piece, then you win!       \n"
         << "\n"
         << "A set of four alike can be completed by using four all upper (or all\n"
         << "lower) case characters, four all vowels (or all consonants), or four\n"
         << "all curved (or all straight-lined). Curved letters are 'O' and 'C'\n"
         << "(upper or lower), and straight-line letters are 'I' and 'Z' (upper or\n"
         << "lower). Groups of four can be created in a row, column, diagonal, or\n"
         << "corner quadrant.\n"
         << "\n"
         << "When prompted for input you may also enter 'x' or 'X' to exit." << endl;
}// end displayInstructions()

void displayBoard(){//this function is used for displaying the board, it is called in the main() multiple times depending on the condition, this is base for the entire game

    cout<<endl; //all the gloabal variables are being called in this function
    cout<<" ---------"<<setw(4)<<" "<<"Square #"<<endl; //used setw() for setting up the specific length in between
    cout<<"|"<<" "<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<" "<<"|"<<setw(2)<<""<<"1"<<setw(2)<<""<<"2"<<setw(2)<<""<<"3"<<setw(2)<<""<<"4 "<<endl;
    cout<<"|"<<" "<<p5<<" "<<p6<<" "<<p7<<" "<<p8<<" "<<"|"<<setw(2)<<""<<"5"<<setw(2)<<""<<"6"<<setw(2)<<""<<"7"<<setw(2)<<""<<"8 "<<endl;
    cout<<"|"<<" "<<p9<<" "<<p10<<" "<<p11<<" "<<p12<<" "<<"|"<<setw(2)<<""<<"9"<<setw(1)<<""<<"10"<<setw(1)<<""<<"11"<<setw(1)<<""<<"12 "<<endl;
    cout<<"|"<<" "<<p13<<" "<<p14<<" "<<p15<<" "<<p16<<" "<<"|"<<setw(1)<<""<<"13"<<setw(1)<<""<<"14"<<setw(1)<<""<<"15"<<setw(1)<<""<<"16 "<<endl;
    cout<<" --------- "<<endl;
    cout<<setw(5)<<""<<"Pieces:"<<setw(5)<<""<<"Curved Straight"<<endl;
    cout<<setw(11)<<""<<"Upper: "<<upperRowPiecesToPlay<<endl; //gloabal variables are been called here.
    cout<<setw(11)<<""<<"Lower: "<<lowerRowPiecesToPlay<<endl;
    cout<<setw(17)<<""<<"Vowel/Consonant  "<<endl;
}//end displayBoard()

bool makeMove(int position, char piece){ //This function is switching the '.' to what ever the user inputs and makes sure the postion is not occupied, sending two parameter position and piece to only access the values from main, written this function as boolean to get true or false values
    switch (position) { //switches cases for changing the position according to the user inputs
        default:
            return false;
        case 1: //worte sixteen cases for the pieces
            if (p1 == '.'){
                p1 = piece;
                return true;
            }
            break;
        case 2:
            if (p2 == '.'){
                p2 = piece;
                return true;
            }
            break;
        case 3:
            if (p3 == '.'){
                p3 = piece;
                return true;
            }
            break;
        case 4:
            if (p4 == '.'){
                p4 = piece;
                return true;
            }
            break;
        case 5:
            if (p5 == '.'){
                p5 = piece;
                return true;
            }
            break;
        case 6:
            if (p6 == '.'){
                p6 = piece;
                return true;
            }
            break;
        case 7:
            if (p7 == '.'){
                p7 = piece;
                return true;
            }
            break;
        case 8:
            if (p8 == '.'){
                p8 = piece;
                return true;
            }
            break;
        case 9:
            if (p9 == '.'){
                p9 = piece;
                return true;
            }
            break;
        case 10:
            if (p10 == '.'){
                p10 = piece;
                return true;
            }
            break;
        case 11:
            if (p11 == '.'){
                p11 = piece;
                return true;
            }
            break;
        case 12:
            if (p12 == '.'){
                p12 = piece;
                return true;
            }
            break;
        case 13:
            if (p13 == '.'){
                p13 = piece;
                return true;
            }
            break;
        case 14:
            if (p14 == '.'){
                p14 = piece;
                return true;
            }
            break;
        case 15:
            if (p15 == '.'){
                p15 = piece;
                return true;
            }
            break;
        case 16:
            if (p16 == '.'){
                p16 = piece;
                return true;
            }
            break;
    }//end switch cases
    return false;
}//end makeMove()

bool pieceChecker(char inPiece){ //this function is for checking, weather is the piece is valid or not, passing one char value into the parameter from the user input in the main
    return !(upperRowPiecesToPlay.find(inPiece) == string::npos &&
             lowerRowPiecesToPlay.find(inPiece) == string::npos);
} //end pieceChecker()

string spaceMaker(string inPieces, char replaceChar) { //this method is for removing the chracter from the baord, that has been inputed by the user, two parameters for piece and the text
    for (int i = 0; i < inPieces.length(); i++) { //running a loop to through to check through every single character
        if (inPieces[i] == replaceChar){ //if the chracter matches the character in the string, then it replaces with white space
            inPieces[i] = ' '; //replacing with white space
            break;
        }
    }
    return inPieces; //returning to assign the new values to old string
}//end spaceMaker()

bool upperCheck(char winPiece1 , char winPiece2, char winPiece3, char winPiece4){ //this function is used for checking the win, if the passing chracters are all upper case, then it is a win
    return isupper(winPiece1) && isupper(winPiece2) && isupper(winPiece3) && isupper(winPiece4);
}//end upperCheck()

bool lowerCheck(char winPiece1 , char winPiece2, char winPiece3, char winPiece4){ //this function is used for checking the win, if the passing chracters are all lower case, then it is a win
    return islower(winPiece1) && islower(winPiece2) && islower(winPiece3) && islower(winPiece4);
}//end lowerCheck()

bool curvedCheck(char winPiece1 , char winPiece2, char winPiece3, char winPiece4){ //this function is used for checking the win, if the passing chracters are all curved chracracters, then it is a win
    return (winPiece1 == 'o' || winPiece1 == 'O' || winPiece1 == 'C' || winPiece1 == 'c') && //returning true if all the four passing chracters are curved
           (winPiece2 == 'o' || winPiece2 == 'O' || winPiece2 == 'C' || winPiece2 == 'c') && //only returns if all four characters are curved
           (winPiece3 == 'o' || winPiece3 == 'O' || winPiece3 == 'C' || winPiece3 == 'c') &&
           (winPiece4 == 'o' || winPiece4 == 'O' || winPiece4 == 'C' || winPiece4 == 'c');
}//end curvedCheck()

bool straightCheck(char winPiece1 , char winPiece2, char winPiece3, char winPiece4){ //this function is used for checking the win, if the passing chracters are all striaght chracracters, then it is a win
    return (winPiece1 == 'Z' || winPiece1 == 'z' || winPiece1 == 'I' || winPiece1 == 'i') && //returning true if all the four passing chracters are straight
           (winPiece2 == 'Z' || winPiece2 == 'z' || winPiece2 == 'I' || winPiece2 == 'i') &&//only returns if all four chracters are straight
           (winPiece3 == 'Z' || winPiece3 == 'z' || winPiece3 == 'I' || winPiece3 == 'i') &&
           (winPiece4 == 'Z' || winPiece4 == 'z' || winPiece4 == 'I' || winPiece4 == 'i');
}//end StraightChecker()

bool vowelCheck(char winPiece1 , char winPiece2, char winPiece3, char winPiece4){ //this function is used for checking the win, if the passing chracters are all vowels from the pieces, then it is a win
    return (winPiece1 == 'o' || winPiece1 == 'O' || winPiece1 == 'I' || winPiece1 == 'i') &&//returning true if all the four passing chracters are vowels
           (winPiece2 == 'o' || winPiece2 == 'O' || winPiece2 == 'I' || winPiece2 == 'i') &&
           (winPiece3 == 'o' || winPiece3 == 'O' || winPiece3 == 'I' || winPiece3 == 'i') &&
           (winPiece4 == 'o' || winPiece4 == 'O' || winPiece4 == 'I' || winPiece4 == 'i');
}//end vowelCheck()

bool consonantCheck(char winPiece1 , char winPiece2, char winPiece3, char winPiece4){ //this function is used for checking the win, if the passing chracters are all consonant from the pieces, then it is a win
    return (winPiece1 == 'Z' || winPiece1 == 'z' || winPiece1 == 'C' || winPiece1 == 'c') &&//only returns if all four chracters are straight
           (winPiece2 == 'Z' || winPiece2 == 'z' || winPiece2 == 'C' || winPiece2 == 'c') &&
           (winPiece3 == 'Z' || winPiece3 == 'z' || winPiece3 == 'C' || winPiece3 == 'c') &&
           (winPiece4 == 'Z' || winPiece4 == 'z' || winPiece4 == 'C' || winPiece4 == 'c');
}//end ConsonantCheck

bool winChecker(char winPiece1 , char winPiece2, char winPiece3, char winPiece4){ //for passing all the six types wins into one function, to test it later in another function
    if(winPiece1 == '.' || winPiece2 == '.' || winPiece3 == '.' || winPiece4 == '.' ){ //if all all four passing char are dots, then it is not a win
        return false; //it returns false
    }
    if(upperCheck(winPiece1, winPiece2, winPiece3, winPiece4)){ //to check if the passing chracters are all upper, calling this function
        return true;//returns true
    }
    if(lowerCheck(winPiece1, winPiece2, winPiece3, winPiece4)){ //to check if the passing chracters are all lower, calling this function
        return true;//returns true
    }
    if(vowelCheck(winPiece1, winPiece2, winPiece3, winPiece4)){ //to check if the passing chracters are all vowel, calling this function
        return true;//returns true
    }
    if(consonantCheck(winPiece1, winPiece2, winPiece3, winPiece4)){ //to check if the passing chracters are all consonants, calling this function
        return true;//returns true
    }
    if(curvedCheck(winPiece1, winPiece2, winPiece3, winPiece4)){ //to check if the passing chracters are all curved, calling this function
        return true;//returns true
    }
    if(straightCheck(winPiece1, winPiece2, winPiece3, winPiece4)){ //to check if the passing chracters are all straight, calling this function
        return true; //returns true
    }
    return false;
}//end checkWinner()

bool finalWin(){ //this function is the key to the enitre win function, sending in four characters each time, 14 differents ways, 4 vertically, 4 horizontally, 4 quadrants and two dignoally
    if(winChecker(p1, p2, p3, p4)){ //as we already know the combitions, we send them in. FOR HORIZONTAL LINE 1
        return true;
    }
    if(winChecker(p5, p6, p7, p8)){ //FOR HORIZONTAL LINE 2
        return true;
    }
    if(winChecker(p9, p10, p11, p12)){ //FOR HORIZONTAL LINE 3
        return true;
    }
    if(winChecker(p13, p14, p15, p16)){ //FOR HORIZONTAL LINE 4
        return true;
    }
    if(winChecker(p1, p5, p9, p13)){ //FOR VERITCAL LINE 1
        return true;
    }
    if(winChecker(p2, p6, p10, p14)){//FOR VERITCAL LINE 2
        return true;
    }
    if(winChecker(p3, p7, p11, p15)){//FOR VERITCAL LINE 3
        return true;
    }
    if(winChecker(p4, p8, p12, p16)){//FOR VERITCAL LINE 4
        return true;
    }
    if(winChecker(p1, p2, p5, p6)){ //FOR QUADRANT 1
        return true;
    }
    if(winChecker(p3, p4, p7, p8)){ //FOR QUADRANT 2
        return true;
    }
    if(winChecker(p9, p10, p13, p14)){ //FOR QUADRANT 3
        return true;
    }
    if(winChecker(p11, p12, p15, p16)){ //FOR QUADRANT 4
        return true;
    }
    if(winChecker(p1, p6, p11, p16)){ //FOR DIGONAL LINE 1
        return true;
    }
    if (winChecker(p4, p7, p10, p13)){ //FOR DIGONAL LINE 2
        return true;
    }
    return false;
}//end finalWin()

int main(){ //main function to call all the function to run the board
    p1=p2=p3=p4=p5=p6=p7=p8=p9=p10=p11=p12=p13=p14=p15=p16= '.'; //intilizing . to all the positions created in the global
    displayInstructions(); //To display displayBoard()
    displayBoard(); //To display displayBoard()
    int position; //creating a new variable, so the user can input the position
    char piece; //creating a new variable, so the user can input the piece
    int moveNumber = 1; //to make sure the moves are not greater than 16
    int playerOne = 1; //created two players to keep tracking of their game
    int playerTwo = 2; //created two players to keep tracking of their game
    while (moveNumber<=16)//if the moveNumber is less than or equal 16 then the game will run
    {
        cout<<moveNumber<<". "<<"Player "<< playerOne<<" enter piece, and Player "; //cout statement to display the players acitivity
        cout<<playerTwo<< " enter destination: ";

        cin>>piece;//inputting the piece
        if (piece == 'x' || piece == 'X') //if the piece is = 'x' or 'X', then the program will exit
        {
            cout<<"Exiting program..."<<endl;//cout statement
            exit(0);//exit the program
        }
        cin>>position; //so the next player can input the position

        if(pieceChecker(piece)){ //if the pieceChecker is true and all the pieces are valid, then the game will continue, if not the same player will be playing
            if (position >= 1 && position <= 16){ //if the inputed position is not in range, then the game will not continue, so the same player plays it
                if (!makeMove(position, piece)) { //if the destination is already occupied then, the makeMove will not not return, so it will say the destination is occupied
                    cout<<"*** Sorry, that destination is occupied.  Please retry."<<endl;
                }
                else { //if the moves are valid, then the program will finally go inside to exectue to
                    upperRowPiecesToPlay = spaceMaker(upperRowPiecesToPlay, piece); // changing the string according to the pieces updates
                    lowerRowPiecesToPlay = spaceMaker(lowerRowPiecesToPlay, piece); // changing the string according to the pieces updates
                    if (finalWin()) { //if win
                        displayBoard(); //board displays
                        cout << "*** Player " << playerTwo << " you won!" << endl; //player will be declared
                        exit(-1);// exits the program
                    }
                    playerOne = (playerOne == 1) ? 2 : 1; //if statements for switches players are a sucessful turn
                    playerTwo = (playerTwo == 2) ? 1 : 2; //if statements for switches players are a sucessful turn
                    moveNumber++; //to increase the count of number tracking the turns for the loop
                }
                displayBoard(); //to display the board after every move
            }
            else{
                cout<<"*** Sorry, that destination is invalid.  Please retry."<<endl; //cout statement for the destination being invalid
                displayBoard();//displays board even after the failed try
            }
        }
        else{
            cout<<"*** Sorry, that is an invalid piece.  Please retry."<<endl; //cout statement for the piece being invalid
            displayBoard();//displays board even after the failed try
        }
    }
    return 0;//to satisfy c++
}//end main()