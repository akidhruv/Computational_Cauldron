#define GRID 1

#if GRID == 1
#define SOLVER_GRID_UG

#else
#define SOLVER_GRID_NON_UG

#endif

#define SOLVER 2

#if SOLVER == 1
#define POISSON_SOLVER_JACOBI
#define omega 1.0
#endif

#if SOLVER == 2
#define POISSON_SOLVER_GS
#define omega 1.0
#endif

#if SOLVER == 3
#define POISSON_SOLVER_GSOR
#define omega 1.1
#endif

#define MAX_STRING_LENGTH 80

#define Nxb 50
#define Nyb 50

#define MaxIt 1500
