#ifndef __DB_MANAGER_H__
#define __DB_MANAGER_H__

#include <stdio.h>
#include <vector>

#include "../model/user/admin.h"
#include "../model/user/doctor.h"
#include "../model/user/patient.h"
#include "../model/user/user.h"
#include "db.h"

class DBManager {
private:
	DB db;

public:
	DBManager(DB db);
	~DBManager();

	void addDoctor(const Doctor &doctor);
	bool removeDoctor(int id);
	std::optional<Doctor> getDoctor(int id);

	void addPatient(const Patient &patient);
	bool removePatient(int id);
	std::optional<Patient> getPatient(int id);

	void addAdmin(const Admin &admin);
	bool removeAdmin(int id);
	std::optional<Admin> getAdmin(int id);
};

#endif /* __DB_MANAGER_H__ */