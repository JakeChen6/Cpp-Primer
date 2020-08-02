// a
// list or forward_list. Because we might need to insert elements in the middle
// of the container.

// b
// deque. Because deque offers fast insert/delete at front or back.

// c
// vector. The number of integers is unknown so array cannot be used. Besides,
// sorting is done once so new integers can always be added at the back. vector offers
// fast insert/delete at the back.