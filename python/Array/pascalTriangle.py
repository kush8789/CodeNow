class Solution:
    # def nCr(self, n, r):
    #     res = 1
    #     for i in range(r):
    #         res = res * (n - i) // (i + 1)
    #     return res
    
    # def pascalTriangle(self, r, c):
        # element= self.nCr(r-1,c-1)
        # return element
        
    # def pascalTriangle(self, row):
    #     for col in range(1,row+1):
    #         print(self.nCr(row-1,col-1),end=" ")
    #     print()
    
    # def pascalTriangle(self, row):
    #     res=1
    #     print(res,end=" ")
    #     for i in range(1,row):
    #         res=res*(row-i)//i
    #         print(res,end=" ")
        # print()
        
    def nCr(self,n,r):
        res=1
        for i in range(r):
            res=res*(n-i)//(i+1)
        return res
    
    
    
r=5
obj=Solution()
obj.pascalTriangle(r)