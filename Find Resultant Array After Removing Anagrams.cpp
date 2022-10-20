class Solution:
    def removeAnagrams(self, w: List[str]) -> List[str]:
        return [next(g) for _, g in groupby(w, sorted)]
