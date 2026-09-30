#ifndef EMPLOYER_AUTH_HPP
#define EMPLOYER_AUTH_HPP

#include <string>

struct Employer
{
    int id;
    std::string companyName;
    std::string email;
    std::string passwordHash;
    std::string companyDetails;
};

void employerSignup();
void employerLogin();

#endif
