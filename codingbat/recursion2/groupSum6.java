/*
Given an array of ints, is it possible to choose a group of some of the ints, beginning at the start index, such that the group sums to the given target? However, with the additional constraint that all 6's must be chosen. (No loops needed.)

groupSum6(0, [5, 6, 2], 8) → true
groupSum6(0, [5, 6, 2], 9) → false
groupSum6(0, [5, 6, 2], 7) → false
*/

public boolean groupSum6(int start, int[] nums, int target) {
  if (target == 0 && start == nums.length) {
    return true;
  }
  if (start >= nums.length) {
    return false;
  }

  if (nums[start] == 6) {
    return groupSum6(start + 1, nums, target - 6);
  }
  else { 
    if (groupSum6(start + 1, nums, target)) {
      return true;
    }
    if (groupSum6(start + 1, nums, target - nums[start])) {
      return true;
    }
  }
  return false;
}
