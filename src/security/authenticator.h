#ifndef __AUTH_H__
#define __AUTH_H__

#include "admin.h"
#include "db_manager.h"
#include "doctor.h"
#include "patient.h"

#include <iostream>
#include <optional>

class Authenticator {
private:
	DBManager db_manager;

	std::optional<Doctor> queryForDoctor(int id);
	std::optional<Patient> queryForPatient(int id);
	std::optional<Admin> queryForAdmin(int id);

public:
	explicit Authenticator(const DBManager &db_manager) : db_manager(db_manager) {}
	bool authenticate(User& user);
};

#endif