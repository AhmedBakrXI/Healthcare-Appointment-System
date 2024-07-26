#pragma once
#include "../user/doctor.h"
#include "../user/patient.h"
#include <optional>
#include <ctime>
#include <sstream>
#include <iomanip>

class Appointment
{
private:
    int id;
    std::optional<Patient> patient;
    std::optional<Doctor> doctor;
    std::tm date;

public:
    Appointment(int id, const std::optional<Patient> &patient, const std::optional<Doctor> &doctor, const std::tm &date);

    int getId() const;

    std::string getDate() const;

    void setDate(std::tm &new_date);
};