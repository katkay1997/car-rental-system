#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "./CarRental.hpp"

class CarRental;

class Car
{
public:
	std::string id;
	std::string brand;
	std::string model;
	uint32_t basePrice;
	bool isAvailable;

public:
    std::vector<std::weak_ptr<CarRental>> rentals;

public:
    Car(std::string& brand, std::string& model, uint32_t basePrice);
    Car(std::string& id, std::string& brand, std::string& model, uint32_t basePrice, bool isAvailable);
	~Car();
};
