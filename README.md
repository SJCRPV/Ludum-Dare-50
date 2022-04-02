# Ludum Dare 50
 This Ludum Dare entry will be in a different repository as it requires the contribution of another person


# Design idea

You are an arcane practicioner, trying to desperately avoid the opening of a portal that's going to herald an evil invasion

The play area would involve a screen in which they perform their incantations to maintain this portal from opening. Maintenance is done via the performance of simple minigames, the parameters of which should be procedural to some extent.

Difficulty increases perhaps via an ever increasing quota, forcing the player to try and solve the minigames faster. The time to fulfil the quota would either be static, or not increase enough to match how much the quota itself increases, forcing the innevitable upon them.

**Possible minigames (pick top 3 from the list. All others are just something nice to have, if time allows)**
- Selection of 8 different runes show up and the player will have to quickly sort them to match the initial order
- Conduct the right gestures to make sure the spell is cast correctly. Done by pressing a random sequence of keys that correspond to the gestures
- Finding particular spell or information in a book. It would play by having a slider to sift through pages in large numbers, and then fine-tune it by moving a page individually with each arrow key press. The player must stay in the correct page for a something like a second before it validates it, making it easy to accidentally move past it, if not paying attention.
- Player would have to draw a spell circle via dragging pieces (via a grid) or even drawing (nice to have) them to create the correct symbols


Inbetween each minigame, the player is teleported to the room with the next game, and they have to quickly tell in which of the 3 possible places the task spawned in, moving accordingly. This avoids too much downtime while still testing the player's focus and ability to discern things under pressure.

Score defined by how many "days" the player manages to survive

**Core gameplay loop:**

- Start day -> Quota updates -> Timer Resets -> Player spawns in room -> Moves to right place -> Player goes to screen -> Completes minigame -> Partially fulfil quota -> Teleport to new room -> Repeat until timer runs out -> Check if quota was fulfiled -> If so, brief pause, await input to start new day


**Asset-wise:**
A small player character to move around with
A mage tower-like environment. Or small rooms.
A flippable book (pages don't have to make sense, except for maybe 2 of them; the correct ones)
	- Flipping to both left and right (multiple pages)
	- Flipping to both left and right (single page)
At least 8 different runes
A portal
Simple hand gestures in the 4 main directions
Arrows in the 4 main directions

**Interface-wise:**
Timer
Day counter
Quota marker
Book-flipping slider