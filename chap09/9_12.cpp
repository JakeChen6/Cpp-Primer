// C c1 (c2)
// C c1 = c2
// c1 and c2 must have the same type (both container type and element type,
// for array must also have the same size)

// C c (b, e)
// elements types in the new and original containers can differ as long as
// it is possible to convert the elements we are copying to the element type
// of the container we are initializing.