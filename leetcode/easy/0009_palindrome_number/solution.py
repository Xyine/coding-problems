def isPalindrome(x: int) -> bool:
    s = str(x)
    return s == s[::-1]
