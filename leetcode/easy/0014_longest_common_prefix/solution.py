def longestCommonPrefix(strs: list[str]) -> str:
    prefix = []

    for chars in zip(*strs):
        if len(set(chars)) == 1:
            prefix.append(chars[0])
        else:
            break

    return ''.join(prefix)

import os

def longestCommonPrefix(strs: list[str]) -> str:
    return os.path.commonprefix(strs)
