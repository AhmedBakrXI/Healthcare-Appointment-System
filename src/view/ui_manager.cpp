#include "ui_manager.h"

const int LOGIN_OPTION=1;
const int REGISTER_OPTION=2;

const int PATIENT_OPTION=1;
const int DOCTOR_OPTION=2;
const int ADMIN_OPTION=3;
void ui_manager::viewHomePage() {
    int option;
    std::cout << "Welcome to healthcare appointment system\nChoose an option\n1- Login\n2- Register\n";
    std::cin >> option;
    switch (option) {
        case LOGIN_OPTION: viewLoginPage(); break;
        case REGISTER_OPTION: viewRegisterPage(); break;
        default: std::cout<<"Invalid option"; viewHomePage(); break;
    }
}

void ui_manager::viewLoginPage(){
    std::string returnMessage;
    getUserDetails();
    returnMessage=userService.login(user);
    std::cout<<returnMessage;
}

void ui_manager::viewRegisterPage(){
    std::string returnMessage;
    int option;
    std::cout<<"Do you want to register as a\n1- Patient\n2- Doctor\n3- Admin";
    std::cin>>option;
    getUserDetails();
    returnMessage=userService.reg(user,option);
    std::cout<<returnMessage;
}

void ui_manager::getUserDetails() {
    std::string email;
    std::string password;
    std::cout<<"Please enter youe details\nEmail: ";
    std::getline(std::cin, email);
    std::cout<<"Password: ";
    std::getline(std::cin, password);
    user.setPassword(password);
    user.setEmail(email);
}

void ui_manager::setUserService(const UserService &userService) {
    ui_manager::userService = userService;
}
