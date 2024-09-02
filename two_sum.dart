import 'dart:io';

List<int> twoSum(List<int> nums, int target) {
  List<int> result = List.filled(2, -1);
  for (int i = 0; i < nums.length - 1; i++) {
    for (int j = i + 1; j < nums.length; j++) {
      if (nums[i] + nums[j] == target) {
        result[0] = i;
        result[1] = j;
      }
    }
  }
  return result;
}

void main(List<String> args) {
  List<int> nums = [2, 7, 11, 15];
  int target = 9;
  print(twoSum(nums, target));
  nums = [3,2,4];
  target = 6;
  print(twoSum(nums, target));
  nums = [3,3];
  target = 6;
  print(twoSum(nums, target));
}
