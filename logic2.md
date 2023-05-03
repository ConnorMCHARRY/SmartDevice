

```mermaid
flowchart TD
start(start) -->
processA[Red Light] -->
decisionA{traffic light green}
decisionA -- no --> decisionA
decisionA -- yes --> inputA[Throttle]
inputA --> decisionB{Sensor}

```