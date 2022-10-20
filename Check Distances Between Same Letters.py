class Solution:
    def checkDistances(self, s: str, distance: List[int]) -> bool:
        madhu=[]
        abi=0
        for i in s:
            if i in madhu:
                continue 
            madhu.append(i)
            res=(s.rfind(i)-s.find(i))-1
            print(ord(i)-97)
            if(distance[(ord(i)-97)]==res):
                abi=abi+1
        if(abi!=len(madhu)):
             return False
        return True
        
