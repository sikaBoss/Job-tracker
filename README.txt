JOB TRACKER SYSTEM

This project follows the supplied Job Tracker System README.

The project has:
- frontend: HTML/CSS/JavaScript
- backend: C++
- database: separate CSV files

IMPORTANT:
Add these files yourself to backend/:
1. httplib.h
2. json.hpp
3. picosha2.h

Do not put them in another folder. Put them directly inside backend/.

Backend compile command from the backend folder:

g++ -std=c++17 main.cpp grad_auth.cpp employer_auth.cpp jobs.cpp applications.cpp matching.cpp messaging.cpp database.cpp -o job_tracker.exe -lws2_32

Then run:

.\job_tracker.exe

Test the backend:

http://localhost:8080/api/test

The external libraries are intentionally left out so you can add your own copies.
