#include "TransactionLayer.h"

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

namespace tl
{

    businessModels::User TransactionLayer::GetUser(const businessModels::Credentials& credentials)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    const std::vector<businessModels::Module> TransactionLayer::GetAllModules()
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    const std::vector<businessModels::Module> TransactionLayer::GetModules(businessModels::Student& student)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    const std::vector<businessModels::Student> TransactionLayer::GetAllStudents()
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    const std::vector<businessModels::Student> TransactionLayer::GetStudents(businessModels::Module& module)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    Marks TransactionLayer::ViewMarks(businessModels::Module& module, businessModels::Student& student)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    const void TransactionLayer::ChangeMarks(businessModels::Module& module, businessModels::Student& student, Marks marks)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    void TransactionLayer::AssignModule(businessModels::Module& module, businessModels::Student& student)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    void TransactionLayer::AssignModule(businessModels::Module& module, businessModels::Lecturer& lecturers)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    void TransactionLayer::RunQuery(const char* str)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }
}