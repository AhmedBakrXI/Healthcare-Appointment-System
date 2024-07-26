cmake_minimum_required(VERSION 3.28)
project(src)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)
include_directories(database)
include_directories(model)
include_directories(model/profile)
include_directories(model/time)
include_directories(model/user)
include_directories(security)
include_directories(service)
include_directories(view)

add_executable(src
        database/db.cpp
        database/db.h
        database/db_manager.cpp
        database/db_manager.h
        model/profile/admin_profile.cpp
        model/profile/admin_profile.h
        model/profile/doctor_profile.cpp
        model/profile/doctor_profile.h
        model/profile/patient_profile.cpp
        model/profile/patient_profile.h
        model/profile/profile.cpp
        model/profile/profile.h
        model/time/appointment.cpp
        model/time/appointment.h
        model/time/medical_history.cpp
        model/time/medical_history.h
        model/time/medical_record.cpp
        model/time/medical_record.h
        model/time/schedule.cpp
        model/time/schedule.h
        model/user/admin.cpp
        model/user/admin.h
        model/user/doctor.cpp
        model/user/doctor.h
        model/user/patient.cpp
        model/user/patient.h
        model/user/user.cpp
        model/user/user.h
        security/authenticator.cpp
        security/authenticator.h
        service/admin_service.cpp
        service/admin_service.h
        service/doctor_service.cpp
        service/doctor_service.h
        service/patient_service.cpp
        service/patient_service.h
        service/user_service.cpp
        service/user_service.h
        view/ui_manager.cpp
        view/ui_manager.h
        main.cpp
        main.h)
