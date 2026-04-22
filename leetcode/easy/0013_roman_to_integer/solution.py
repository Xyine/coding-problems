def romanToInt(s: str) -> int:
    roman_to_int = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }

    result = 0
    for curr, next in zip(s, s[1:]):
        result += - roman_to_int[curr] if roman_to_int[curr] < roman_to_int[next] else roman_to_int[curr]
    return result + roman_to_int[s[-1]]
