def removeOuterParentheses(S):
    # res=""
    # count=0
    # for c in S:
    #     if (c=="(" and count>0):
    #         res+=c
    #     if(c=="("):
    #         count+=1
    #     if (c==")" and count>1):
    #         res+=c
    #     if(c==")"):
    #         count-=1
    # return res
    
    opencount=0,closecount=0
    res=""
    start=0
    for i,c in enumerate(S):
        if c=="(":
            opencount+=1
        else:
            closecount+=1
        if opencount==closecount:
            res+=S[start+1:i]
            start=i+1
    return res
n=input()
print(removeOuterParentheses(n))