#include <iostream>

using namespace std;


void showMenu() {
    
    
    cout << "Here are you options:" << endl << endl;
    cout << "Option 1: dance" << endl;
    cout << "Option 2: boogie" << endl;
    cout << "Option 3: swing" << endl << endl;
    
} // text doesn't actually save anything so you don't need a return value.

//SOLUTION

int menuSelection () { // <------- CHANGE THE RETURN TYPE. 'void' (no return type) to 'int' (returns an interger)
    
    cout << "Please enter your selection (number 1,2 or 3): " << flush;
    
    int input; // Scope if fixated within the function it's in. THEREFORE..
    
    cin>> input;
    
    return input; // return the value of the input interger (specifying which interger to return)
}


int main() {
    
    showMenu();
    menuSelection();
    
    int input = menuSelection(); // value of 'input' = OUTPUT OF 'menuSelection()'
    
    //TAKE NOTE: 'int input' (main function) and 'int input' (menuSelection) ARE COMPLETELY UNRELATED.
    
    switch(input) { // THEREFORE: 'input' isn't recognised!!
            
        case 1:
            cout << "Lets dance!" << endl;
            break;
        case 2:
            cout << "Lets boogie!" << endl;
            break;
        case 3:
            cout << "Swing with meh!" << endl;
            break;
        default:
            cout << "invalid input" << endl;
            return main();
            
    }
    
    // SOLUTION: THE INITIAL FUNCTION. (showMenu) MUST RETURN A VALUE TO THE CALLIGN FUNCTION (MAIN)
    
    return 0;
}