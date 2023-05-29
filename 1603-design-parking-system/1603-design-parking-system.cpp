class ParkingSystem {
public: vector<int> vehicle;
public:
    ParkingSystem(int big, int medium, int small) {
        vehicle = {big, medium, small};
    }

    bool addCar(int carType) {
        return vehicle[carType - 1]-- > 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */