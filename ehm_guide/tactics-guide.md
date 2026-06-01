# Eastside Hockey Manager – Comprehensive Tactics Guide

This guide covers all aspects of tactics in Eastside Hockey Manager (EHM), drawing on years of community experience across even strength, power play, and penalty kill situations. It explains how the game's tactical layers interact, provides guidance on setting up unit and personal tactics, discusses special teams strategy in detail, and explores broader considerations such as line construction, line matching, and coaching. The guide is applicable to EHM 2007 and EHM 1.

This summary has been prepared by Claude AI based on a review of the source forum threads from ehmtheblueline.com and set out in the `Sources` section at the end of this guide.

---

## Table of Contents

1. [Understanding the Tactical System](#1-understanding-the-tactical-system)
   - [Team Tactics vs Unit Tactics vs Personal Tactics](#team-tactics-vs-unit-tactics-vs-personal-tactics)
   - [How the Layers Interact](#how-the-layers-interact)
   - [The "Use Unit Tactics" Option](#the-use-unit-tactics-option)
   - [Saving and Loading Tactics Files](#saving-and-loading-tactics-files)
2. [Even Strength Tactics](#2-even-strength-tactics)
   - [Tactical Settings](#tactical-settings)
   - [Tactical Systems](#tactical-systems)
   - [Key Tactical Settings Explained](#key-tactical-settings-explained)
   - [Shooting Settings](#shooting-settings)
   - [Approach to Defensive Play](#approach-to-defensive-play)
3. [Personal Tactics](#3-personal-tactics)
   - [Why Personal Tactics Matter](#why-personal-tactics-matter)
   - [Setting Personal Tactics by Player Type](#setting-personal-tactics-by-player-type)
   - [Key Personal Tactic Options](#key-personal-tactic-options)
   - [Scaling Personal Tactics to Player Attributes](#scaling-personal-tactics-to-player-attributes)
   - [Goalie Personal Tactics](#goalie-personal-tactics)
   - [Situational Personal Tactics (ES, PP, PK)](#situational-personal-tactics-es-pp-pk)
   - [Personal Tactics Persistence Bug](#personal-tactics-persistence-bug)
4. [Line Construction](#4-line-construction)
   - [General Philosophy](#general-philosophy)
   - [Forward Lines](#forward-lines)
   - [Defensive Pairings](#defensive-pairings)
   - [Defensive Attributes to Prioritise](#defensive-attributes-to-prioritise)
5. [Line Matching](#5-line-matching)
6. [Power Play Tactics](#6-power-play-tactics)
   - [Player Selection](#player-selection)
   - [Offensive Zone Formations](#offensive-zone-formations)
   - [Stick Handedness and Positioning](#stick-handedness-and-positioning)
   - [Key PP Tactical Settings](#key-pp-tactical-settings)
   - [The Diamond Setup in Detail](#the-diamond-setup-in-detail)
   - [The Umbrella / 1-3-1 Setup in Detail](#the-umbrella--1-3-1-setup-in-detail)
   - [Avoiding Short-Handed Goals Against](#avoiding-short-handed-goals-against)
   - [PP Training and Practice Allocation](#pp-training-and-practice-allocation)
   - [General PP Troubleshooting](#general-pp-troubleshooting)
7. [Penalty Kill Tactics](#7-penalty-kill-tactics)
   - [Player Selection for the PK](#player-selection-for-the-pk)
   - [Key PK Tactical Settings](#key-pk-tactical-settings)
   - [Defensive Zone Formation](#defensive-zone-formation)
   - [Zone vs Man Coverage on the PK](#zone-vs-man-coverage-on-the-pk)
   - [PK Training and Practice Allocation](#pk-training-and-practice-allocation)
   - [PK Troubleshooting](#pk-troubleshooting)
8. [Practice Allocation](#8-practice-allocation)
9. [In-Game Management](#9-in-game-management)
   - [Benching Players](#benching-players)
   - [Tactical Changes Mid-Game](#tactical-changes-mid-game)
   - [How Often to Change Tactics](#how-often-to-change-tactics)
10. [Coaching and Tactics](#10-coaching-and-tactics)
11. [Expected Results and Benchmarks](#11-expected-results-and-benchmarks)
12. [Sources](#12-sources)

---

## 1. Understanding the Tactical System

### Team Tactics vs Unit Tactics vs Personal Tactics

EHM uses a three-layer tactical hierarchy:

- **Team Tactics** – a single set of instructions applied across all lines when Unit Tactics is not enabled.
- **Unit Tactics** – separate tactical instructions for each individual line, including special teams units. Enabled via the "Use Unit Tactics" checkbox in the Advanced Options section of the Tactics screen.
- **Personal Tactics** – individual instructions assigned to a specific player, overriding both team and unit tactics for any setting that is explicitly set. Settings left unchecked in personal tactics default to whatever the unit (or team) tactics dictate.

### How the Layers Interact

Personal tactics take precedence over unit tactics, which take precedence over team tactics. If a personal tactic setting is left unchecked (i.e. not explicitly specified), the player follows the unit tactic for that setting. This allows a mixed approach: set the broad unit instructions, then fine-tune individual players only where their attributes or role require it.

For example, a player might follow the line's mentality setting (set at the unit level) but have their passing individually set to "Safe" because their creativity attribute is low.

### The "Use Unit Tactics" Option

Enabling "Use Unit Tactics" in the Advanced Options section of the Tactics screen allows you to set completely different tactical instructions for each line. This is strongly recommended, as different lines have different roles and different player attributes. When this option is enabled, the tactics screen title changes to "Team Tactics" and the line-level instructions are managed on the Unit Tactics screen instead.

If you use "Set to Default" to apply a pre-made tactic, this will overwrite all lines at once – it can be useful as a starting point but is not recommended as a long-term approach.

> ⚠️ If "Use Unit Tactics" is not enabled, all your lines – including PP and PK – will share the same tactical settings. This means your penalty killers could inadvertently be told to play in an offensive, creative fashion.

### Saving and Loading Tactics Files

Tactics can be saved to `.tct` files from within the game and later reloaded. Tactic files created in EHM 2007 can also be used in EHM 1 – copy the `.tct` files from the EHM 2007 tactics folder into the EHM 1 equivalent and they will load correctly.

The default save location for EHM 2007 tactics is:
`C:\Documents and Settings\[username]\My Documents\Sports Interactive\EHM 2007\tactics`

Note that tactic files save line and unit settings, but personal tactics assigned to individual players are not stored in the `.tct` file in the same way and may need to be re-applied when players change.

---

## 2. Even Strength Tactics

### Tactical Settings

The Tactical Settings sliders control how your team plays at a broad level. The key settings and their general function are:

- **Mentality** – how offensively or defensively minded your players are. Offensive tactics are generally very effective in EHM, though a very defensive mentality can work if supported by the right players and systems.
- **Aggressiveness** – how physically aggressive players are. Higher aggressiveness tends to generate more penalties. It is generally preferable to keep this at Normal or lower and use puck pressure to drive physical play.
- **Backchecking** – how diligently forwards return to the defensive zone. Hard or Very Hard backchecking is important for defensive lines and checking forwards. Easy backchecking should not be used on penalty killers, as it means they will not return to their own zone.
- **Gap Control** – how tightly players shadow opponents. Tighter gap control is more effective but requires better skating. A common approach is to calibrate gap control to the player's speed and acceleration: players with speed and acceleration of 17+ can handle Very Tight; 13–16 can manage Tight; below that, Normal. Slow players set to Very Tight will give away penalties through hooking when they cannot keep up.
- **Puck Pressure** – the main driver of hitting frequency. High puck pressure increases hits and can also increase penalties. It is different from the Hitting setting.
- **Hitting** – the intensity of individual bodychecks when they occur. Setting this too high relative to a player's Hitting and Aggressiveness attributes will generate penalties (charging, roughing).
- **Tempo** – the speed at which your team plays. Should be matched to the speed and stamina of the players on that line; fast players on a slow tempo are wasted, and slow players on a high tempo will tire quickly and give away the puck.
- **Passing** – how elaborate or safe the passing is. Creative passing generates more turnovers but can create better plays; Safe passing reduces giveaways.
- **Shooting** – how selective players are when shooting. "Selective" or "Very Selective" generally improves shooting percentage as players wait for better opportunities; "Heavy" or "Barrage" generates more shots but at lower quality.
- **Dumping the Puck** – how often players dump the puck into the offensive zone rather than carrying or passing it in. Used more for checking and physical lines than for skill lines.

### Tactical Systems

- **Breakouts** – how players exit their own zone. Positional (players stay in their natural positions), Board Play (puck moved along the boards, suits physical players), Crisscross (players crisscross while exiting, suits skilful teams), Wings Cross (wingers swap sides on the way out), Free Flowing (players go where they want, generally better for PP than even strength). Varying the breakout between games and periods can help prevent the AI from reading your play.
- **Neutral Zone Offensive** – how players move through the neutral zone on offence. Positional, Grouped, Crisscross, and Wings Cross are available.
- **Offensive Zone** – the formation your forwards adopt in the attacking zone: Overload Slot, Funnel, Triangle, Positional High/Low, etc. Overload Slot directs players towards the front of the net and is effective for physical teams. Funnel works well across many team types.
- **Forecheck** – how aggressively your team pursues the puck in the offensive zone. The 3-2 (combined with 1-1-3 in neutral zone) approximates a Left Wing Lock if the left winger is set to play defensively. A 1-4 forecheck is the most conservative (trap-like). 1-2-2 is a moderate, hybrid approach.
- **Neutral Zone Defensive** – the shape your team holds in the neutral zone when defending. 1-2-2 and 2-1-2 are common choices.
- **Defensive Zone** – how your players cover in their own end. Positional is the most commonly recommended; Open can leave defenders out of position. Collapse places defenders tightly around the net, limiting close-in shots.

> ⚠️ Note: Several forum posts confirmed that the names "Diamond" and "Umbrella" for PP offensive zone formations appear to be swapped in the game compared to their real-world descriptions. The formation showing as "Diamond" in-game is a 1-3-1 set (one player at the blue line, one in front of the goal), while "Umbrella" presents as a wider 1-2-2 shape. Use the "Show Positioning" view in the Unit Tactics screen to verify the actual shape of any formation before committing to it.

### A Representative Even Strength Setup

The table below reflects settings that appeared consistently across multiple experienced players' shared tactics. Unlike PP and PK, even-strength tactics vary considerably by team style and personnel — treat this as a starting framework rather than a fixed template. The settings shown are broadly suited to an offensively minded team with reasonable all-round attributes.

**Tactical Settings**

| Setting | Line 1 (Offensive) | Line 2 (Balanced) | Line 3 (Two-Way) | Line 4 (Checking) |
|---|---|---|---|---|
| Mentality | Very Offensive | Offensive | Normal | Defensive |
| Aggressiveness | Normal | Normal | Normal | Aggressive |
| Backchecking | Normal | Hard | Hard | Very Hard |
| Gap Control | Very Tight | Tight | Tight | Tight |
| Puck Pressure | Heavy | Heavy | Normal | Heavy |
| Hitting | Normal | Normal | Normal | Hard |
| Tempo | High | High | Normal | Normal |
| Passing | Creative / Normal \* | Normal | Normal | Safe |
| Shooting | Selective | Heavy | Heavy | Selective \*\* |
| Dumping the Puck | Rarely | Normal | Normal | Often |

**Tactical Systems**

| Setting | Recommended Starting Point |
|---|---|
| Breakouts | Free Flowing (Lines 1–2) / Positional (Lines 3–4) |
| Neutral Zone Offensive | Crisscross (Lines 1–2) / Positional (Lines 3–4) |
| Offensive Zone | Overload Slot or Funnel |
| Forecheck | Positional High (Lines 1–2) / 1-2-2 or 3-2 (Lines 3–4) |
| Neutral Zone Defensive | 1-2-2 |
| Defensive Zone | Positional |
| Offensive Faceoffs | Point Shot |
| Defensive Faceoffs | Basic |

\* Creative passing on Line 1 is only appropriate if the players on that line have the Creativity and Passing attributes to support it (roughly 15+). For players with lower creativity, Normal passing reduces turnovers without sacrificing much in terms of play quality.

\*\* Line 4 is shown as Selective because a checking line generally benefits more from keeping possession and grinding than from firing pucks away on low-percentage shots. Line 3 is set to Heavy as two-way players are expected to generate pressure and rebounds; adjust based on your specific players' shooting attributes.

\*\*\* The Tactical Systems table is less differentiated by line than the Tactical Settings table. Community discussion was most specific about breakouts and forechecking style varying by line; the other systems settings (Offensive Zone, Neutral Zone Defensive, Defensive Zone, Faceoffs) were broadly consistent across all lines in most shared setups. As always, vary breakouts and Neutral Zone Offensive settings periodically to prevent the AI from adapting to your approach.

> Breakout and Neutral Zone Offensive settings should be varied every 5–10 games to prevent the AI from fully adapting to your approach.

### Key Tactical Settings Explained

**Giveaways and takeaways:** Giveaways occur when a player turns the puck over involuntarily. Takeaways occur when a player pokes or strips the puck from an opponent. Passing set to Creative or Adventurous for players with low creativity will cause more giveaways. Poke Check is the primary driver of takeaways; tight gap control, aggressive players who can close on the puck carrier, and high puck pressure also help.

**Penalties:** Excessive penalties are most commonly caused by high puck pressure, high aggressiveness, very hard hitting, and gap control that is too tight for the player's skating ability. Checking a specific opponent (via the "Player to Check" personal tactic) can also generate penalties. Coach discipline ratings also have an effect: discipline attributes below 14 or 15 in the coaching staff can lead to undisciplined play.

**Shots Against / Defensive Play:** Giving up a large number of shots is often a sign of defensive tactical issues. Common causes include relaxed gap control, inappropriate forechecking giving up odd-man rushes, or the team being "figured out" by the AI after multiple games of the same approach. Varying breakouts and neutral zone settings regularly can help. Playing a more defensive mentality on the second line onwards while keeping the first line offensive can reduce shots against without significantly impacting scoring.

### Shooting Settings

The shooting setting is better understood as a psychological instruction than a literal shot frequency counter. Setting a player to "Selective" tells them to look for quality opportunities before shooting. "Barrage" and "Heavy" generate more shots at lower quality. Some experienced players use Selective for elite snipers (rating 16+ in Wristshot) and Heavy for players with 13–15 in Wristshot who are expected to create rebound opportunities.

Shot Targeting (Low, High, Glove Side, Blocker Side, Five Hole) can be set, but there is community disagreement about its effectiveness. Some players report success targeting low shots against goalies with poor Rebound Control, and using Five Hole against goalies with better Positioning. The consensus is that the setting has limited or inconsistent effect and should not be relied on heavily.

### Approach to Defensive Play

While highly offensive tactics are the most commonly successful in EHM, a defensive system can work under the right conditions. Key requirements:

- Players with high Positioning, Anticipation, Pokecheck, Checking, Work Rate, and Stamina.
- Tight gap control maintained at the defensive line level.
- Very Hard backchecking for forwards.
- A defensive zone setting of Positional or Collapse (not Open).
- For board-play-heavy defensive systems, strong players with high Strength to win physical battles along the boards.

A defensive mentality tends to struggle in playoffs compared to Normal or Offensive settings; this is a recurring observation across the community.

---

## 3. Personal Tactics

### Why Personal Tactics Matter

Personal tactics allow you to instruct each player individually, overriding broad unit settings where a player's attributes justify a different approach. They are widely regarded as one of the highest-leverage tools in EHM. Players set with personal tactics that align with their actual attributes will perform noticeably better.

### Setting Personal Tactics by Player Type

The general approach is to look at each player's attributes and set their personal tactics to match what they are actually good at:

- **Elite offensive player / sniper:** Selective or Very Selective shooting; creative or normal passing if they have high creativity; carry the puck if they have 16+ in Strength, Deking, Stickhandling, and Getting Open; join the rush.
- **Two-way forward:** Balanced settings; Hard backchecking; Tight gap control if their skating supports it; Normal passing.
- **Checking forward / defensive forward:** Defensive mentality; Hard or Very Hard backchecking; Hard hitting if their Hitting and Aggressiveness attributes support it; do not carry the puck; join the rush setting depends on the line.
- **Offensive defenseman:** May join the rush if they have high Stamina and skating ability; Barrage shooting if they have a Slapshot rating of 16+; Pass tendency if they are a playmaker.
- **Defensive defenseman / stay-at-home:** Defensive mentality; Hard backchecking; Tight gap control; Safe passing; do not join the rush; do not carry the puck.
- **Physical players / enforcers:** Hard or Very Hard hitting; high Aggressiveness matching their attribute; Fighting Allowed (not Encouraged, to avoid repeated suspensions).

### Key Personal Tactic Options

- **Join the Rush** – whether this player will push forward to support attacks. Important for forwards and certain offensive defensemen. On the PK, all four skaters should generally be set to not join the rush to keep them focused on defence.
- **Carry the Puck** – whether this player will skate with the puck to advance it rather than passing. Should only be set for players with strong Strength (16+), Deking, Stickhandling, and Getting Open. Used sparingly by most experienced players.
- **Shoot/Pass Tendency** – whether the player generally looks to shoot first or pass first. Set to Shoot for snipers; Pass for playmakers and creative centres.
- **Fighting** – Allowed lets the player fight when a situation arises naturally. Encouraged pushes them to initiate fights, which leads to more game misconduct penalties and suspensions and should be used very carefully. Disallowed prevents fighting entirely.
- **Player to Check** – assigns this player to shadow a specific opponent. The setting is saved between back-to-back games and in playoff series but typically resets at other times. Note that having a player check a specific opponent can slightly reduce their offensive production.

### Scaling Personal Tactics to Player Attributes

One community-developed framework for scaling tactical settings to player attribute levels (using the 1–20 attribute scale):

| Attribute Level | Setting |
|---|---|
| 1–7 | Weakest (1/5) |
| 8–11 | Second weakest (2/5) |
| 12–14 | Normal (3/5) |
| 15–17 | High (4/5) |
| 18–20 | Highest (5/5) |

This framework is primarily applicable to settings like Aggressiveness, Hitting, Puck Pressure, and Gap Control. Apply the player's corresponding attribute value (e.g. Aggressiveness for the Aggressiveness setting, Speed/Acceleration for Gap Control) to determine the appropriate setting level.

### Goalie Personal Tactics

Goalies benefit from two personal tactic settings:

1. **Mentality:** Set to the most Defensive option available.
2. **Passing:** Set to the safest passing option available.

Some players also set Aggressiveness for their goalies, though this has uncertain impact.

### Situational Personal Tactics (ES, PP, PK)

Personal tactics can be set separately for Even Strength, Power Play, and Penalty Kill situations using the dropdown menu on the Personal Tactics screen. When you leave the screen and return, the dropdown defaults back to "All Situations" – this is a display quirk and does not affect the settings you saved. Your situational settings are preserved; verify by selecting the relevant situation from the dropdown.

Important: if you set anything under "All Situations," it will override your situational settings for that option. Use "All Situations" only for things that truly apply in every context.

### Personal Tactics Persistence Bug

Personal tactic settings on individual players can disappear when a player is sent to the minors or to injured reserve. This appears to be a known limitation. Practical workarounds:

- Keep notes on your personal tactic settings.
- Save tactics to a `.tct` file after setting them up so you have a reference.
- After returning an injured or recalled player to the roster, always check that their personal tactics are still intact before simming games.
- Use the drag-and-drop method on the "S" (starter) indicator in the roster screen when swapping players between lines – this can preserve personal tactics compared to removing and re-adding the starter flag.

---

## 4. Line Construction

### General Philosophy

Tactics are only as good as the players executing them. The most important principle is to build lines so that the players on each line share compatible styles and attribute profiles. Putting a finesse playmaker on a physical, dump-and-chase checking line will not work well, and vice versa.

There is no single "correct" tactic in EHM – the AI managers adapt over time to your approach (the developer confirmed this in community posts), meaning tactics that work early in a save may become less effective as the season progresses and the AI catches up. Varying breakouts and neutral zone settings regularly is one way to stay ahead.

### Forward Lines

Common line structures:

- **Line 1 (Offensive):** Two high-quality forwards (sniper + playmaker) supported by a third versatile forward. Offensive mentality, high tempo, creative passing for the playmaker, selective/heavy shooting for snipers.
- **Line 2 (Offensive or Balanced):** A strong second pairing with good individual stats. Can be a near-clone of Line 1 tactics or slightly more conservative.
- **Line 3 (Two-Way or Defensive):** A mix of defensive responsibility and some offensive capability. Hard backchecking. Normal mentality.
- **Line 4 (Checking / Energy):** Physical players. Defensive mentality. Hard hitting. High puck pressure. Often used for PK assignments.

Lines 1 and 2 are generally kept on PP duty, while Lines 3 and 4 handle PK assignments. However, there is no hard rule – use whichever players have the best defensive attributes for PK regardless of their line placement.

### Defensive Pairings

- **Pair 1:** A well-rounded defenseman capable of both offensive and defensive contributions paired with a strong defensive partner.
- **Pair 2:** A solid two-way pair with at least one player capable of contributing offensively.
- **Pair 3:** A defensive-oriented pairing, ideally with reliable skating and positioning.

Ideal age range for defensemen is roughly 25–32. Young defensive prospects generally take time to develop and should not be rushed into heavy NHL minutes too early.

### Defensive Attributes to Prioritise

For defensemen (particularly in a defensive system):

- **Positioning** – arguably the most important attribute for a stay-at-home defenseman.
- **Anticipation** – how well the player reads and reacts to plays; heavily cited as one of the most underrated attributes in EHM.
- **Checking** – general defensive ability.
- **Pokecheck** – primary driver of takeaways.
- **Stamina and Work Rate** – allow a player to sustain effort over long shifts and across a full season.
- **Speed and Acceleration** – required to maintain tight gap control without giving away penalties.
- **Hitting** (with low Aggressiveness) – allows physical play without excessive penalties.

---

## 5. Line Matching

Line matching allows you to set your lines to face specific opposing lines. The most common matching scheme discussed is 1v3, 2v2, 3v1, 4v4 – designed to put a defensive checking line against the opponent's top offensive unit.

Line matching only provides a guaranteed advantage on home ice (where you have the last line change). Away games allow the opponent to respond to your line choice, so the benefit is reduced.

Excessive use of line matching can inadvertently limit ice time for your top offensive lines and give more minutes to your checking line than intended. Monitor ice time carefully if using aggressive line matching.

Some players avoid line matching entirely and instead focus on having all four lines strong enough that mismatches are minimised. Others use line matching sparingly, primarily in the playoffs.

---

## 6. Power Play Tactics

### Player Selection

- Every PP unit needs at least one **playmaker** (high Creativity and Passing) and at least one **goal scorer** (high Wristshot or Slapshot).
- Fill remaining spots with offensively minded players. Avoid defensive forwards, enforcers, stay-at-home defensemen, and players with very low offensive attributes on PP units.
- If offensive talent is limited, two-way players can be used to fill the last spots on a PP unit.
- **Deflection** is an important and often overlooked attribute. Players with high Deflection positioned in front of the net can generate goals from point shots. A large, strong player with good Deflection is ideal in this slot even if their overall offensive attributes are modest.

### Offensive Zone Formations

The main PP offensive zone options and their general use:

- **Funnel:** Frequently cited as the most broadly effective PP formation. Works well across a variety of team compositions.
- **Diamond (1-3-1 in-game):** Places one player at the blue line and one in front of the net. Effective with good shooters in the correct positions. Noted as not working well for all users.
- **Umbrella (1-2-2 in-game):** A wider shape with two players near the blue line and two at the faceoff circles. Effective for 5-on-4 situations.
- **Overload Slot:** Some players use this as an occasional alternative to Funnel to shift the shape and disrupt opposing PKers' positioning.
- **Triangle:** Puts the centre in front of the net with wings behind. Can work with the right personnel.

> ⚠️ As noted in Section 2, the "Diamond" and "Umbrella" labels appear to be reversed in-game compared to real-world hockey nomenclature. Verify formations using the "Show Positioning" option in the Unit Tactics screen.

One community approach for 5-on-3 situations: use Diamond (the in-game 1-3-1) as it creates a more compact and controlled formation suitable for a two-man advantage.

### Stick Handedness and Positioning

Stick handedness has a meaningful impact on PP effectiveness:

- For the **Diamond / 1-3-1** formation: the Left Wing should ideally be a **right-hand shot** (stick pointing towards the net) and the Right Defence position should ideally be a **left-hand shot**. This maximises the shooting angles for one-timers and point shots.
- The general principle is that shooters should have their sticks pointing **inward towards the goal**. This applies to any player positioned where they would shoot on the PP.
- It is not mandatory to use a defenseman in the defensive positions – any player with the correct handedness and a good shot can fill those positions.
- Community experience has shown that having very high-quality left-handed shooters in positions that call for right-handed shots (or vice versa) can still be effective if their shot attributes are strong enough.

### Key PP Tactical Settings

A well-regarded PP setup (5-on-4) includes:

| Setting | Recommended Value |
|---|---|
| Mentality | Very Offensive |
| Aggressiveness | Normal |
| Backchecking | Normal |
| Gap Control | Very Tight |
| Puck Pressure | Very Heavy |
| Hitting | Normal |
| Tempo | High |
| Passing | Normal |
| Shooting | Selective |
| Dumping the Puck | Normal to Rarely |
| Breakout | Free Flowing or Positional |
| Neutral Zone Offensive | Grouped or Crisscross |
| Offensive Zone | Umbrella or Funnel |
| Forecheck | Positional High |
| Neutral Zone Defensive | 1-2-2 |
| Defensive Zone | Positional |
| Offensive Faceoffs | Point Shot |

- **Point Shot faceoffs:** When using this setting, designate one defenseman as a passer and the other as the shooter. The shooter should have a high Slapshot rating and be set to Barrage shooting in personal tactics.
- **Tempo:** Some players find that lowering tempo to Normal or Low actually improves PP results, as players wait to develop a better play before shooting.
- **Passing:** Avoid setting passing to Creative on the PP unless players have genuinely high Creativity and Passing attributes, as it will generate turnovers and short-handed goal attempts.
- **Dumping the Puck:** Should be set to Rarely or Normal on the PP. Very Often or Often is counterproductive – it surrenders possession, which is the opposite of what a PP should be doing.
- **Berserk aggressiveness** on PP lines has been noted as counterproductive; it leads to penalties and erratic play.

### The Diamond Setup in Detail

When using the Diamond (1-3-1) setup:

1. Place one player at the **blue line** as the **playmaker** (high Creativity/Passing; set to Pass tendency, defensive/normal mentality so they control the puck calmly).
2. Place the **Right Defence** as a **left-hand shooter** set to Barrage – this is the shooting threat from the right side of the point.
3. Place the **Left Wing** as a **right-hand shooter** set to Barrage – the shooting threat from the left side.
4. The **Centre** acts as a secondary playmaker mid-slot.
5. The **Right Wing** (or net-front presence) should be a strong player with good Deflection.
6. Set the playmaker (blue line) to Pass tendency; set shooters (LW and RD positions) to Shoot tendency.
7. Tempo: Low to Normal.

### The Umbrella / 1-3-1 Setup in Detail

One detailed approach shared in the community for the Umbrella (1-2-2 in-game) setup:

1. Use the **1-3-1 called "Umbrella" in-game** (verify via Show Positioning).
2. **Right Defence:** Left-hand shooter set to Shoot, Barrage shooting, does not join rush.
3. **Left Wing:** Right-hand shooter set to Shoot, Barrage or Selective shooting, joins rush.
4. **Centre:** Primary puck carrier; Carry Puck enabled; normal shooting (this creates the "opening" down the middle while others shoot).
5. **Left Defence (playmaker):** Joins rush, Pass tendency, Selective shooting to act as a secondary playmaker.
6. The player in front of the net: screen/deflection role with high Dumping set to Very Often (to encourage the net-front battle).
7. Tempo: Very Low overall.
8. Set entire line to Heavy shooting in unit tactics, then use personal tactics to override individuals (e.g. centre to Normal, playmaker to Selective).

The logic behind mixed shooting settings is that one player set to Normal among a line of heavy shooters becomes the natural "go-to" option who sets up others rather than firing himself.

### Avoiding Short-Handed Goals Against

Short-handed goals against are primarily caused by:

- Defensive-zone turnovers during PP setup, especially from a lone defenseman at the point being stripped and breaking out alone.
- Formations with a single defenseman at the blue line (Diamond and Umbrella both have this risk). Using formations with two defensemen higher up reduces the exposure.
- Passing set too creative or aggressively for your players' actual attributes.
- The non-shooter defenseman being set too offensively, so they do not recover when the PP breaks down.

Mitigation approaches:

- Set the **non-shooting defenseman** (the passer/playmaker on the blue line) to a more conservative Mentality (Neutral or Offensive rather than Very Offensive) and to a Relaxed backchecking setting so they hustle back on turnovers.
- Lower Tempo slightly.
- Set Passing to Safe or Normal rather than Creative.
- Consider using 2-defenseman PP formations (e.g. 2-1-2 or 1-2-2 with two blueliners) to reduce vulnerability.

### PP Training and Practice Allocation

Practice allocation does have some effect on PP performance, though the community has noted diminishing returns at very high allocations. A commonly recommended split is:

- **40% Even Strength / 30% PP / 30% PK**

Some players periodically shift training if one area is struggling (e.g. temporarily going to 40% PP and 20% PK to improve a struggling power play), then returning to a balanced split. One community member noted that switching to **40% ES / 10% PP / 50% PK** produced a strong PP result, suggesting that the relationship between training allocation and special teams performance is not always intuitive.

### General PP Troubleshooting

If your PP is underperforming despite correct tactical setup:

1. **Check your coach's Power Play rating** – a coach with a low PP rating in the database may be holding your PP back regardless of your own tactical skill.
2. **Check training allocation** – if PP training is at or below the default (often around 15–20%), increasing it can produce rapid improvement.
3. **Season-to-season variation exists** – the community has observed that special teams performance appears to fluctuate on a season-level basis in the game's simulation, with some seasons simply being poor special teams years.
4. **Talent ceiling is real** – PP% is significantly influenced by the quality of your PP personnel. A PP of 15–20% with average players is not unusual; 20–25% requires good talent; 25%+ typically requires elite PP players.
5. **Avoid over-tinkering** – changing tactics every few games prevents chemistry from building. Give any PP adjustment at least 10–20 games before evaluating.
6. **Position capabilities matter** – players playing out of position on PP units suffer a performance penalty. Ensure your PP players are capable at the positions you are using them in, or practice accordingly.

---

## 7. Penalty Kill Tactics

### Player Selection for the PK

Ideal PK player attributes:

- **Defensemen:** High Stamina, Work Rate, and Pokecheck (15+ recommended). Good Positioning and Checking are also important.
- **Forwards:** High Speed, Anticipation, Work Rate, and Positioning. Some physical attributes (Strength, Balance) help in board battles.

There is no rule that PK players must come from the 3rd and 4th lines – use the players with the best defensive attributes regardless of their even-strength line. Many players split their PK units across different offensive lines. PK assignments are often separate from even-strength line placement.

### Key PK Tactical Settings

A well-regarded PK unit setup:

| Setting | Recommended Value |
|---|---|
| Mentality | Very Defensive |
| Aggressiveness | Normal |
| Backchecking | Very Hard |
| Gap Control | Normal (avoid Very Tight unless players can skate) |
| Puck Pressure | Normal |
| Hitting | Normal to Hard |
| Tempo | Normal (or High for forwards) |
| Passing | Very Safe |
| Shooting | Selective |
| Dumping the Puck | Very Often or Often |
| Breakout | Positional |
| Neutral Zone Offensive | Positional |
| Offensive Zone | Positional |
| Forecheck | 0-4 |
| Neutral Zone Defensive | 0-4 |
| Defensive Zone | Tight Box |
| Offensive Faceoffs | Basic |
| Defensive Faceoffs | Basic |

> ⚠️ **Easy backchecking should never be used on PK.** It means players do not bother returning to their defensive zone. This is equivalent to having a player like Pavel Bure (strong offensively, poor defensively) as your penalty killer. Any apparent success with Easy backchecking on the PK is likely attributable to strong goaltending masking the defensive exposure.

> ⚠️ **Defensemen should not be set to Join the Rush on the PK.** This pulls them out of defensive position and creates dangerous situations.

**Passing:** Very Safe is the most important single PK tactical setting highlighted across the community. It minimises the risk of turnovers in the defensive zone that lead directly to PP goals. This should also be applied to your goalie's personal tactics.

**Dumping the Puck:** Set to Often or Very Often. Getting pucks deep clears zone and relieves pressure. If defenders are making dangerous diagonal slot passes when the puck is loose in the defensive zone, ensure individual player dumping settings are also set to Very Often in personal tactics, as unit tactics alone may not fully override individual tendencies.

### Defensive Zone Formation

**Tight Box** is the most consistently recommended PK defensive zone formation. The principle is similar to a defensive zone in basketball: fill the area near the goal to force the opposition to shoot from outside, limiting high-danger chances. Combined with shot-blockers in the lineup, a Tight Box PK can concede shots but keep them to low-danger areas.

**Wide Box** is generally not recommended on the PK unless your players have exceptional individual skills (e.g. Ovechkin-level players), as it spreads the defence and allows the opposition to work into high-danger positions.

### Zone vs Man Coverage on the PK

Zone coverage is strongly recommended for PK situations. Man-to-man coverage requires players to follow specific opponents all over the ice, which is unrealistic and dangerous when you are already a player short. Zone coverage ensures at least one defenseman remains near the net and that defenders are positioned to cover shooting lanes rather than chasing their man around the ice.

### PK Training and Practice Allocation

As with the PP, increasing PK training allocation can produce noticeable short-term improvement. Periodically shifting to a PK-heavy training split (e.g. 40% ES / 10% PP / 30-40% PK) for a month or two within a season, then returning to a balanced allocation, is one approach used in the community.

### PK Troubleshooting

If PK% is low (below 80–82%):

1. Verify personal tactics for all PK players – in particular, ensure passing is set to Safe or Very Safe and that none are set to join the rush.
2. Check that "Use Unit Tactics" is enabled so your PK unit is not inheriting offensive team tactics.
3. Examine your PK player attributes – low Work Rate, Stamina, or Pokecheck on your PK personnel will limit effectiveness regardless of tactics.
4. Make sure your goalie has personal tactics set to Defensive mentality and Safe passing.
5. Consider your PK training allocation.
6. Check your head coach's Penalty Killing rating in the database if you can.
7. Avoid excessively wide gap control settings on the PK, as they allow the opposition room to set up in your zone.
8. Avoid the Wide Box defensive zone formation.

A PK% of 88–90% is considered very good. Getting above 90% consistently requires strong personnel and well-tuned personal tactics.

---

## 8. Practice Allocation

Practice is divided across three categories: **General (Even Strength)**, **Power Play**, and **Penalty Kill**. The allocation you set influences how your team performs in each area over the season.

General guidance:

- A balanced starting allocation is approximately **40% General / 30% PP / 30% PK**.
- If one area is struggling, temporarily increase its allocation at the expense of the others. Return to a balanced split once improvement is seen.
- Very high PP training (60%+) may come at the cost of even-strength play; there are likely diminishing returns at extreme allocations.
- Younger players may benefit more from General training to develop overall skills.
- The practice schedule can be varied week-to-week or month-to-month, for example running intensive PP training for a month and then shifting to balanced training.
- Chemistry between linemates can be developed through extended practice together; some players rotate their PP units through intensive training blocks to improve unit chemistry.

---

## 9. In-Game Management

### Benching Players

A player can be benched mid-game without removing them from all lines. To do so:

1. From the in-game Tactics screen, go to the **View** menu.
2. Select **Benchings**.
3. Click the **BEN** indicator next to the player's name to bench them.

This is useful for removing an underperforming or injured player from ice time without disrupting the rest of the roster.

### Tactical Changes Mid-Game

In-game tactical adjustments that have been cited as effective:

- **Changing the Neutral Zone Offensive setting between periods** – switching from Grouped to Positional or vice versa can break a deadlock and catch the opposition out of their adjusted defensive positioning.
- **Switching between Forward Usage modes** (Normal, Overload, Just Two, Just Three) to increase ice time for top players when chasing a game.
- **Swapping wingers between lines** – even a temporary swap of the wingers between Lines 1 and 2 mid-game can change the dynamic if the opposition has adjusted to one line's play.
- **Changing shooting frequency** during a slump – if the team is shooting frequently but scoring nothing, switching to Selective can prompt players to find better opportunities; if opportunities are being wasted, moving to Heavy can increase pressure.

> ⚠️ Caution: changing tactics too frequently within a game or across consecutive games can confuse players and worsen performance. Reserve tactical changes for when your team is clearly not working.

### How Often to Change Tactics

General guidance from experienced players:

- Give a new tactic a minimum of **10–20 games** before evaluating. Short-term variance (good or bad runs) should not trigger immediate changes.
- During a stable tactical period, change things every **5–8 games** to prevent the AI from fully adapting to your approach. Small changes to breakouts or neutral zone settings are usually sufficient.
- Avoid changing tactics in the immediate run-up to the playoffs – let the team settle into a rhythm. In the playoffs themselves, adjust more responsively game-to-game as you face the same opponent multiple times and they will adapt to you.
- Common slump periods: games 22–30, 42–50, and 62–70. If you over-tinker with tactics during a slump, it can deepen it. Similarly, leaving tactics completely unchanged for too long can cause the same issue.

---

## 10. Coaching and Tactics

Head coach attributes and preferred playing style both influence team performance, particularly for players who do not coach games themselves (i.e. let the assistant handle simmed games).

- **Coaching attributes** (Tactics, Shooting, Offensive, Defensive, etc.) directly affect how well the coach develops those aspects of the team's play. The Tactics attribute influences tactical implementation; higher is better.
- **Preferred playing style** (Attacking, Defensive, Direct, Patient, etc.) affects how well the coach implements certain tactical approaches. Matching your tactical approach to the coach's preferred style will yield better results, particularly in player development of related attributes. A coach with an Attacking preference will develop offensive attributes better; a Defensive preference coach will develop defensive attributes better.
- **Discipline** attribute in the coaching staff affects how many penalties your team takes. Values below 14 tend to result in undisciplined play. Aim for discipline ratings of 15+ in your coaching staff.
- For players who coach games themselves, the coach's overall attribute quality matters more than their style preference, as the player is making the tactical decisions directly.
- Coaches with a **General** style of play are often recommended as the most flexible choice for player development, as they do not bias towards one area.

---

## 11. Expected Results and Benchmarks

Based on community experience:

| Metric | Poor | Acceptable | Good | Excellent |
|---|---|---|---|---|
| PP% | Below 12% | 12–17% | 17–22% | 22%+ |
| PK% | Below 80% | 80–85% | 85–90% | 90%+ |
| Goals Against Avg (NHL) | 3.5+ | 2.8–3.4 | 2.4–2.8 | Below 2.4 |

League-wide medians (from community analysis of NHL saves): PP% tends to oscillate between approximately 19.5% and 21.5% across seasons. PK% median oscillates between approximately 78% and 81.5%.

The highest PP% ever recorded in the community was approximately 34.8% over half a season. The highest single-season PK% recorded was 95.5%.

The developer confirmed in community posts that the AI keeps track of how different tactics perform against each other over time and adapts accordingly. This is why any single tactic will eventually become less effective, and periodic variation is necessary.

---

## 12. Sources

- https://www.ehmtheblueline.com/forums/viewtopic.php?t=4331 (Official Tactics Thread: Even Strength)
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=3624 (Official Tactics Thread: Power Play & Penalty Kill)
