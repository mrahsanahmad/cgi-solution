#include "User.h"

namespace businessModels
{
	User::User(const char* firstName, const const char* lastName, unsigned int id, Type type, const char* studentId)
		:m_Id(id),
		m_StudentId(studentId),
		m_Type(type),
		m_FirstName(firstName),
		m_LastName(lastName)
	{

	}

	const User User::MakeDummyUser()
	{
		return User("", "", 0, INVALID, "");
	}

	const User User::CreateAdmin(const char* firstName, const const char* lastName, unsigned int id)
	{
		return User(firstName, lastName, id, ADMIN, "");
	}
	const User User::CreateLecturer(const char* firstName, const const char* lastName, unsigned int id)
	{
		return User(firstName, lastName, id, LECTURER, "");
	}
	const User User::CreateStudent(const char* firstName, const const char* lastName, unsigned int id, const char* studentId)
	{
		return User(firstName, lastName, id, STUDENT, "");
	}
}