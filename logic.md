# Programming Logic

> For each behaviour, create the mermaid flowchart. Start each flowchart with a Heading naming the functionality. Delete this comment prior to submission.

## Logic 1

```mermaid
flowchart TD
    Start([Start])
    %% Comment
    End([End])
    RedLight(Traffic light Red)
    GreenLight{Has traffic light turned green?}
    %%currentDistanceReading{Has sensor been triggered}
    %%activatePiezo(write HIGH to piezoPin)
    %%deactivatePiezo(write LOW to piezoPin)

   

    Start --> RedLight
    RedLight --> GreenLight
    GreenLight --> currentDistanceReading
    currentDistanceReading --> ifDistanceLessThanThreshold
    ifDistanceLessThanThreshold --> |True| activatePiezo
    ifDistanceLessThanThreshold --> |False| deactivatePiezo
    deactivatePiezo --> End
    activatePiezo --> End
```