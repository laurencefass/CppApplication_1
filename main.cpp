/* 
 * File:   main.cpp
 * Author: laurencefass
 *
 * Created on 08 February 2013, 13:19
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void hello()
{
    int x;
    
    cout << "hello world: enter number ";
    cin >> x;
    cout << "you entered " << x;

    // added comment to test jenkins
}

/*
 * 
 */
int main(int argc, char** argv) {
    hello();
    return 0;
}
