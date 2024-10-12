// Copyright 2023 Nesterov Alexander
#pragma once

#include <string>
#include <vector>
#include <limits>

#include "core/task/include/task.hpp"

namespace ermolaev_v_min_matrix_seq {

std::vector<int> getRandomVector(int sz);
std::vector<std::vector<int>> getRandomMatrix(int rows, int columns);

class TestTaskSequential : public ppc::core::Task {
 public:
  explicit TestTaskSequential(std::shared_ptr<ppc::core::TaskData> taskData_) : Task(std::move(taskData_)) {}
  bool pre_processing() override;
  bool validation() override;
  bool run() override;
  bool post_processing() override;

 private:
  std::vector<std::vector<int>> input_;
  int res{};
};

}  // namespace ermolaev_v_min_matrix_seq