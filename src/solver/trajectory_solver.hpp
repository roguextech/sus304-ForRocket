// ******************************************************
// Project Name    : ForRocket
// File Name       : trajectory_solver.hpp
// Creation Date   : 2019/10/20

// Copyright © 2019 Susumu Tanaka. All rights reserved.
// ******************************************************

#ifndef TRAJECTORYSOLVER_HPP_
#define TRAJECTORYSOLVER_HPP_

#include <string>
#include <vector>

#include "environment/sequence_clock.hpp"
#include "environment/wind.hpp"
#include "solver/rocket_stage.hpp"

namespace forrocket {
class TrajectorySolver {
    public:
        TrajectorySolver(std::string launch_config_json_file, std::string stage_list_json_file);

        int number_stage;
        std::vector<RocketStage> stage_vector;
        SequenceClock master_clock;
        EnvironmentWind wind;

        
        void Solve();

    private:
};
}  // namespace forrocket

#endif
