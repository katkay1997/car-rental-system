#include "CarRentalSystem/entities/User.hpp"

User::User(std::string &username, std::string &password, std::string &salt)
: id{""}
, username{username}
, password{password}
, salt{salt} {}

User::User(std::string &id, std::string &username, std::string &password, std::string &salt)
: id{id}
, username{username}
, password{password}
, salt{salt} {}

User::~User() = default;
