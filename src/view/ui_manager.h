#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include "model/user/user.h"
#include "string"
#include "iostream"
#include "user_service.h"
class ui_manager{
private:
    User user;
    UserService userService;
    void getUserDetails();

public:
    void setUserService(const UserService &userService);
    void viewHomePage();
    void viewLoginPage();
    void viewRegisterPage();
};

#endif

