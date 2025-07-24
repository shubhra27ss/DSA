class Solution:
    def frequencySort(self, s: str) -> str:
        freq = Counter(s)
        
        # Step 2: Create buckets: index = frequency, value = list of characters
        max_freq = max(freq.values())
        buckets = [[] for _ in range(max_freq + 1)]
        
        for char, count in freq.items():
            buckets[count].append(char)
        
        # Step 3: Build result string from buckets (from high to low frequency)
        result = []
        for count in range(max_freq, 0, -1):
            for char in buckets[count]:
                result.append(char * count)
        
        return ''.join(result)      