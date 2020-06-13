/*
Time complexity : average time for each operation is 1
Space complexity :O(n)
Approach : Use of unordered map and vector
*/

class RandomizedSet {
public:
    /** Initialize your data structure here. */
            vector<int> v;
        unordered_map<int,int> m;
    RandomizedSet() {

        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val)
    {

        if(m.find(val)==m.end())
           {
               v.push_back(val);
               m[val]=v.size()-1;
              
               return true;
           }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(m.find(val)==m.end()){
            return false;
        }
       
        auto it = m.find(val);
        v[it->second] = v.back();
        v.pop_back();
        m[v[it->second]] = it->second;
        m.erase(val);
        return true;
        
        
    }
    
    /** Get a random element from the set. */
    int getRandom() {
         return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
