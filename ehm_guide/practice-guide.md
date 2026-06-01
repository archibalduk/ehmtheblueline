# Eastside Hockey Manager – Practice Guide

This guide covers the practice and player development system in Eastside Hockey Manager, drawing on community experience from EHM 2007 through to EHM 1 (Steam release). It explains how to set up and navigate the practice screen, which practice areas develop which attributes, how to manage player condition, how to build effective practice schedules across the season and off-season, and how to select and assign coaching staff. The guide is applicable to EHM 2007 and EHM 1, as the core practice system is consistent across both versions.

This summary has been prepared by Claude AI based on a review of the source forum threads from ehmtheblueline.com and set out in the `Sources` section at the end of this guide.

---

## Table of Contents

1. [The Practice Screen](#1-the-practice-screen)
   - [Finding the Intensity Settings](#finding-the-intensity-settings)
   - [Taking Control of Practice](#taking-control-of-practice)
   - [Practice Schedules](#practice-schedules)
   - [Viewing Attribute Changes](#viewing-attribute-changes)
   - [The Practice Percentage Split](#the-practice-percentage-split)
2. [What Each Practice Area Develops](#2-what-each-practice-area-develops)
3. [Practice Intensity Levels](#3-practice-intensity-levels)
4. [Player Condition and Fatigue](#4-player-condition-and-fatigue)
   - [Condition Basics](#condition-basics)
   - [Managing Tired Players](#managing-tired-players)
   - [Identifying Potential Injuries](#identifying-potential-injuries)
   - [Chronic Fatigue and Condition Caps](#chronic-fatigue-and-condition-caps)
5. [Season Practice Schedules](#5-season-practice-schedules)
   - [The Core Principle: Rotation](#the-core-principle-rotation)
   - [The 3 Intensive / 3–4 Medium Framework](#the-3-intensive--34-medium-framework)
   - [Shindigs' Named Schedules (EHM 1)](#shindigs-named-schedules-ehm-1)
   - [A Role-Based Approach](#a-role-based-approach)
   - [The General Schedule](#the-general-schedule)
   - [Goalie Schedules](#goalie-schedules)
   - [Special Teams Practice Blocks](#special-teams-practice-blocks)
6. [Off-Season Practice](#6-off-season-practice)
   - [The All-Intensive Off-Season Schedule](#the-all-intensive-off-season-schedule)
   - [Summer Condition Behaviour](#summer-condition-behaviour)
   - [When to Start and Stop Off-Season Training](#when-to-start-and-stop-off-season-training)
7. [Pre-Season and Training Camp](#7-pre-season-and-training-camp)
8. [Playoff Practice](#8-playoff-practice)
9. [Goaltending Training for Skaters](#9-goaltending-training-for-skaters)
10. [Coaching Staff and Practice](#10-coaching-staff-and-practice)
    - [Coach Types and Their Best Use](#coach-types-and-their-best-use)
    - [Assigning Coaches to Practice Areas](#assigning-coaches-to-practice-areas)
    - [Key Coaching Attributes](#key-coaching-attributes)
    - [How Many Coaches Per Practice Area](#how-many-coaches-per-practice-area)
11. [Player Development Principles](#11-player-development-principles)
    - [What Drives Development](#what-drives-development)
    - [Player Personality and Development](#player-personality-and-development)
    - [Developing Young Players and Prospects](#developing-young-players-and-prospects)
    - [Player Decline](#player-decline)
    - [Training a New Position](#training-a-new-position)
    - [The AI vs Human Practice Management](#the-ai-vs-human-practice-management)
12. [The Practice Percentage Split](#12-the-practice-percentage-split)
13. [Sources](#13-sources)

---

## 1. The Practice Screen

### Finding the Intensity Settings

The intensity settings for each practice schedule are not immediately visible when you open the Practice screen. To access them:

1. Go to the **Practice** screen.
2. Click the **Schedule** dropdown in the upper right area of the screen.
3. Select the schedule you want to edit (e.g. "General", "Fitness", "Defensive").
4. The intensity settings for each practice area (Conditioning, Skating, Tactical, Shooting, Offensive Skills, Defensive Skills, Goaltending) will appear at the **bottom of the screen**, where they can be adjusted individually.

This is a common source of confusion for new players — the intensity options are only visible after a specific schedule has been selected from the dropdown.

### Taking Control of Practice

By default the head coach may be set to manage practice. To take control yourself:

- Go to **GM Options** (General Manager Options).
- Set **Head Coach takes control of practice** to **No**.

If this is left set to **Yes**, the head coach will manage all aspects of practice — including reassigning coaches to different areas than the ones you have set. Most experienced players recommend taking manual control, as the AI coaching of practice produces suboptimal results: it tends to put most players on the default General schedule and does not rotate schedules or monitor condition effectively.

### Practice Schedules

EHM provides a number of named schedule slots (General, Fitness, Skating, Defensive, etc.) plus at least one marked "Unused". You can rename any schedule slot to any name you like, including the Unused slots. This allows you to create custom schedules tailored to specific player roles, age groups, or seasonal phases, without being limited by the default slot names.

To assign an individual player to a bespoke schedule without pulling other players off their current one, rename an Unused slot and configure it as needed, then assign only that player to it.

### Viewing Attribute Changes

To view attribute changes on the Practice screen:

1. Open the Practice screen.
2. Click the **View** menu.
3. Select **Attributes** instead of General.

Attributes that have increased will be shown in **green**, and those that have decreased will be shown in **red**. However, this display is known to be unreliable — it sometimes shows green for attributes that have not changed and red for attributes that have not declined. It is best used as a rough indicator only. Tracking development accurately requires recording attributes manually or using an external tool such as EHM Assistant.

### The Practice Percentage Split

In the lower right of the Practice screen, three percentages control how practice time is divided between **General (Even Strength)**, **Power Play**, and **Penalty Kill** focus. These affect how well the team's special teams perform. See Section 12 for guidance on setting these.

---

## 2. What Each Practice Area Develops

The seven practice areas map broadly to the following player attributes:

| Practice Area | Attributes Developed |
|---|---|
| Conditioning | Agility, Stamina, Strength |
| Skating | Acceleration, Balance, Speed |
| Tactical | Teamwork (and tactical learning) |
| Shooting | Deflection, Slapshot, Wristshot |
| Offensive Skills | Deking, Passing, Stickhandling |
| Defensive Skills | Checking, Hitting, Pokecheck, Positioning |
| Goaltending | Blocker, Glove, Rebound Control, Recovery, Reflexes (for goalies); Positioning (for skaters — see Section 9) |

Other attributes — particularly mental attributes like Anticipation, Determination, Flair, and Work Rate — are primarily influenced by game experience and player personality rather than practice. **Anticipation** develops very slowly if at all; **Work Rate** is considered by most experienced players to be essentially static throughout a player's career.

**Teamwork** is developed through Tactical practice and requires a coach with good tactical knowledge. It can also fluctuate oddly — players sometimes lose a point of teamwork over a summer and regain it at the start of the season without any change in practice schedule.

> ⚠️ Setting any practice area to **Light** is generally detrimental. Attributes trained on Light tend to decline rather than improve. The consensus is to use a minimum of **Medium** for any area you want to maintain, and never use Light during the regular season. Rest is preferable to Light for tired players.

---

## 3. Practice Intensity Levels

Practice intensities from lowest to highest are: **None → Light → Medium → Intensive**.

- **None** — no training in this area. Attributes will decline over time.
- **Light** — broadly detrimental; attributes trained on Light tend to decline rather than hold. Avoid for regular use. Acceptable only for players returning from injury who need very gradual reintroduction.
- **Medium** — maintenance level. Attributes will hold roughly steady and may gradually improve depending on the player's potential and coaching quality.
- **Intensive** — active development. Drives attribute growth but also increases conditioning load, injury risk, and fatigue.

> ⚠️ Community disagreement exists on one specific aspect: **all-intensive schedules** (every area set to Intensive) behave differently in EHM 1 vs EHM 2007. In EHM 2007, all-intensive could cause rapid condition decline during the season. In EHM 1 after certain patches, some players experienced no condition drop on all-intensive while others did. The safest rule during the regular season is to limit intensive areas to 2–4 per schedule, depending on the player's playing time and natural fitness.

---

## 4. Player Condition and Fatigue

### Condition Basics

Player condition (expressed as a percentage) reflects how physically fresh a player is. Condition affects game performance — players below 85–87% will begin to underperform, and playing repeatedly at low condition increases injury risk.

The **Natural Fitness** hidden attribute is the primary driver of how quickly a player regains condition. The visible **Stamina** attribute has less effect on condition recovery than most players expect.

### Managing Tired Players

- Put players on **Rest** immediately after a game when they are showing the "needs a rest" status. The most effective approach is to switch them to Rest on the evening of the game ("eve" or "pm") and return them to their regular schedule the following morning ("am").
- Never practice players below approximately **85–87% condition**. The risk of injury increases significantly below this level.
- If a player's condition is around 60% or lower, put them on Rest, not Light practice — rest is more effective at condition recovery than Light.
- During back-to-back games or road trips, monitoring condition is particularly important. Giving players a day off after consecutive games can prevent condition from compounding downward.

### Identifying Potential Injuries

Check each player's individual screen after every game. If a player shows a **"potential injury"** flag, move them to Rest immediately. Continuing to practice a player flagged with a potential injury will result in an actual injury. This single habit — checking for potential injury flags after every game — was reported by multiple experienced players to dramatically reduce the frequency of significant injuries.

### Chronic Fatigue and Condition Caps

If a player repeatedly drops below 100% condition without fully recovering, they can develop a chronic fatigue state where their condition caps at a value below 100% (e.g. a player might be unable to go above 94–96%). This is thought to be linked to the Natural Fitness hidden attribute and may require an extended period on the Rest schedule during an international break or other gap in the schedule to clear.

---

## 5. Season Practice Schedules

### The Core Principle: Rotation

The most important practice principle is to **rotate schedules regularly**. Keeping players on the same practice schedule indefinitely will cause development to stagnate, as players effectively get "bored" of repeating the same training. Most experienced players rotate schedules every 2–6 weeks depending on how they are monitoring attribute changes.

> ⚠️ Changing schedules too frequently (e.g. every few days) is also counterproductive — players need time to adapt to a new regime before it produces results. At least two to four weeks is the minimum recommended time on any single schedule before evaluating its effect.

### The 3 Intensive / 3–4 Medium Framework

The most widely used framework throughout the community's history is the **3 Intensive / 3–4 Medium** structure, where each custom schedule has three areas set to Intensive and three or four set to Medium. This framework was originally documented in the community in the early years of EHM and has remained the baseline approach across both EHM 2007 and EHM 1.

A commonly shared set of schedules following this framework:

| Schedule Name | Cond | Skat | Tact | Shoot | Off | Def | Goal |
|---|---|---|---|---|---|---|---|
| Fitness / Pre-Season | INT | INT | INT | MED | MED | MED | MED |
| Shooting | MED | MED | MED | INT | INT | MED | INT |
| Offensive Skills | MED | MED | MED | INT | INT | INT | MED |
| Defensive Skills | INT | MED | MED | MED | MED | INT | INT |
| Tactics | MED | MED | INT | MED | INT | INT | MED |
| Goalies | INT | INT | MED | None | MED | MED | INT |
| General (fallback) | MED | MED | MED | MED | MED | MED | MED |

Players are rotated between these schedules every 2–6 weeks during the season. The inclusion of Goaltending at INT in the Shooting and Defensive Skills schedules is deliberate — see Section 9.

### Shindigs' Named Schedules (EHM 1)

For EHM 1, a more refined set of schedules emerged from detailed attribute tracking. The naming convention reflects Conditioning and Skating intensity:

**MM Nor** ("The Default")

| Cond | Skat | Tact | Shoot | Off | Def |
|---|---|---|---|---|---|
| MED | MED | MED | INT | INT | INT |

**IM Nor** ("Intermediate")

| Cond | Skat | Tact | Shoot | Off | Def |
|---|---|---|---|---|---|
| INT | MED | MED | INT | INT | INT |

**II Nor** ("The Backup / European Default")

| Cond | Skat | Tact | Shoot | Off | Def |
|---|---|---|---|---|---|
| INT | INT | MED | INT | INT | INT |

The approach is to start a new save with **MM Nor** and escalate towards **II Nor** for players who do not show growth. In CHL (junior) leagues, the opposite is recommended: start with **II Nor** and step down to **IM Nor** or **MM Nor** for players who cannot handle the intensity, as pre-made NHL-level players in the standard databases tend to have higher Natural Fitness than randomly generated juniors.

**Goalie Schedule (EHM 1)**

| Cond | Skat | Tact | Shoot | Off | Def | Goal |
|---|---|---|---|---|---|---|
| MED | Light | None | None | None | Light | INT |

Note: goalies trained with Shooting on Intensive or with too many areas on Intensive have been reported to have persistent condition issues. The above simplified schedule focuses development on Goaltending (for all goalie-specific attributes including Positioning) and avoids wasting training load on areas irrelevant to goalies.

### A Role-Based Approach

Some players prefer to structure schedules around player roles rather than rotating all players through the same set of schedules:

- **Offensive players / forwards:** Prioritise Offensive Skills, Shooting, Skating. Include Goaltending at Medium for Positioning benefit.
- **Defensive defensemen:** Prioritise Defensive Skills, Conditioning, Tactical. Include Goaltending at Intensive for Positioning.
- **Two-way players:** Balance Offensive and Defensive Skills across their rotation. Ensure Conditioning and Skating are covered.
- **Youth / prospects:** Prioritise Conditioning and Skating early to build the physical base. Transition to skill-focused schedules once physical attributes reach a satisfactory level (approximately 15 in the relevant attributes is one community benchmark before shifting focus).

> Even players whose specialist area is offense benefit from some defensive skill training (and vice versa), both to prevent attribute decay in areas not being trained and because balanced development tends to produce more well-rounded players over a career.

### The General Schedule

The **General** schedule (all areas set to Medium) serves as a fallback for:

- Players who are fatigued and cannot handle intensive training but are not tired enough to warrant full rest.
- Veteran or star players who are beginning to show the "could use a rest" status after games but whose attributes are broadly where they need to be.
- Players early in the season who need time to settle before being placed on a more demanding schedule.

### Goalie Schedules

Goalies have specific considerations:

- **Shooting** is generally recommended as **None** for goalies — it is irrelevant to their development.
- **Offensive Skills** and **Defensive Skills** are included at low intensities in some schedules (though these develop positional awareness and general defensive ability for the goalie).
- The single most important area for goalie development is **Goaltending** at Intensive.
- Having a dedicated **goaltending coach with 18+ in Coaching Goalies** is strongly recommended. A coach with a lower goaltending rating assigned to the goalie practice area will produce inferior development results.

### Special Teams Practice Blocks

One community approach to improving PP and PK performance is to temporarily rotate PP and PK line players through dedicated special teams practice schedules:

**Power Play practice block:**
- Tactical: INT, Shooting: INT, Offensive Skills: INT, Skating: MED, Conditioning: Light

**Penalty Kill practice block:**
- Tactical: INT, Defensive Skills: INT, Conditioning: INT, Skating: MED

Players are kept on these schedules for approximately 1.5–2 weeks before being rotated back to their regular schedules. Running all PP or PK lines through these blocks three to four times per season was reported to produce sustained PP% figures around 26% and a rock-solid PK. Do not leave players on special teams blocks for more than 2–2.5 weeks, as attributes not being trained will begin to deteriorate.

---

## 6. Off-Season Practice

### The All-Intensive Off-Season Schedule

The most widely endorsed off-season approach is to put every player on an **all-intensive schedule** — every area set to Intensive — for the duration of the off-season. This is referred to in the community as the "Hell Schedule" or "Warmers."

For skaters: all areas Intensive, with Goaltending included at Intensive (see Section 9 for why this helps skaters too).
For goalies: all areas Intensive **except Shooting**, which should be set to None.

This produces the most significant attribute gains of the year. Multiple specific examples from the community include gains of +2 to +4 in individual attributes over a single summer, which would rarely be seen during the season. One community member reported that Rick Nash went from 17 to 20 in Wristshot over a single summer using this approach, with broad gains across the roster.

### Summer Condition Behaviour

Players' condition naturally drops during the summer regardless of practice — this is normal game behaviour and not a sign that the training schedule is causing harm. Condition typically falls to around 65–70% during July–August as players are effectively "on holiday." This condition drop will happen even if players are placed on Rest.

As a result, there is no benefit to placing players on Rest during the early summer. Put them on intensive practice immediately after the season ends and let their condition drop naturally. The condition will recover once training camp begins in September.

### When to Start and Stop Off-Season Training

- Begin the all-intensive schedule **one week after the last playoff game** (or immediately after elimination from the playoffs if earlier).
- Continue until players begin showing the "Tired" flag consistently, which typically happens in **mid to late August** (in-game).
- When the "Tired" flag appears, give players a **single day off**, then return them to intensive training. Continuing to train despite the tired flag produces further gains, and injuries are not significantly more common with this approach if potential injury flags are monitored.
- Move players to **Rest** approximately **one week before training camp begins** to bring them back to full condition for the camp.

---

## 7. Pre-Season and Training Camp

During training camp and the pre-season, a **Fitness-focused schedule** is widely used: Conditioning and Skating at Intensive, Tactical at Intensive, everything else at Medium. The purpose is to build the physical and tactical base before the season starts.

The practice percentage split should be weighted heavily towards General during training camp and early season (e.g. 70–80% General) to emphasise fitness and conditioning. It can be shifted towards the balanced 40/30/30 split once the regular season begins.

Players frequently drop below 100% condition during pre-season games. This is normal and typically resolves once the regular season begins and the schedule stabilises.

---

## 8. Playoff Practice

During the playoffs, practice intensity should be reduced. Most experienced players switch to a lighter regime during playoff runs:

- Drop Skating and Conditioning to **Medium** if they have been running at Intensive.
- Keep one or two technical areas at Intensive (e.g. Tactics and one skills area).
- A 2 Intensive / 4 Medium split is commonly used in the playoffs.
- Between playoff rounds, if players have recovered to 100% condition, a brief period of heavier conditioning and skating (back to Intensive) can help maintain physical levels.
- Some players switch all players to the General schedule (all Medium) for the entire playoffs to avoid conditioning issues in the later rounds.

The goal in the playoffs is to keep players fresh and performing at their best rather than to develop attributes. Player development is substantially less important than condition management during postseason play.

---

## 9. Goaltending Training for Skaters

One of the most counterintuitive but well-documented findings in the community is that including **Goaltending** in skaters' practice schedules — even at Medium — significantly improves the **Positioning** attribute for forwards and defensemen.

This was confirmed through multiple sessions of attribute tracking with before/after comparisons. Players who had Goaltending set to Medium or Intensive showed substantially better Positioning gains than those who had it set to None. The effect was described as "dramatic" and "amazing" by multiple players who tested it.

The likely in-game explanation is that Positioning is coded as both a defensive skill and a goaltending-related attribute, meaning goaltending practice feeds into it for all skaters. Whether this was intentional design or an incidental consequence of how the attributes were built is unknown.

> ⚠️ Some players consider this an exploit rather than an intended game mechanic, since it has no real-world equivalent (skaters do not practice goaltending in order to improve their defensive positioning). Whether to use it is a matter of personal preference.

To use Goaltending training for positioning development:
- Set Goaltending to **Medium** or **Intensive** in your skater practice schedules.
- Assign a **coach with a good Goaltending coaching rating** to the Goaltending practice area — the quality of the coach matters for the effectiveness of the training.
- Defensemen benefit most given how central Positioning is to their role, but forwards also gain from improved Positioning.

---

## 10. Coaching Staff and Practice

### Coach Types and Their Best Use

Coaches have a **preferred style** which determines which type of practice they are best suited to run:

- **Conditioning-style coaches** — best suited for Conditioning and Skating. Specialists in physical preparation.
- **Technical-style coaches** — best suited for Offensive Skills, Defensive Skills, and Shooting. Specialists in hockey skills.
- **General-style coaches** — competent for both conditioning and technical areas without being specialists in either. Flexible and broadly useful.

A useful tip: temporarily set the head coach to manage practice, observe which coaches the AI assigns to which areas, then switch back to manual control and use those same assignments. This leverages the AI's knowledge of which coach attributes best suit each area.

> ⚠️ Community disagreement exists on the best coach type for Skating. Some players use conditioning coaches for skating (on the grounds that skating is a physical activity), while others use general or technical coaches. Both approaches have been reported to work. Technical coaches may offer better results for technical skating aspects (footwork, edgework), while conditioning coaches may be stronger for pure physical skating (speed, stamina).

### Assigning Coaches to Practice Areas

Coaches are assigned to practice areas using the checkboxes in the Practice screen. To ensure the head coach does not reassign them, confirm that the head coach is not controlling practice (see Section 1).

It is generally recommended to **limit each coach to 2–3 practice areas**, and no more than 4. Spreading a coach too thin across many areas reduces their effectiveness in each. The one exception is the goalie coach — assign a dedicated goalie coach to the Goaltending area only if their Coaching Goalies rating is high (18+). Do not waste their time on other areas.

For practice areas with a large number of players (e.g. Offensive Skills with all forwards), having **two coaches assigned** can improve results compared to a single coach.

### Key Coaching Attributes

The most important coaching attributes for player development, roughly in order of significance:

- **Coaching Forwards / Coaching Defensemen** — the coach's ability to develop players at the respective position. Match the coach's strongest attribute to the players they are primarily developing.
- **Determination** — high determination in a coach produces better long-term development results.
- **Motivation** — helps players respond positively to demanding practice.
- **Discipline** — reduces bad habits and sloppy play; moderates penalty-taking.
- **Working with Youngsters** — critical if you have a young roster or significant youth development component. Should be 14+ for development-focused teams.
- **Tactical Knowledge** — important for the coach running Tactical practice.
- **Man Management** — supports player morale and overall squad cohesion.

Preferred playing style (Attacking, Defensive, Direct, Patient, General) in coaches should ideally be **consistent across the coaching staff** or at least not wildly contradictory. Mixed philosophies can reduce collective coaching effectiveness, though the exact impact is debated.

### How Many Coaches Per Practice Area

- Most experienced players use **2 coaches per practice area** for the areas with the most players (typically Skating, Offensive Skills, Defensive Skills).
- **1 coach** is generally sufficient for Conditioning, Tactical, and Shooting.
- **1 dedicated coach** for Goaltending, with a Coaching Goalies rating of 18+. A second coach with a moderate goaltending coaching rating may be assigned alongside the specialist, but the specialist should always be present.

---

## 11. Player Development Principles

### What Drives Development

Player development in EHM is driven by a combination of factors, many of which are hidden or only partially visible:

- **Practice schedule and intensity** — the primary lever available to the player-GM.
- **Current Ability (CA) vs Potential Ability (PA)** — a player can only develop to the limit of their PA. Players who have already reached their PA will not improve regardless of practice.
- **Age and developmental phase** — younger players generally develop faster, with the most significant growth in technical and physical attributes occurring in the late teens and early twenties. Most players peak somewhere in their mid-to-late twenties. Technical attributes may peak later than physical ones.
- **Game time and level of opposition** — playing at the right level (challenging but not overwhelming) drives development as much as practice does. A highly rated prospect kept in the AHL when they are ready for the NHL may stagnate; similarly, a player placed in the NHL before they are ready may not develop well.
- **Natural Fitness** (hidden attribute) — determines how well a player tolerates intensive training and how quickly they recover condition.
- **Player personality** — particularly Determination, Professionalism, and Work Rate. Players with low determination or described as "slack" or "unambitious" tend to develop less even with ideal practice conditions.
- **Coach quality** — the attributes of the coaches running each practice area directly affect development rates.
- **Playoff and high-stakes game performance** — performing well in the playoffs produces significant attribute gains for young players. Poor playoff performances can cause noticeable attribute losses.

### Player Personality and Development

Certain personality traits are significant red flags that a player will develop poorly regardless of practice quality:

- **Unambitious** — widely reported to correlate with poor development rates.
- **Low Determination** — the attribute directly reduces how hard a player pushes themselves in practice.
- **Poor Self-Confidence / Poor Self-Belief** — makes players prone to losing form under pressure, and may inhibit consistent development.
- **Slack / Low Work Rate** — players with low Work Rate will not make full use of their practice time.

Work Rate itself is considered by most experienced players to be essentially a fixed attribute that does not change through practice.

### Developing Young Players and Prospects

Key principles for developing prospects:

- Players develop best when competing at **the appropriate level** — challenging enough to push their limits, but not so far above their ability that they are overwhelmed. Moving prospects up through the minors (ECHL → AHL → NHL) based on performance rather than age is generally more effective than rushing them.
- Young players (under 23) benefit from **Conditioning and Skating** focus early in their careers to build the physical base. Moving to skill-focused schedules once physical attributes are well-established (around 15+ in key physical attributes) is a common approach.
- **Goaltending training at Intensive** during the off-season has been shown to produce substantial Positioning gains for young defensemen in particular.
- Prospect development in the **AHL affiliate** is largely handled by the AI. The AI does not manage practice with the same precision a human can, but because of development bonuses built into the AI's simulation, AHL prospects will still develop reasonably well without manual intervention. Only for your highest-priority prospects is it worth taking over the affiliate's practice management directly.
- Calling up a key prospect to the **NHL roster over the summer** (even if they will not play in the regular season) allows them to train under your best coaches during the off-season, which can significantly accelerate their development compared to leaving them on the AHL affiliate over summer.

> A player acquired from the KHL or another European league can often be signed as a "regular player" rather than as a prospect, which allows them to join the roster immediately. Bringing them to the NHL team for the off-season intensive training period can produce immediate and significant development gains.

### Player Decline

Physical attributes (speed, acceleration, agility, stamina) typically begin to decline in a player's early-to-mid thirties. Some players retain their physical attributes longer than others based on hidden attributes. Technical attributes generally hold steadier for longer but will begin to decline as a player's CA falls with age.

Sharp, rapid declines in attributes — especially technical ones — at unusually young ages (mid-to-late twenties) have been reported by multiple players. The causes are not fully understood but may include: a player reaching their PA and having no more room to grow, hidden attribute interactions, or in some cases possible game bugs particularly in certain versions or league types.

The all-intensive off-season schedule is the primary tool for slowing the effects of ageing on veteran players — maintaining training intensity in the summer helps preserve attributes that would otherwise decline.

### Training a New Position

A player can be retrained to play a new position through a combination of practice and game time at that position:

1. Assign the player to a practice schedule slot configured with **New Position** training included.
2. Play the player in that position in actual games — game time at the new position accelerates learning.
3. The hidden **Adaptability** attribute determines whether and how well a player can learn a new position. Players with low adaptability may complain about the practice and refuse to learn.
4. If a player complains about their training while in a new position schedule, they are likely unwilling or unable to learn the position. Stop the retraining.
5. Players can reach **Unconvincing → Competent → Accomplished** at a new position through retraining, but **Natural** status at a trained position is not achievable — players can only be Natural at positions they started with.

### The AI vs Human Practice Management

The AI manages practice by using the General schedule (all Medium) for most players, with a development multiplier applied to keep pace with human-managed rosters. This means:

- Players who would develop well on the General schedule will develop faster with the AI than a human using the same schedule (due to the multiplier).
- Players who need a more demanding schedule (e.g. II Nor rather than MM Nor) will not develop with the AI, because the General schedule does not provide the intensity those players require.
- Human-managed practice is superior for star players and high-value prospects who need tailored, intensive schedules.
- AI-managed practice at affiliated teams is adequate for developing depth prospects but not ideal for the top prospects you want to peak as quickly as possible.

---

## 12. The Practice Percentage Split

The three percentage sliders in the lower right of the Practice screen divide time between **General (Even Strength)**, **Power Play**, and **Penalty Kill** focus. Community experience on the impact of these is mixed, with some experienced players reporting that changing the percentages makes little observable difference to special teams performance, and others reporting meaningful improvements.

Recommended approaches:

| Phase | General | PP | PK |
|---|---|---|---|
| Off-season | 80–100% | 10% or less | 10% or less |
| Training camp / Pre-season | 70–80% | 10–15% | 10–15% |
| Early season | 50–60% | 20–25% | 20–25% |
| Regular season (balanced) | 40–50% | 25–30% | 25–30% |
| If PP struggling | 40% | 40% | 20% |
| If PK struggling | 40% | 20% | 40% |
| Playoffs | 50% | 25% | 25% |

The heavy weighting towards General in the off-season reflects that there are no PP or PK situations during summer training, and the physical and tactical development driven by General practice is the priority. During the season, regularly reviewing whether PP or PK is underperforming and adjusting the split accordingly is the most common approach. Give any change at least a month in-game before evaluating its effect.

---

## 13. Sources

- https://www.ehmtheblueline.com/forums/viewtopic.php?t=2345
