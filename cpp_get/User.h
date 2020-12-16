#pragma once
#include <string>

namespace businessModels {

	class User {
	public:
		enum Type {
			ADMIN = 0,
			LECTURER,
			STUDENT,
			INVALID
		};
	private:
		unsigned int m_Id;
		std::string m_StudentId = "";
		Type m_Type;
		std::string m_FirstName, m_LastName;
		User(const char* firstName, const const char* lastName, unsigned int id, Type type, const char *studentId = "");

	public:
		inline Type GetType() const { return m_Type; }
		
		inline bool IsInvalid() const { return GetType() == INVALID; }

		inline int GetId() const { return m_Id; };
		
		inline const char* GetStudentId() const { return m_StudentId.c_str(); }

		inline const char* GetFirstName() const { return m_FirstName.c_str(); }

		inline const char* GetLastName() const { return m_LastName.c_str(); }

		
		static const User MakeDummyUser();
		static const User CreateAdmin(const char* firstName, const const char* lastName, unsigned int id);
		static const User CreateLecturer(const char* firstName, const const char* lastName, unsigned int id);
		static const User CreateStudent(const char* firstName, const const char* lastName, unsigned int id, const char* studentId);
	};
}
