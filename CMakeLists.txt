cmake_minimum_required(VERSION 3.10)

# Project name
project(HealthcareAppointmentSystem)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(
    src/database
    src/model/profile
    src/model/time
    src/model/user
    src/security
    src/service
    src/view
)

# Source files
set(SOURCES
    src/database/db_manager.cpp
    src/database/db.cpp
    src/model/profile/admin_profile.cpp
    src/model/profile/doctor_profile.cpp
    src/model/profile/patient_profile.cpp
    src/model/time/appointment.cpp
    src/model/time/medical_history.cpp
    src/model/time/medical_record.cpp
    src/model/time/schedule.cpp
    src/model/user/admin.cpp
    src/model/user/doctor.cpp
    src/model/user/patient.cpp
    src/model/user/user.cpp
    src/security/authenticator.cpp
    src/service/admin_service.cpp
    src/service/doctor_service.cpp
    src/service/patient_service.cpp
    src/service/user_service.cpp
    src/view/ui_manager.cpp
    src/main.cpp
)

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES})
