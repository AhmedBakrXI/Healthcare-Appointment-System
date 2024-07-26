
#include "user.h"

using namespace std;

User::User(int id, const string &email, const string &password, const Profile &profile)
    : id(id), email(email), password(password), profile(profile) {}

int User::getID() const
{
    return id;
}

string User::getEmail() const
{
    return User::email;
}

Profile User::getProfile() const
{
    return profile;
}

void User::setProfile(const Profile &newprofile)
{
    profile = newprofile;
}
