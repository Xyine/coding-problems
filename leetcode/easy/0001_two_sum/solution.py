def twoSum(nums: list[int], target: int) -> list[int] | None:
    seen = {}

    for indice, num in enumerate(nums):
        complement = target - num
        
        if complement in seen:
            return [seen[complement], indice]
        else:
            seen[num] = indice

    return None
