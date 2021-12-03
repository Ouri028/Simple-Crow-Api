#pragma once
#include <iostream>
#include <string>
#include "../crow/crow_all.h"
#include "../httplib/httplib.h"
#include "../nlohmann/json.hpp"

using namespace nlohmann;

class Server {
public:
    Server();
    void Start(int port=3000);
};