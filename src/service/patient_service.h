#include "../time/appointment.h"
#include "../time/medical_history.h"
#include "../user/patient.h"

class PatientService {

  private:
	Patient patient;

  public:
	// Constructor to initialize the patient
	PatientService(const Patient &patient);

	// Function to view the medical history of the patient
	void viewMedicalHistory();

	// Function to get the medical history of the patient
	Medical_History getMedicalHistory();

	// Function to book an appointment for the patient with a specified doctor
	bool bookAppointment(int doctorId, Appointment appointment);
}