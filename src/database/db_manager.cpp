#include "db_manager.h"


void DBManager::addDoctor(const Doctor &doctor) {
	DB::doctors.push_back(doctor);
}

bool DBManager::removeDoctor(int id) {
	for (int i = 0; i < DB::doctors.size(); i++) {
		if (DB::doctors[i].getID() == id) {
			DB::doctors.erase(DB::doctors.begin() + i);
			return true;
		}
	}
	return false;
}

std::optional<Doctor> DBManager::getDoctor(int id) {
	std::optional<Doctor> result;
	for (int i = 0; i < DB::doctors.size(); i++) {
		if (DB::doctors[i].getID() == id) {
			return DB::doctors[i];
		}
	}
	return std::nullopt;
}

void DBManager::addPatient(const Patient &patient) {
	DB::patients.push_back(patient);
}

bool DBManager::removePatient(int id) {
	for (int i = 0; i < DB::patients.size(); i++) {
		if (DB::patients[i].getID() == id) {
			DB::patients.erase(DB::patients.begin() + i);
			return true;
		}
	}
	return false;
}

std::optional<Patient> DBManager::getPatient(int id) {
	std::optional<Patient> result;
	for (int i = 0; i < DB::patients.size(); i++) {
		if (DB::patients[i].getID() == id) {
			return DB::patients[i];
		}
	}
	return std::nullopt;
}

void DBManager::addAdmin(const Admin &admin) {
	DB::admins.push_back(admin);
}

bool DBManager::removeAdmin(int id) {
	for (int i = 0; i < DB::admins.size(); i++) {
		if (DB::admins[i].getID() == id) {
			DB::admins.erase(DB::admins.begin() + i);
			return true;
		}
	}
	return false;
}

std::optional<Admin> DBManager::getAdmin(int id) {
	std::optional<Admin> result;
	for (int i = 0; i < DB::admins.size(); i++) {
		if (DB::admins[i].getID() == id) {
			return DB::admins[i];
		}
	}
	return std::nullopt;
}
std::vector<Doctor> DBManager::getAllDoctors() {
	return DB::doctors;
}
std::vector<Patient> DBManager::getAllPatients() {
	return DB::patients;
}
std::vector<Admin> DBManager::getAllAdmins() {
	return DB::admins;
}
bool DBManager::updateDoctorSchedule(int get_id, const Schedule &schedule) {
	for (auto &doctor : DB::doctors) {
		if (doctor.getID() == get_id) {
			doctor.setSchedule(schedule);
			return true;
		}
	}
	return false;
}
std::optional<Medical_Record> DBManager::getMedicalRecord(int get_id) {
	auto patients = getAllPatients();
	for (auto &patient : patients) {
		auto history = patient.gethistory().getMedicalHistory();
		for (auto &record : history) {
			if (record.getId() == get_id) {
				return record;
			}
		}
	}

	return std::nullopt;
}

bool DBManager::updateMedicalRecord(int get_id, const Medical_Record &record) {
	auto patients = getAllPatients();
    for (auto &patient : patients) {
        auto history = patient.gethistory().getMedicalHistory();
        for (auto &rec : history) {
            if (rec.getId() == get_id) {
                rec = record;
                return true;
            }
        }
    }
    return false;
}
