#include "database.hpp"

#include <fstream>
#include <iostream>

using namespace std;

void readUsers()
{
    ifstream file("../database/users.csv");

    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void saveUser(
    string name,
    string email,
    string passwordHash,
    string skills,
    string education,
    string qualifications)
{
    ofstream file("../database/users.csv", ios::app);

    file << name << ","
         << email << ","
         << passwordHash << ","
         << skills << ","
         << education << ","
         << qualifications << endl;

    file.close();
}

void readEmployers()
{
    ifstream file("../database/employers.csv");

    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void saveEmployer(
    string companyName,
    string email,
    string passwordHash,
    string companyDetails)
{
    ofstream file("../database/employers.csv", ios::app);

    file << companyName << ","
         << email << ","
         << passwordHash << ","
         << companyDetails << endl;

    file.close();
}

void readJobs()
{
    ifstream file("../database/jobs.csv");

    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void saveJob(
    int employerId,
    string title,
    string description,
    string requirements,
    string location,
    string deadline)
{
    ofstream file("../database/jobs.csv", ios::app);

    file << employerId << ","
         << title << ","
         << description << ","
         << requirements << ","
         << location << ","
         << deadline << endl;

    file.close();
}
