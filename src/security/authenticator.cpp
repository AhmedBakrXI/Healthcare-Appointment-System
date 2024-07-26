#include <authenticator.h>

std::optional<Doctor> Authenticator::queryForDoctor(std::string email) {
	auto doctors = db_manager.getAllDoctors();
	for (const auto &doctor : doctors) {
        if (doctor.getEmail() == email) {
            return doctor;
        }
    }

	return std::nullopt;
}

std::optional<Patient> Authenticator::queryForPatient(std::string email) {
	auto patients = db_manager.getAllPatients();
    for (const auto &patient : patients) {
        if (patient.getEmail() == email) {
            return patient;
        }
    }

    return std::nullopt;
}

std::optional<Admin> Authenticator::queryForAdmin(std::string email) {
	auto admins = db_manager.getAllAdmins();
	for (const auto &admin : admins) {
		if (admin.getEmail() == email) {
			return admin;
		}
	}

	return std::nullopt;
}
bool Authenticator::checkPassword(User user, std::string password) {
	return user.getPassword() == password; // replace with actual password hashing and comparison logic
}

bool Authenticator::authenticate(User &user) {
	auto doctor = queryForDoctor(user.getEmail());

	if(doctor.has_value()) {
		return checkPassword(doctor.value(), user.getPassword());
	}

	auto patient = queryForPatient(user.getEmail());
	if(patient.has_value()) {
        return checkPassword(patient.value(), user.getPassword());
    }

	auto admin = queryForAdmin(user.getEmail());
	if(admin.has_value()) {
        return checkPassword(admin.value(), user.getPassword());
    }

    return false;
}