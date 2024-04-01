//
//  HTTPClient.cpp
//  HTTP_task
//
//  Created by Dario Caric on 01.04.2024..
//

#include "HTTPClient.hpp"
#include <iostream>

using namespace std;
/**
 Generates random string
 - parameter length: string lenght which will be generated
 */
string HTTPClient::generateRandomString(size_t length = 10) {
    
    // generate random string made from lower and capilat latter and numbers
    auto randchar = []() -> char {
        const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[rand() % max_index];
    };
    
    string result;
    result.reserve(length);
    
    for (size_t i =0; i < length; i++) {
        result = result + randchar();
    }
    
    return result;;
}

HTTPClient::HTTPClient(string url) {
    this->data.URL = url;
}

HTTPClient::HTTPClient(string url, int port) {
    this->data.URL = url;
    this->data.PORT = port;
}

Data HTTPClient::getParams() {
    return data;
}

string HTTPClient::GET() {
    return "GET: " + generateRandomString();
}

string HTTPClient::POST() {
    return "POST: " + generateRandomString();;
}
 
