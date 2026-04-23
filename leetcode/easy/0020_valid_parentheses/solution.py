def isValid(s: str) -> bool:
    parentheses_map = {'{': '}', '[': ']', '(': ')'}
    last_open = []
    for char in s:
        if char in parentheses_map:
            last_open.append(char)
        elif char != parentheses_map[last_open.pop()]:
            return False

    return not last_open
