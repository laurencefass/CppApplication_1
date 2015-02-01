/* 
 * File:   main.cpp
 * Author: laurencefass
 *
 * Created on 08 February 2013, 13:19
 * 
 * change history
 *
 * comment added in branch3a to be merged into branch3
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void hello()
{
    int x;
    int y;
    
    cout << "hello world: enter number ";
    cin >> x;
    cout << "you entered " << x;

    cout << "end";
    
    // added comment to test jenkins
    // new comment
    // another new comment
    

}

/*
 * 
 */
int main(int argc, char** argv) {
    hello();
    hello();
    return 0;
}
