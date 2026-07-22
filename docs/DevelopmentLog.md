# Development Log

---

## Session 1 - Initial Architecture

### Completed
- Created Visual Studio C++ project
- Implemented Target class
- Added constructor overloading
- Implemented getter functions
- Created Radar class
- Added dynamic target storage using std::vector
- Built first radar simulation
- Published project to GitHub

---

## Session 2 - Moving Targets

### Completed
- Added updatePosition() function to Target
- Implemented first target movement
- Built first simulation loop
- Simulated 5 radar scans
- Verified target position updates over time

### Notes
The simulation now updates a target's position every scan. This establishes the foundation for future work using velocity, elapsed time, and heading calculations.

---

# Session 3 - Radar Detection

## Completed

- Added radar detection range
- Calculated target distance using Euclidean distance
- Calculated target bearing using atan2()
- Added in-range / out-of-range detection
- Verified target movement affects detection status
- Improved radar scan output

  ## Session 4 – Radar Sweep & Detection

### Completed
- Added rotating radar sweep
- Added configurable sweep speed
- Calculated target bearing
- Calculated target distance
- Implemented radar beam width detection
- Added radar range detection
- Displayed bearing and distance in console

- ## Session 5 - Intelligent Target Tracking

### Completed

- Added threat score based target prioritization
- Implemented radar target locking
- Added lock status reporting
- Implemented automatic lock loss when targets leave radar range
- Improved target selection algorithm
- Added distance-based tie breaking for equal threat targets

### Notes

The radar now intelligently selects and tracks the highest priority target that is currently detectable. When no valid targets remain inside the radar coverage area, the system automatically clears the target lock.

## Notes

The radar now determines whether targets are inside the detection range and reports both distance and bearing relative to the radar origin.
