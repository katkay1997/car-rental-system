#pragma once

#include <ctime>
#include <memory>
#include <string>

#include "./Car.hpp"
#include "./User.hpp"

class CarRental;
class User;

class CarRental
{
public:
    std::string id;
    std::time_t startDate;
    std::time_t endDate;
    uint32_t price;

public:
    std::weak_ptr<CarRental> car;
    std::weak_ptr<User> user;

public:
    CarRental(std::time_t& startDate, std::time_t& endDate, uint32_t price, std::weak_ptr<CarRental>& car, std::weak_ptr<User>& user);
    CarRental(std::string& id, std::time_t& startDate, std::time_t& endDate, uint32_t price, std::weak_ptr<CarRental>& car, std::weak_ptr<User>& user);
    ~CarRental();
};
