struct Solution {
    two_sum: Vec<i32>,
}

impl Solution {

    pub fn new() -> Self {
        Solution { two_sum: Vec::new() }
    }

    pub fn two_sum(&mut self, nums: Vec<i32>, target: i32) -> Vec<i32> {
        for (idx_i, val_i) in nums.iter().enumerate() {
            for (idx_j, val_j) in nums.iter().enumerate() {
                if *val_i + *val_j == target && idx_i != idx_j {
                    // self.two_sum = Vec::from([*i, *j]);
                    let first_num = idx_i as i32;
                    let second_num = idx_j as i32;
                    // *idx_j += idx_j as i32;
                    self.two_sum = Vec::from([first_num, second_num]);
                    break;
                }
            }
        }
        self.two_sum.clone()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let mut solution = Solution::new();
        let nums = Vec::from([2,7,11,15]);
        let target = 9;
        let result = solution.two_sum(nums, target);
        assert_eq!(result, Vec::<i32>::from([1, 0]))
    }

    #[test]
    fn test2() {
        let mut solution = Solution::new();
        let nums = Vec::from([3,2,4]);
        let target = 6;
        let result = solution.two_sum(nums, target);
        assert_eq!(result, Vec::<i32>::from([2, 1]))
    }

    #[test]
    fn test3() {

        let mut solution = Solution::new();
        let nums = Vec::from([3, 3]);
        let target = 6;
        let result = solution.two_sum(nums, target);
        assert_eq!(result, Vec::<i32>::from([1, 0]))
    }
}

fn main() {
    let mut solution = Solution::new();
    let nums = Vec::from([2,7,11,15]);
    let target = 9;
    let result = solution.two_sum(nums, target);
    println!("{:?}", result);
}
