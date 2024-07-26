#pragma once
#include <vector>
#include "../time/appointment.h"

class Schedule
{
private:
    vector<Appointment> schedule;

public:
    Schedule(const std::vector<Appointment>& schedule);

    std::vector<Appointment> getAppointment() const;
    
    void addAppointment(const Appointment& appointment);
};