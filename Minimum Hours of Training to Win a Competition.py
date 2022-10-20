class Solution: 
    def minNumberOfHours(self, initialEnergy: int, initialExperience: int, energy: List[int], experience: List[int]) -> int:
        ans = 0
        cur_ex = initialExperience
        total_e = sum(energy) + 1 
        ans = (total_e - initialEnergy) if total_e > initialEnergy else 0
        temp = []
        for ex in experience:
            if cur_ex > ex:
                cur_ex += ex
                continue 
            else:
                inc_ex = ex - cur_ex + 1
                ans += inc_ex 
                cur_ex += inc_ex + ex
        return ans
