#include "httplib.h"
#include "grad_auth.hpp"
#include "employer_auth.hpp"
#include "jobs.hpp"
#include "applications.hpp"
#include "matching.hpp"
#include "messaging.hpp"

#include <iostream>

using namespace std;

int main()
{
    httplib::Server server;

    server.Get("/api/test", [](const httplib::Request& req, httplib::Response& res)
    {
        res.set_content("Job Tracker Backend is working!", "text/plain");
    });

    cout << "Job Tracker Backend is running." << endl;
    cout << "http://localhost:8080" << endl;

    server.listen("localhost", 8080);

    return 0;
}
