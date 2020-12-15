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
        static const std::vector<businessModels::Module> GetModules(businessModels::Student& student);

        /// <summary>
        /// Lecturer can See Students
        /// </summary>
        /// <returns></returns>
        static const std::vector<businessModels::Student> GetAllStudents();

        /// <summary>
        /// Lecturer can see Students assigned to modules
        /// </summary>
        /// <param name="module"></param>
        /// <returns></returns>
        static const std::vector<businessModels::Student> GetStudents(businessModels::Module& module);

        /// <summary>
        /// Lecturer can view marks
        /// </summary>
        /// <param name="module"></param>
        /// <param name="student"></param>
        /// <returns></returns>
        static Marks ViewMarks(businessModels::Module& module, businessModels::Student& student);

        /// <summary>
        /// Lecturer can change marks
        /// </summary>
        /// <param name="module"></param>
        /// <param name="student"></param>
        /// <param name="marks"></param>
        /// <returns></returns>
        static const void ChangeMarks(businessModels::Module& module, businessModels::Student& student, Marks marks);

        /// <summary>
        /// Admins can assign students to modules
        /// </summary>
        /// <param name="module"></param>
        /// <param name="student"></param>
        static void AssignModule(businessModels::Module& module, businessModels::Student& student);

        /// <summary>
        /// Admins can assign Lecturers to Modules
        /// </summary>
        /// <param name="module"></param>
        /// <param name="student"></param>
        static void AssignModule(businessModels::Module& module, businessModels::Lecturer& lecturers);

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

