#pragma once

#include <memory>
#include <string>
#include <vector>

#include "./CarRental.hpp"

class CarRental;

class User
{
public:
    std::string id;
	std::string username;
	std::string password;
    std::string salt;

public:
    std::vector<std::weak_ptr<CarRental>> rentals;

public:
	User(std::string& username, std::string& password, std::string& salt);
    User(std::string& id, std::string& username, std::string& password, std::string& salt);
    ~User();
};
