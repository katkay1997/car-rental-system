#include "CarRentalSystem/entities/CarRental.hpp"

CarRental::CarRental(time_t &startDate, time_t &endDate, uint32_t price, std::weak_ptr<CarRental> &car, std::weak_ptr<User> &user)
: id{""}
, startDate{startDate}
, endDate{endDate}
, price{price}
, car{car}
, user{user} {}

CarRental::CarRental(std::string &id, time_t &startDate, time_t &endDate, uint32_t price, std::weak_ptr<CarRental> &car, std::weak_ptr<User> &user)
: id{id}
, startDate{startDate}
, endDate{endDate}
, price{price}
, car{car}
, user{user} {}

CarRental::~CarRental() = default;
