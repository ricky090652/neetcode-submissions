class KthLargest {
public:
    vector<int> num;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->num = nums;
        this->k = k;
    }
    
    int add(int val) {
        num.push_back(val);
        sort(num.begin(), num.end());
        return num[num.size() - k];
    }
};
