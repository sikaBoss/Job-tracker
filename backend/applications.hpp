#ifndef APPLICATIONS_HPP
#define APPLICATIONS_HPP

#include <string>

struct Application
{
    int applicationId;
    int graduateId;
    int jobId;
    std::string status;
};

void submitApplication();
void checkApplication();
void viewApplications();
void updateApplicationStatus();

#endif
