JOB TRACKER BACKEND

This folder follows the backend architecture described in the project README.

Files:
- main.cpp              Starts the HTTP server.
- grad_auth.cpp/.hpp    Graduate authentication.
- employer_auth.cpp/.hpp Employer authentication.
- jobs.cpp/.hpp         Job management.
- applications.cpp/.hpp Application management.
- matching.cpp/.hpp     Graduate/job matching.
- messaging.cpp/.hpp    Messaging.
- database.cpp/.hpp     CSV database operations.
- httplib.h              Add this file yourself.
- json.hpp               Add this file yourself if needed.
- picosha2.h             Add this file yourself.

Important:
The three external header files are intentionally not included.
Place them directly inside this backend folder.

Expected structure:

backend/
    main.cpp
    grad_auth.cpp
    grad_auth.hpp
    employer_auth.cpp
    employer_auth.hpp
    jobs.cpp
    jobs.hpp
    applications.cpp
    applications.hpp
    matching.cpp
    matching.hpp
    messaging.cpp
    messaging.hpp
    database.cpp
    database.hpp
    httplib.h
    json.hpp
    picosha2.h

Compile from the backend folder after adding httplib.h:

g++ -std=c++17 main.cpp grad_auth.cpp employer_auth.cpp jobs.cpp applications.cpp matching.cpp messaging.cpp database.cpp -o job_tracker.exe -lws2_32

Run:

.\job_tracker.exe

Test:

http://localhost:8080/api/test
