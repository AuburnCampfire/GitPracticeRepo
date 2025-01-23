/**
 * Author: Matthew Hansen
 * Date: 1/23/2025
 * 
 * Example Hello World c++ program for use on the git practice repo
 */

//note: in our actual project, we probably shouldn't use this namespace, unless we determine it's a small enough scope to be easier.
//using the standard namespace can lead to naming conflicts if you try to import certain other libraries
//if you want to know why this is the case, see https://youtu.be/4NYC-VU-svE?t=196
using namespace std;

#include <iostream>

/**
 * Main function for the example hello world program
 * @returns 0 on success
 */
int main(int argc, char** argv){
    cout << "Hello World" << endl;
    return 0;
}

