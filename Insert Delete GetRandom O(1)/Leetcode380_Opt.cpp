class RandomizedSet {
public:
    vector<int> vec;
    unordered_map<int,int> mp; //we design a data structure that is the combination of both vector and map

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()) return false;    //checking if the val to be inserted already exist in the map
        vec.push_back(val);
        mp[val] = vec.size()-1;  //store the val and it's index in map
        
        return true;
        
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()) return false; //if the element does not exist, then we can't remove
        //we shift the val to be removed to the last of the vector and the last element to the index where the val was

      
        int idx = mp[val];   //store the index of the val to be removed
        int lastElement = vec.back();  //store the last element of the vector
        vec.back() = val;  //store val at the last position
        
        vec[idx] = lastElement; //store the last element at the index where val was
        mp[lastElement] = idx; //update the new index of the last element as idx

        vec.pop_back(); //remove val(it is now at the back)
        mp.erase(val); //erase vale from map
        
        return true;
        
    }
    
    int getRandom() {
        int size = vec.size();
        int randIndex;
        
        randIndex = rand() % size;
        
        return vec[randIndex];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
