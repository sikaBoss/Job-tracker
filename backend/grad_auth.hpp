#ifndef GRAD_AUTH_HPP
#define GRAD_AUTH_HPP

#include <string>

struct Graduate
{
    int id;
    std::string name;
    std::string email;
    std::string passwordHash;
    std::string skills;
    std::string education;
    std::string qualifications;
};

void graduateSignup();
void graduateLogin();

#endif
