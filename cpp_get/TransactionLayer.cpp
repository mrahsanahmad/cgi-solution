#include "TransactionLayer.h"


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

    const std::vector<businessModels::Module> TransactionLayer::GetModules(ID student)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    const std::vector<businessModels::User> TransactionLayer::GetAllStudents()
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    const std::vector<businessModels::User> TransactionLayer::GetStudents(ID module)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    Marks TransactionLayer::ViewMarks(businessModels::Module& module, ID student)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    const void TransactionLayer::ChangeMarks(ID module, ID student, Marks marks)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    void TransactionLayer::AssignModule(ID module, ID student)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    void TransactionLayer::AssignModule(ID module, ID lecturers)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }

    void TransactionLayer::RunQuery(const std::stringstream& ss)
    {
        std::stringstream ss;
        //RunQuery(ss);
        throw 1;
    }
}