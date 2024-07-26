#include "doctorService.h"
#include <iostream>

// Constructor to initialize the doctor service with a doctor and DB manager
doctorService::doctorService(const Doctor &doctor, DBManager &dbManager) : doctor(doctor), dbManager(dbManager) {
}

// Function to view a patient's information
std::optional<Patient> doctorService::viewPatient(int patientId) {
	return dbManager.getPatient(patientId);
}

// Function to get the doctor's schedule
Schedule doctorService::getSchedule() {
	return doctor.getSchedule();
}

// Function to print the doctor's schedule
void doctorService::viewSchedule() {
	Schedule schedule = getSchedule();
	std::vector<Appointment> appointments = schedule.getAppointment();

	std::cout << "Doctor's Schedule:\n";
	for (const auto &appointment : appointments) {
		std::cout << "Appointment ID: " << appointment.getId() << "\n"
		          << "Date: " << appointment.getDate() << "\n"
		          << "Patient ID: " << (appointment.getPatient().has_value() ? appointment.getPatient()->getID() : 0)
		          << "\n\n";
	}
}

// Function to update the doctor's schedule
bool doctorService::updateSchedule(const Schedule &schedule) {
}

// Function to update a patient's medical record
bool doctorService::updateMedicalRecord(const Medical_Record &record) {
}
