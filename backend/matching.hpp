#ifndef MATCHING_HPP
#define MATCHING_HPP

#include <string>

struct Match
{
    int graduateId;
    int jobId;
    std::string graduateSkills;
    std::string jobRequirements;
};

void findMatch();

#endif
