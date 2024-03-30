class Solution {
public:
    int compress(vector<char>& chars) {
        int writeIdx = 0; // Index for writing to the compressed vector

        for (int i = 0; i < chars.size(); i++) {
            int count = 1; // Count consecutive occurrences of the current character

            // Check for consecutive characters
            while (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
                count++;
                i++; // Skip consecutive characters
            }

            // Write the compressed character and count (in-place)
            chars[writeIdx++] = chars[i]; // Write the character
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[writeIdx++] = c; // Write digits of count directly to chars
                }
            }
        }

        return writeIdx; // Return the new compressed vector size
    }
};
