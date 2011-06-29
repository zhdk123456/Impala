// Copyright (c) 2011 Cloudera, Inc. All rights reserved.

#ifndef IMPALA_EXPRS_LIKE_PREDICATE_H_
#define IMPALA_EXPRS_LIKE_PREDICATE_H_

#include "exprs/predicate.h"
#include "gen-cpp/Exprs_types.h"

namespace impala {

class LikePredicate: public Predicate {
 protected:
  friend class Expr;

  LikePredicate(const TExprNode& node);

 private:
  const TExprOperator::type op_;
};

}

#endif
