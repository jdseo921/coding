/*
Given an array of ints, is it possible to divide the ints into two groups, so that the sum of one group is a multiple of 10, and the sum of the other group is odd. Every int must be in one group or the other. Write a recursive helper method that takes whatever arguments you like, and make the initial call to your recursive helper from splitOdd10(). (No loops needed.)

splitOdd10([5, 5, 5]) → true
splitOdd10([5, 5, 6]) → false
splitOdd10([5, 5, 6, 1]) → true
*/

public boolean splitOdd10(int[] nums) {
  return splitOdd10(nums, 0, 0, 0);
}

public boolean splitOdd10(int [] nums, int index, int sum1, int sum2) {
  if (index >= nums.length) {
    return sum1 % 10 == 0 && sum2 % 2 == 1 || sum1 % 2 == 1 && sum2 % 10 == 0;
  }
  if (splitOdd10(nums, index + 1, sum1 + nums[index], sum2)) {
    return true;
  }
  if (splitOdd10(nums, index + 1, sum1, sum2 + nums[index])) {
    return true;
  }
  return false;
}
