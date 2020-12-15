#pragma once
#include <string>

#include "Credentials.h"

namespace businessModels {

	class User {
		unsigned int m_Id;
	protected:
		std::string m_FirstName, m_LastName, m_ID = "";
	public:
		User(const char* firstName, const const char* lastName);

		enum Type {
			ADMIN = 0,
			LECTURER,
			STUDENT,
			INVALID};

		virtual Type GetType() = 0;
	};

	class Admin : public User {
	public:
		Admin(const char* firstName, const const char* lastName);

		Type GetType() { return ADMIN; }
	};

	class Lecturer : public User {
	public:
		Lecturer(const char* firstName, const const char* lastName);

		Type GetType() { return LECTURER; }
	};

	class Student : public User {
		std::string m_StudentId;
	public:
		Student(const char* firstName, const const char* lastName);

		Type GetType() { return STUDENT; }
	};
}