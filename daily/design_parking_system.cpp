class ParkingSystem {
public:
    map<int,int> mp;
    ParkingSystem(int big, int medium, int small) {
        mp.insert(make_pair(1, big)); 
        mp.insert(make_pair(2, medium)); 
        mp.insert(make_pair(3, small)); 
    }
    
    bool addCar(int carType) {
        if(mp[carType]!=0){
            mp[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */