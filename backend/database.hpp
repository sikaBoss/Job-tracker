#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <string>

void readUsers();
void saveUser(
    std::string name,
    std::string email,
    std::string passwordHash,
    std::string skills,
    std::string education,
    std::string qualifications
);

void readEmployers();
void saveEmployer(
    std::string companyName,
    std::string email,
    std::string passwordHash,
    std::string companyDetails
);

void readJobs();
void saveJob(
    int employerId,
    std::string title,
    std::string description,
    std::string requirements,
    std::string location,
    std::string deadline
);

#endif
