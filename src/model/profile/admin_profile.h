#pragma once
#include <string>
#include "../profile/profile.h"

class Admin_Profile : Profile
{

public:
    Admin_Profile(const std::string &name);

    std::string admingetName() const;

    void adminsetName(const std::string& newName);
};