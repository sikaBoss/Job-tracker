#include "server.hpp"
#include "httplib.h"
#include <iostream>
using namespace std;
using namespace httplib;

void startServer(){
    Server ser;
    ser.Get("/api/test", [](const Request& req, Response& res){
        res.set_content(
            R"({"Success":true,"message":"Job Tracker backend is working"})",
                "application/json"
        );
    });

    cout << "Job Tracker backend is running..." << endl;
    cout << "open: http://localhost:8080/api/test" << endl;

    ser.listen("0.0.0.0", 8080);
}