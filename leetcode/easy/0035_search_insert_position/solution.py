from bisect import bisect_left


def searchInsert(nums: list[int], target: int) -> int:
    return bisect_left(nums, target)
