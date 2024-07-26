#ifndef __DB_MANAGER_H__
#define __DB_MANAGER_H__

#include <vector>

#include "../model/user/admin.h"
#include "../model/user/doctor.h"
#include "../model/user/patient.h"
#include "db.h"

class DBManager {

public:

	static void addDoctor(const Doctor &doctor);
	static bool removeDoctor(int id);
	static std::optional<Doctor> getDoctor(int id);

	static void addPatient(const Patient &patient);
	static bool removePatient(int id);
	static std::optional<Patient> getPatient(int id);

	static void addAdmin(const Admin &admin);
	static bool removeAdmin(int id);
	static std::optional<Admin> getAdmin(int id);

	static std::vector<Doctor> getAllDoctors();
	static std::vector<Patient> getAllPatients();
	static std::vector<Admin> getAllAdmins();

	static bool updateDoctorSchedule(int get_id, const Schedule &schedule);

	static std::optional<Medical_Record> getMedicalRecord(int get_id);
	static bool updateMedicalRecord(int get_id, const Medical_Record & record);
};

#endif /* __DB_MANAGER_H__ */
