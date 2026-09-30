#ifndef JOBS_HPP
#define JOBS_HPP

#include <string>

struct Job
{
    int jobId;
    int employerId;
    std::string title;
    std::string description;
    std::string requirements;
    std::string location;
    std::string deadline;
};

void createJob();
void getJobs();
void searchJobs();
void updateJob();
void deleteJob();

#endif
