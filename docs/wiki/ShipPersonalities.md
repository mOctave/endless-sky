Each ship in the game can have a variety of "personality" flags that control its behavior. This can be used, for example, to make one ship that goes out of its way to join fights, and another that will desert its friends if the fight starts to turn against it. A ship can have any number of personality flags set, although some combinations may not make sense.

### Flags that control who a ship attacks:

* `pacifist`: will not attack under any circumstances.
* `forbearing`: will not attack unless its shields or hull are below 90% when it is hit, and the projectile that hit it does damage. Beginning in **v. 0.10.0**, a forbearing ship will also attack if its shields or hull are below 90% and it was hit by discharge or corrosion damage respectively, if it was hit by energy or ion damage and its energy is below 50%, if it was hit by heat or burn damage and it is overheated, if it was hit by fuel or leak damage and it doesn't have enough fuel for at least two jumps, if it was hit by scrambling damage and its jam chance is greater than 10%, if it was hit by slowing damage and it is more than 10% slowed, or if it was hit by disruption damage and its shields are more than 50% disrupted.
* `timid`: does not join other people's fights; only attacks targets that are nearby and targeting it.
* `heroic`: will fight even if badly damaged or outgunned, and will attack targets even if they are far away.
* `hunting`: will attack targets even if they are far away. **(v. 0.10.0)**
* `daring`: will fight even if badly damaged or outgunned. **(v. 0.10.0)**
* `nemesis`: only attacks the player's ships.

### Flags that control how a ship attacks:

* `frugal`: does not expend ammunition unless it has lost more than 75% of its health or its government is outnumbered in the current system.
* `disables`: tries to disable enemy ships rather than destroying them.
* `plunders`: will leave enemy ships disabled so that they can be boarded and pillaged before destroying them.
* `vindictive`: this ship continues to fire at its target even after the target is dead, while the target is beginning to explode. **(v. 0.9.0)**
* `unconstrained`: the ship will fly outside the "invisible fence" that ships usually stay within. **(v. 0.9.1)**
* `coward`: if this ship is not the flagship of a fleet, it will desert its flagship and flee the system if its hull and shield strength drop low enough. **(v. 0.9.0)**
* `appeasing`: if this ship's hull and shield strength drops low enough, it will dump cargo to try to distract or appease its attacker. **(v. 0.9.5)**
* `opportunistic`: this ship's turrets will track targets independently instead of focusing fire. They also scan back and forth when no target is present. **(v. 0.9.7)**
* `merciful`: this ship won't fire on ships that are fleeing. **(v. 0.10.0)**
* `ramming`: will attempt to get as close to its target as possible, regardless of the range of its weapons or whether its weapons would hurt itself. **(v. 0.10.0)**

### Flags that control [NPCs](https://github.com/endless-sky/endless-sky/wiki/CreatingMissions#npcs):

* `staying`: never leaves the system it starts out in.
* `lingering`: will remain in the system for an additional time equal to one quarter of the smallest period of any fleet assigned to the system, when there is nothing to do. Except when the ship is a mission NPC and can follow the player, or when it already has a destination system. **(v. 0.10.1)**
* `entering`: enters its starting system via hyperspace instead of appearing there.
* `waiting`: starts out in space in its system.
* `launching`: takes off from the planet with the player, even if it normally couldn't land there. **(v. 0.9.9)**
* `fleeing`: avoids combat if it can jump or land, and will not take off after landing until the player next takes off.
* `derelict`: starts out disabled.
* `uninterested`: does not follow the player's flagship around (i.e. does not behave like an escort).

### Non-combat goals:

* `surveillance`: scans random ships and visits random planets in system.
* `mining`: this ship will circle around the system looking for minable asteroids. When it finds one it will attack it. **(v. 0.9.5)**
* `harvests`: this ship picks up any flotsam that is in front of it. Mining ships should do this, as should pirates who are distracted by ships dumping cargo to appease them. **(v. 0.9.5)**
* `swarming`: ships of this type will "swarm" around any friendly, non-swarming ships that are in-system. No more than six ships will swarm a given target. Any swarming ship with nothing to swarm will try to land on a planet instead. **(v. 0.9.1)**
* `secretive`: ships with this personality will attempt to fly away from ships that are scanning them. **(v. 0.10.0)**

### Special flags:

* `escort`: this ship will show up in the player's escort list. (Use this for mission NPCs that you are supposed to accompany, for example.)
* `target`: this ship is highlighted by making it flash in the radar, and in the target display it is labeled as a "mission target." **(v. 0.9.7)**
* `marked`: only attacks player ships, and only player ships will attack it. **(v. 0.9.7)**
* `mute`: this ship will not talk to you if you hail it (and therefore can't assist you, either). **(v. 0.9.7)**

In addition to these flags, the personality also stores a "confusion." This is a random error that is added to a ship's targeting systems, to make it look a bit more random and organic; otherwise, all AI ships would always fire at the exact center of their target, which looks rather unrealistic. The confusion value is the maximum error in pixels, and defaults to 10. Generally I use a value of 10 for military ships, 20 for pirates, 30 for skilled merchants and 40 for ordinary merchants.