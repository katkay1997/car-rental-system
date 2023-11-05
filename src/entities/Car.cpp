#include "CarRentalSystem/entities/Car.hpp"

Car::Car(std::string &brand, std::string &model, uint32_t basePrice)
: id{""}
, brand{brand}
, model{model}
, basePrice{basePrice}
, isAvailable{true} {}

Car::Car(std::string &id, std::string &brand, std::string &model, uint32_t basePrice, bool isAvailable)
: id{id}
, brand{brand}
, model{model}
, basePrice{basePrice}
, isAvailable{isAvailable} {}

Car::~Car() = default;
