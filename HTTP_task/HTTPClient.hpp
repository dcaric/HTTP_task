//
//  HTTPClient.hpp
//  HTTP_task
//
//  Created by Dario Caric on 01.04.2024..
//

#ifndef HTTPClient_hpp
#define HTTPClient_hpp

#include <stdio.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Data {
    string URL;
    int PORT = 80;
};

class HTTPClient {
    
private:
    Data data;
    
    string generateRandomString(size_t);
    
    
public:
    HTTPClient(string);
    HTTPClient(string, int);
    Data getParams();
    
    // simulate GET and POST methods
    string GET();
    string POST();
    
};

#endif /* HTTPClient_hpp */
