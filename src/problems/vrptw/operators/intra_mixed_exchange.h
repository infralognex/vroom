#ifndef VRPTW_INTRA_MIXED_EXCHANGE_H
#define VRPTW_INTRA_MIXED_EXCHANGE_H

/*

This file is part of VROOM.

Copyright (c) 2015-2021, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include "problems/cvrp/operators/intra_mixed_exchange.h"

namespace vroom {
namespace vrptw {

class IntraMixedExchange : public cvrp::IntraMixedExchange {
private:
  TWRoute& _tw_s_route;

public:
  IntraMixedExchange(const Input& input,
                     const utils::SolutionState& sol_state,
                     TWRoute& tw_s_route,
                     Index s_vehicle,
                     Index s_rank,
                     Index t_rank,
                     bool check_t_reverse);

  virtual bool is_valid() override;

  virtual void apply() override;

  virtual std::vector<Index> addition_candidates() const override;
};

} // namespace vrptw
} // namespace vroom

#endif
