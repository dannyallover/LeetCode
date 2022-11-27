// https://leetcode.com/problems/queue-reconstruction-by-height/

class Solution {
public:
    static bool sortFunc( const vector<int>& p1, const vector<int>& p2 ) {
        if(p1[0] == p2[0]) {
            return p1[1] < p2[1];
        } else {
            return p1[0] > p2[0];
        }
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        // find max with 0 elements in front of it
        if(people.size() <= 1) {
            return people;
        }
        int max = INT_MIN;
        int front = INT_MAX;
        int posMax = -1;
        for(int i = 0; i < people.size(); i++) {
            if(people[i][0] > max) {
                max = people[i][0];
                front = people[i][1];
                posMax = i;
            } else if(people[i][0] == max && people[i][1] < front) {
                front = people[i][1];
                posMax = i;
            }
        }
        // sort by second ele
        vector<vector<int>> queue(1, people[posMax]);
        people.erase(people.begin() + posMax);
        sort(people.begin(), people.end(), sortFunc);


        for(int i = 0; i < people.size(); i++) {
            int front = people[i][1], val = people[i][0], j = 0;
            while(front > 0 && j < queue.size()) {
                if(queue[j][0] >= val) front--;
                j++;
            }
            queue.insert(queue.begin() + j, people[i]);
        }

        return queue;
    }
};
