#pragma once
#include "../user/user.h"
#include "../time/schedule.h"

class Doctor : public User{
private:
    Schedule schedule;
    
public:
    Doctor(int id, const std::string& email, const std::string& password, const Profile& profile, Schedule& schedule );
    
    Schedule getSchedule();

    int doctorgetID() const;

    std::string doctorgetEmail() const;

    Profile doctorgetProfile() const;

    void doctorsetProfile(const Profile &newprofile);
};

