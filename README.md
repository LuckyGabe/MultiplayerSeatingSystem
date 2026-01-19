# MultiplayerSeatingSystem (UE5 C++)
A  high-performance, server-authoritative, and modular seating plugin for Unreal Engine 5. Includes late-joiner synchronization, dedicated server support, and a decoupled component-based architecture. This plugin provides a "plug-and-play" solution to handle replicated character-to-object interactions.

## 🚀 Key Features

*   **Server-Authoritative Interaction:** Full validation on the server to prevent "teleport-sitting" and distance-based exploits.
*   **Late-Joiner Correctness:** Uses state-based replication (Atomic Structs + OnRep) ensuring players who join mid-session see the correct world state.
*   **Component-Based Architecture:** Decoupled logic allows you to add seating to ANY actor (Chairs, Couches, Vehicles, Horses) without inheritance bloating.
*   **Deterministic Contention Handling:** Gracefully handles "race conditions" where multiple players attempt to sit in the same slot simultaneously.
*   **Event-Driven Cleanup:** Automatic slot freeing via `OnDestroyed` delegates for disconnected players or destroyed objects.
*   **UI/UX Integrated:** Includes a C++ driven interaction prompt system that intelligently detects the closest available slot.

## 🛠 Technical Breakdown

### Replication Strategy
This system avoids unreliable Multicast RPCs. Instead, it uses a replicated **Atomic Struct** (`FSittingState`) containing the Seatable reference, Slot Index, and State. This ensures that all data required for the client to render the "Sitting" state arrives in a single packet, preventing visual glitches.


## 📖 Installation & Quick start setup

1.  Add the MultiplayerSeatingSystem folder into your project's `Plugins/` folder.
2.  Add "ModularSeatingSystem" to your .Build.cs dependencies.
3.  Regenerate project files and compile.
4.  **The Seatable:** Add `USeatableObjectComponent` to any Actor. Place SceneComponents (for example `UArrowComponents`) for seat slots in your viewport and register them with the component.
![ActorSetup_1](https://github.com/user-attachments/assets/9303987e-5529-4aa1-9e87-a24ac0b73d6c)
![ActorSetup_2](https://github.com/user-attachments/assets/25860cbe-ce52-40ee-8832-410708f2a292)


6.  **The User:** Add `UCharacterSeatingComponent` to your Pawn.
7.  **Interaction:** Call the `Interact()` function from your Input Action. This handles both sitting on the actor in the closest slot, and standing up if already sitting. There's also `RequestSit(AActor* TargetSeatable, int32 DesiredSlotIndex = -1)` exposed for sitting at desired seat slot, and `RequestStand()` for standing up.
![CharacterSetup](https://github.com/user-attachments/assets/7d14851f-a056-4e46-bc3f-c4a6e75e03db)

8. For states handling (for example animations), the component is exposing "IsSitting()" function which returns true after assigning the seat slot.
