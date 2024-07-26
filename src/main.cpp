#include "main.h"
#include "model/profile/profile.h"
#include "model/time/medical_record.h"
#include "model/time/medical_history.h"
#include "model/user/user.h"
#include "model/user/patient.h"

int main() {
    std::vector<Medical_Record> records;
    Medical_History history(records);
    Profile hamada ("hamada ali");
    int id=1;
    std::string email = "hamada@gmail.com";
    std::string password= "hamada123";
    Patient p (1,email,password, hamada, history);
    std::cout << p.patientgetID() << std::endl;
    return 0;
}