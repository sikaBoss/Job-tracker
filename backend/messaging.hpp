#ifndef MESSAGING_HPP
#define MESSAGING_HPP

#include <string>

struct Message
{
    int messageId;
    int senderId;
    int receiverId;
    std::string message;
    std::string dateTime;
};

void sendMessage();
void getMessages();

#endif
