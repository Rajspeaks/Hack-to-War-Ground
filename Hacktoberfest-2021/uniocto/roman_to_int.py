# unioct
# this code convert a roman numeral to an integer.

def romanToInt(s: str) -> int:
    if len(s)<1:
        return 0
    rt = 0
    roman_ind = {"I": 1,
                "V": 5,
                "X": 10,
                "L": 50,
                "C": 100,
                "D": 500,
                "M": 1000}
    ids = ["I",
            "V",
            "X",
            "L",
            "C",
            "D",
            "M"]
    for i in range(1,len(s)):
        if ids.index(s[i-1]) >= ids.index(s[i]):
            rt+=roman_ind[s[i-1]]
        else:
            rt-=roman_ind[s[i-1]]
    return rt+roman_ind[s[-1]]
