#include "patient_service.h"
#include "../database/db_manager.h"
#include <iostream>

using namespace std;

// Constructor to initialize the patient
PatientService::PatientService(const Patient &patient) : patient(patient) {
}

// Function to view the medical history of the patient
void PatientService::viewMedicalHistory() {
	Medical_History history = patient.gethistory();
	vector<Medical_Record> records = history.getMedicalHistory();

	cout << "Medical History:\n";
	for (const auto &record : records) {
		cout << "Record ID: " << record.getId() << "\n"
		     << "Date: " << record.getDate() << "\n"
		     << "Description: " << record.getDescription() << "\n\n";
	}
}

// Function to get the medical history of the patient
Medical_History PatientService::getMedicalHistory() {
	return patient.gethistory();
}

// Function to book an appointment for the patient with a specified doctor
bool PatientService::bookAppointment(int doctorId, const Appointment &appointment) {

	Doctor doctor = getDoctor(int id);
	Schedule doctorSchedule = doctor.getSchedule();
	vector<Appointment> appointments = doctorSchedule.getAppointment();

	for (const auto &appt : appointments) {
		if (appt.getDate() == appointment.getDate()) {
			cerr << "Doctor is not available at the requested time!" << "\n";
			return false;
		}
	}

	doctorSchedule.addAppointment(appointment);

	cout << "Appointment booked successfully!" << "\n";
	return true;
}
