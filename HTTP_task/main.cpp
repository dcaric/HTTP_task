//
//  main.cpp
//  HTTP_task
//
//  Created by Dario Caric on 01.04.2024..
//

#include <iostream>
#include "HTTPClient.hpp"

using namespace std;

int main() {

    // set seed for random function
    // srand(static_cast<unsigned int>(time(nullptr)));
    srand((time(nullptr)));
    
    // Create an HTTPClient instance for https://www.bla.com on port 443
    HTTPClient client("https://www.bla.com", 443);
    

    // Simulate retrieving POST data
    cout << "URL:" << client.getParams().URL << " PORT:" << client.getParams().PORT << endl;
    cout << client.POST() << endl;
    cout << client.GET() << endl;


    return 0;
}
