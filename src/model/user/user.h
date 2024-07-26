#pragma once
#include <string>
#include  "../profile/profile.h"

class User
{
private:
    int id;
    std::string email;
    std::string password;
    Profile profile;

public:
    User(int id, const std::string& email, const std::string& password, const Profile& profile);

    int getID() const;

    std::string getEmail() const;
 

    Profile getProfile() const;

    void setProfile(const Profile &newprofile);
};
 