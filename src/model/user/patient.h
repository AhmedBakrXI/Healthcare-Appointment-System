#pragma once
#include "../user/user.h"
#include "../time/medical_history.h"



class Patient:User{
private:
    Medical_History history;
    
public:
    Patient(int id, const std::string& email, const std::string& password, const Profile& profile, const Medical_History& history );

    Medical_History gethistory() const;
    
    int patientgetID() const;

    std::string patientgetEmail() const;

    Profile patientgetProfile() const;

    void patientsetProfile(const Profile &newprofile);
}; 