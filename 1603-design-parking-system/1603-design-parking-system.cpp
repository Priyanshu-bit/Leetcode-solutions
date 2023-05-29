class ParkingSystem {
public:
    int big,medium,small;
    ParkingSystem(int big, int medium, int small) 
    {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    bool addCar(int carType) 
    {
         switch(carType)
         {
             case 1: if(big)
                     {
                        big--;
                        return true;
                     }
                     break;
             case 2: if(medium)
                     {
                        medium--;
                        return true;
                     }
                     break;
             case 3: if(small)
                     {
                        small--;
                        return true;
                     }
                     break;
         }
         return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */