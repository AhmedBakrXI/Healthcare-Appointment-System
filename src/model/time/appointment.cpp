#include "appointment.h"

using namespace std;

Appointment::Appointment(int id, const optional<Patient> &patient, const optional<Doctor> &doctor, const tm &date)
    : id(id), patient(patient), doctor(doctor), date(date) {}

int Appointment::getId() const
{
    return id;
}

string Appointment::getDate() const
{
    stringstream ss;
    ss << put_time(&date, "%Y-%m-%d %H:%M:%S");
    return ss.str();
};

void Appointment::setDate(tm &new_date)
{
    date = new_date;
}
