class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {

        int unsat = 0;
        for (int i = 0; i < minutes; i++)
        {
            if (grumpy[i] == 1)
            {
                unsat += customers[i];
            }
        }

        int i = 0;
        int j = minutes;
        int maxi = unsat;

        while (j < customers.size())
        {
            if (grumpy[j] == 1)
            {
                unsat += customers[j];
            }

            if (grumpy[i] == 1)
            {
                unsat -= customers[i];
            }

            maxi = max(maxi, unsat);
            j++;
            i++;
        }

        int result = maxi;

        for (int i = 0; i < customers.size(); i++)
        {
            if (grumpy[i] == 0)
            {
                result += customers[i];
            }
        }

        return result;
    }
};