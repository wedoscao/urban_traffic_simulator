# Urban Traffic Simulator

An object-oriented software that simulates traffic movements in a virtual city environment.

## Overview

In modern cities, traffic systems must continuously respond to changing traffic conditions such as congestion, 
accidents, and increasing vehicle density.

Navigation systems rely on graph algorithms and real-time simulation to calculate efficient travel routes and optimize 
traffic flow.

**Urban Traffic Simulator** is an object-oriented software application that 
simulates the movement of traffic in a virtual city environment. The simulator models:
- roads,
- intersections,
- vehicles,
- traffic conditions,
- routing strategies,
as software objects interacting with each other.

The system operates as a simplified **urban digital twin**, where the virtual traffic network mirrors real-world 
traffic behavior and dynamically adapts to changing conditions.

The project integrates:
- object-oriented programming,
- graph data structures,
- path-finding algorithms,
- simulation systems,
- event-driven architecture,
- software engineering practices,
- collaborative development using Git.

The final product must be a fully runnable application capable of simulating traffic behavior and evaluating routing 
algorithms under various scenarios.

## How to use

Configure the project:
```bash
cmake -S . -B build
```

Build the project:
```bash
cmake --build build
```

Run the project:
```bash
./build/UrbanTrafficSimulator
```

## Functional Requirements

### Road Network System

The traffic environment must be represented as a graph-based road network.

#### Required Features

##### Intersections
Each intersection should:
- have a unique identifier,
- maintain connected roads,
- support incoming/outgoing traffic.

##### Roads
Each road should contain:
- start intersection,
- destination intersection,
- distance,
- speed limit,
- congestion level,
- travel cost.

##### Graph Operations
The system must support:
- adding/removing roads,
- adding/removing intersections,
- updating road conditions,
- searching connected roads.

##### Map Loading
The simulator should support:
- loading road networks from file,
- generating synthetic maps automatically.

Example file formats:
- CSV,
- JSON,
- text configuration files.

---

### Vehicle Simulation System

Vehicles are active objects moving inside the traffic network.

#### Required Features

##### Vehicle Properties
Each vehicle should maintain:
- unique ID,
- current position,
- destination,
- current route,
- movement speed,
- travel history.

##### Vehicle Behaviors
Vehicles should be able to:
- request routes,
- move step-by-step,
- react to congestion,
- recompute routes dynamically,
- stop when the destination is reached.

##### Multiple Vehicle Support
The simulator must support:
- multiple simultaneous vehicles,
- independent routing decisions,
- congestion caused by vehicle density.

---

### Routing and Navigation System

The core functionality of the project is dynamic route planning. The system must implement at least one baseline routing algorithm and one advanced routing algorithm.

#### Required Features

##### Required Algorithms
The system must include:
- Breadth-First Search (BFS), used as a simple baseline for unweighted traversal,
- Dijkstra Algorithm, which computes shortest weighted paths,
- A* Search, which uses heuristic estimation to improve search efficiency.

##### Route Planning Features
The routing system should support:
- shortest-distance routing,
- shortest-time routing,
- dynamic path recomputation,
- congestion-aware navigation.

##### Dynamic Routing
Vehicles should update routes when:
- traffic congestion changes,
- roads become blocked,
- accidents occur.

This is one of the most important functionalities of the project.

---

### Traffic Event System

The simulator must support dynamic traffic events.

#### Required Features

##### Possible Events
The system features events such as:
- Congestion Event, where traffic density increases travel cost,
- Accident Event, where road capacity decreases or becomes unavailable,
- Road Closure, where the road is temporarily disabled,
- Traffic Light Delay, where vehicles wait at intersections.

##### Event Management
The system should:
- trigger events during simulation,
- notify affected vehicles,
- update routing conditions dynamically.

---

### Simulation Engine

The simulation engine coordinates all system activities.

#### Required Features

##### Responsibilities
The engine must handle:
- updating simulation state,
- advancing simulation time,
- processing vehicle movement,
- handling traffic events,
- collecting statistics.

##### Simulation Features
Simulation controls include:
- Time Step Simulation, where the system updates periodically using simulation ticks,
- Pause/Resume, where the simulation should support pausing and restarting,
- Speed Control, an optional feature for adjustable simulation speed, often known as fast time simulation.

---

### Visualization System

The simulator should visually demonstrate traffic behavior.

#### Required Features

##### Minimum Visualization Requirements
The system must display:
- intersections,
- roads,
- vehicle movement,
- route paths,
- congestion indicators.

##### Suggested GUI Features
Suggested elements include:
- Road Visualization to display roads as connected graph edges,
- Vehicle Animation where vehicles move dynamically on the map,
- Congestion Heatmap where road color changes based on congestion level,
- Statistics Panel to display average travel time, number of vehicles, and congestion metrics.

---

### Statistics and Analysis Module

The system should analyze traffic performance.

#### Required Features

##### Metrics
The system tracks:
- Travel Metrics, including total travel time, average travel time, and route length,
- Algorithm Metrics, including routing computation time, number of route recalculations, and path optimality,
- Traffic Metrics, including congestion level, vehicle density, and blocked roads.

##### Experimentation
Algorithms should be compared under:
- normal traffic,
- heavy congestion,
- random events,
- large-scale networks.

Results should be summarized in charts or tables.

## License 
Urban Traffic Simulator is [MIT licensed](https://github.com/wedoscao/urban_traffic_simulator/blob/main/LICENSE)
