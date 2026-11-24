class Twitter {
    int time;
    unordered_map<int, unordered_set<int>> followMap;
    unordered_map<int, vector<pair<int, int>>> tweetMap;
public:
    Twitter() : time(0){}
    
    void postTweet(int userId, int tweetId) {
        tweetMap[userId].push_back({time, tweetId});
        time++;
    }
    
    vector<int> getNewsFeed(int userId) {
        struct comparator{
            bool operator()(pair<int, int> tweet1, pair<int, int> tweet2){
                return tweet1.first < tweet2.first;
            }
        };

        priority_queue<pair<int, int>, vector<pair<int, int>> ,comparator> news;

        followMap[userId].insert(userId);
        for(int followeeId : followMap[userId]){
            for(pair<int, int> tweet : tweetMap[followeeId]){
                news.push(tweet);
            }
        }

        vector<int> newfeed;
        while (!news.empty() && newfeed.size() < 10) {
            newfeed.push_back(news.top().second);
            news.pop();
        }

        return newfeed;
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId != followeeId){
            followMap[followerId].insert(followeeId);
        }
    }
    
    void unfollow(int followerId, int followeeId) {
        if(followerId != followeeId){
            followMap[followerId].erase(followeeId);
        }
    }
};
