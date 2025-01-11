//
// Created by felix on 2023-12-20.
//

#ifndef BBQCOIN_BLOCKCHAIN_H
#define BBQCOIN_BLOCKCHAIN_H

#include "amount.h"

static constexpr int NUM_GETBLOCKSTATS_PERCENTILES = 5;

/** Used by getblockstats to get feerates at different percentiles by weight  */
void CalculatePercentilesByWeight(CAmount result[NUM_GETBLOCKSTATS_PERCENTILES], std::vector<std::pair<CAmount, int64_t>>& scores, int64_t total_weight);

#endif //BBQCOIN_BLOCKCHAIN_H
