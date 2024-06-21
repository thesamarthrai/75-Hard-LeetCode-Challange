#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
    {
        // Pair the capital and profits and sort by capital required
        vector<pair<int, int>> projects;
        for (int i = 0; i < profits.size(); ++i)
        {
            projects.push_back({capital[i], profits[i]});
        }
        sort(projects.begin(), projects.end());

        priority_queue<int> maxHeap;
        int index = 0;

        // Perform up to k projects
        while (k > 0)
        {
            // Push all projects that can be started with current capital to the max heap
            while (index < projects.size() && projects[index].first <= w)
            {
                maxHeap.push(projects[index].second);
                index++;
            }

            // If no projects can be started, break out of the loop
            if (maxHeap.empty())
            {
                break;
            }

            // Select the most profitable project
            w += maxHeap.top();
            maxHeap.pop();
            k--;
        }

        return w;
    }
};
