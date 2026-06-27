class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack;
        for(int asteroid : asteroids){
            bool alive = true;
            while(!stack.empty() && stack.top() > 0 && asteroid < 0){
                if(stack.top() < -asteroid){
                    stack.pop();
                    continue;
                }
                if(stack.top() == -asteroid){
                    stack.pop();
                }
                alive = false;
                break;

            }
            if(alive){
                stack.push(asteroid);
            }
        }
        vector<int> result(stack.size());
        for(int i = stack.size() - 1; i >= 0; --i){
            result[i] = stack.top();
            stack.pop();
        }
        return result;
    }
};