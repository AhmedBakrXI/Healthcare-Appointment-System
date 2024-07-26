#include <authenticator.h>

std::optional<Doctor> Authenticator::queryForDoctor(int id) {
	return db_manager.getDoctor(id);
}

std::optional<Patient> Authenticator::queryForPatient(int id) {
	return db_manager.getPatient(id);
}

std::optional<Admin> Authenticator::queryForAdmin(int id) {
	return db_manager.getAdmin(id);
}


bool Authenticator::authenticate(User &user) {
	auto doctors = db_manager.getDoctor(user.getID());
	if (doctors.has_value()) {
		return true;
	}

	auto patients = db_manager.getPatient(user.getID());
	if (patients.has_value()) {
        return true;
    }

	auto admins = db_manager.getAdmin(user.getID());
	if (admins.has_value()) {
        return true;
    }

    return false;
}