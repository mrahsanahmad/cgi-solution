#pragma once

#include <vector>
#include "User.h"
#include "Credentials.h"
#include "Module.h"
#include "defines.h"
#include <string>
#include <sstream>

namespace tl{
    static class TransactionLayer
    {
        using ID = unsigned int;
    public:
        /// <summary>
        /// Both Lecturers and Admins can login
        /// </summary>
        /// <param name="credentials"></param>
        /// <returns></returns>
        static businessModels::User GetUser(const businessModels::Credentials& credentials);

        /// <summary>
        /// Lecturer can see Modules
        /// </summary>
        /// <returns></returns>
        static const std::vector<businessModels::Module> GetAllModules();

        /// <summary>
        /// Lecturer can see modules for each student
        /// </summary>
        /// <param name="student"></param>
        /// <returns></returns>
        static const std::vector<businessModels::Module> GetModules(ID student);

        /// <summary>
        /// Lecturer can See Students
        /// </summary>
        /// <returns></returns>
        static const std::vector<businessModels::User> GetAllStudents();

        /// <summary>
        /// Lecturer can see Students assigned to modules
        /// </summary>
        /// <param name="module"></param>
        /// <returns></returns>
        static const std::vector<businessModels::User> GetStudents(ID module);

        /// <summary>
        /// Lecturer can view marks
        /// </summary>
        /// <param name="module"></param>
        /// <param name="student"></param>
        /// <returns></returns>
        static Marks ViewMarks(businessModels::Module& module, ID student);

        /// <summary>
        /// Lecturer can change marks
        /// </summary>
        /// <param name="module"></param>
        /// <param name="student"></param>
        /// <param name="marks"></param>
        /// <returns></returns>
        static const void ChangeMarks(ID module, ID student, Marks marks);

        /// <summary>
        /// Admins can assign students to modules
        /// </summary>
        /// <param name="module"></param>
        /// <param name="student"></param>
        static void AssignModule(ID module, ID student);

        /// <summary>
        /// Admins can assign Lecturers to Modules
        /// </summary>
        /// <param name="module"></param>
        /// <param name="student"></param>
        static void AssignModule(ID module, ID lecturers);

    private:
        static class TableNames
        {
            const std::string s_User = "user";
            const std::string s_Lecturer = "lecturers";
            const std::string s_Admin = "administrator";
            const std::string s_Modules = "modules";
            const std::string s_Student = "students";
        };
        static void RunQuery(const std::stringstream &ss);
    };
}

