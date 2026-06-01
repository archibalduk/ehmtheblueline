# Eastside Hockey Manager – Scouting Guide

This guide covers the full scouting system in Eastside Hockey Manager, from hiring scouts and managing assignments through to reading and interpreting scouting reports at draft time. It explains how to build and deploy an effective scouting network, how to use the draft screen to identify the best available players, how to read the hidden information embedded in scout reports and snippets, and how to evaluate player attributes and roles when deciding who to draft or sign. The guide draws on experience with both EHM 2007 and EHM 1.

This summary has been prepared by Claude AI based on a review of the source forum threads from ehmtheblueline.com and set out in the `Sources` section at the end of this guide.

---

## Table of Contents

1. [Scout Attributes and Hiring](#1-scout-attributes-and-hiring)
   - [The Key Scout Attributes](#the-key-scout-attributes)
   - [Recommended Hiring Filters](#recommended-hiring-filters)
   - [Scout Discipline and Report Reliability](#scout-discipline-and-report-reliability)
   - [Part-Time Scout Contracts](#part-time-scout-contracts)
2. [Building a Scouting Network](#2-building-a-scouting-network)
   - [How Many Scouts to Sign](#how-many-scouts-to-sign)
   - [Deploying Scouts by Region and League](#deploying-scouts-by-region-and-league)
   - [Matching Scout Background to Assignment](#matching-scout-background-to-assignment)
   - [Other Permanent Assignments](#other-permanent-assignments)
3. [Scouting Assignments and Settings](#3-scouting-assignments-and-settings)
   - [Assignment Types](#assignment-types)
   - [Scouting Intensity](#scouting-intensity)
   - [Recommendation Update Settings](#recommendation-update-settings)
   - [How Long Scouting Assignments Take](#how-long-scouting-assignments-take)
4. [Draft Scouting Strategy](#4-draft-scouting-strategy)
   - [Timing the Draft Scouting Cycle](#timing-the-draft-scouting-cycle)
   - [How Many Scouts to Assign to the Draft](#how-many-scouts-to-assign-to-the-draft)
   - [The Five-Scout Draft Screen Method](#the-five-scout-draft-screen-method)
   - [Scouting Individual Prospects](#scouting-individual-prospects)
   - [Using the Shortlist for Draft Preparation](#using-the-shortlist-for-draft-preparation)
   - [Age Filters for Draft Scouting](#age-filters-for-draft-scouting)
5. [Reading Scouting Reports](#5-reading-scouting-reports)
   - [What Scouts Can and Cannot Tell You](#what-scouts-can-and-cannot-tell-you)
   - [The Projected Career Role](#the-projected-career-role)
   - [The Comparable Player](#the-comparable-player)
   - [The Report Card](#the-report-card)
   - [Scout Snippets – The Most Valuable Information](#scout-snippets--the-most-valuable-information)
   - [Notes and Stats Tab](#notes-and-stats-tab)
   - [Star Ratings](#star-ratings)
   - [When There Is No Future Rating](#when-there-is-no-future-rating)
6. [Hidden Attributes and What Scouts Reveal](#6-hidden-attributes-and-what-scouts-reveal)
   - [Tier 1 Hidden Attributes – Always Prioritise](#tier-1-hidden-attributes--always-prioritise)
   - [Secondary Hidden Attributes](#secondary-hidden-attributes)
   - [Key Snippet Meanings by Attribute](#key-snippet-meanings-by-attribute)
   - [The Pressure Attribute – A Clarification](#the-pressure-attribute--a-clarification)
7. [Player Roles and Their Implications](#7-player-roles-and-their-implications)
   - [How Player Roles Affect Development](#how-player-roles-affect-development)
   - [Attribute Cost and Why Roles Matter](#attribute-cost-and-why-roles-matter)
   - [Preferred Forward Roles](#preferred-forward-roles)
   - [Preferred Defensive Roles](#preferred-defensive-roles)
   - [Roles to Avoid](#roles-to-avoid)
   - [Identifying Roles from Scout Reports](#identifying-roles-from-scout-reports)
8. [Evaluating Prospects at the Draft](#8-evaluating-prospects-at-the-draft)
   - [A Practical Evaluation Framework](#a-practical-evaluation-framework)
   - [Determination and Work Rate](#determination-and-work-rate)
   - [Using Performance Statistics Alongside Scout Reports](#using-performance-statistics-alongside-scout-reports)
   - [Conflicting Scout Reports](#conflicting-scout-reports)
   - [Scouting Multiple Times](#scouting-multiple-times)
   - [Later-Round Drafting](#later-round-drafting)
9. [Practical UI and Workflow Tips](#9-practical-ui-and-workflow-tips)
   - [Saving Scout Search Results](#saving-scout-search-results)
   - [The Scouted Only Filter](#the-scouted-only-filter)
   - [Managing the Shortlist](#managing-the-shortlist)
   - [Filtering Unrealistic Targets](#filtering-unrealistic-targets)
   - [Scouting Report Expiry](#scouting-report-expiry)
10. [Sources](#10-sources)

---

## 1. Scout Attributes and Hiring

### The Key Scout Attributes

The game manual identifies the following as primary scout attributes:

- **Judging Player Ability (JPA)** — how accurately the scout assesses a player's current attributes and ability.
- **Judging Player Potential (JPP)** — how accurately the scout assesses how good a player can become. This is the single most important attribute for draft scouting.

Secondary attributes that improve the quality and depth of scout reports:

- **Tactical Knowledge** — scouts with high Tactical Knowledge give more informed reports, particularly when used for Next Opponent scouting where tactical breakdown of the opposition is needed.
- **Working with Youngsters** — improves the scout's assessment of young players. Valuable for draft-focused scouts.
- **Coaching attributes** — scouts with coaching backgrounds tend to give more thorough, technically informed reports.
- **Determination** — influences the diligence and consistency of the scout's work. Recommended minimum: 10.
- **Adaptability** — affects how effectively a scout operates in unfamiliar leagues and regions. Recommended minimum: 10.
- **Discipline** — has a significant effect on report reliability (see below).

### Recommended Hiring Filters

A well-regarded hiring approach is to set the following minimum filters when searching for scouts:

- **Judging Player Potential:** 15+
- **Determination:** 10+
- **Adaptability:** 10+
- **Discipline:** 3+

From the pool meeting these criteria, prioritise **younger scouts** (more room for attribute development) and **those with the highest Determination and Adaptability**, since these mental attributes grow less over a career than the technical judging attributes do. Any scout with 15+ JPP will typically also have close to that in JPA.

Scouts themselves have Current and Potential Ability ratings, though in most databases these are randomised at game start. Getting a young scout with decent attributes who still has room to develop is preferable to signing an older scout with a slightly better current rating but limited upside.

### Scout Discipline and Report Reliability

Discipline has a specific and important effect on the reliability of scout reports. Scouts with very low Discipline (1 in particular) have been observed to produce wildly inaccurate comparable player assessments — giving "like Daniel Sedin" reports for defensive checking forwards with entirely mismatched attributes. Scouts with 2 Discipline show fewer such errors, but having a buffer of at least 3 is recommended to account for the occasional attribute dip.

### Part-Time Scout Contracts

Scouts on part-time contracts can be assigned in the same way as full-time scouts, but community experience suggests they produce less output — likely conducting fewer observations per assignment. The exact reduction is not precisely known, but full-time contracts are preferable where budget allows.

---

## 2. Building a Scouting Network

### How Many Scouts to Sign

Sign the maximum number of scouts the game allows (typically 15 for an NHL team). More scouts means broader league coverage in the regular season and more simultaneous coverage of the draft, which results in more complete scouting reports on prospects by draft day.

### Deploying Scouts by Region and League

A broadly effective permanent assignment structure for an NHL team (adjust based on the number of scouts available):

**Canadian Junior Leagues (3 scouts)**
One scout each to the OHL, WHL, and QMJHL. These are the highest-yield leagues for the NHL Draft and deserve dedicated coverage throughout the season.

**NCAA and USHL (2–3 scouts)**
Individual scouts to the USHL, WCHA, CCHA, ECAC, and/or Hockey East. College players draft at an older age and can be harder to evaluate; dedicated coverage helps. An alternative is a single scout assigned to sweep all NCAA leagues in sequence.

**European Coverage (3–4 scouts)**
- Sweden (SHL and Allsvenskan / Swedish junior leagues)
- Russia and/or KHL
- Scandinavia (region, covering Norway and Finland in addition to Sweden)
- Central and Eastern Europe (Czech Republic, Slovakia, and neighbouring countries)

Matching scouts to their native region is a common and sensible approach even if the precise mechanical benefit is unclear — a Swedish scout assigned to Sweden, a Russian scout to Russia, and so on.

**AHL / ECHL / Professional Leagues (1–2 scouts)**
Monitoring your own prospects, recently undrafted young players still developing, and potential trade targets. One scout on the AHL permanently is valuable.

**Next Opponent (1 scout)**
Assign one scout to preview your upcoming opponent before games. A scout with high Tactical Knowledge is best here as the report will include tactical analysis.

**Draft Assignment (reserve scouts)**
2–5 of your best scouts should be freed up in early January to move onto the Entry Draft full-time. Do not reassign these scouts until after the draft is complete.

### Matching Scout Background to Assignment

There is a general community preference for matching a scout's nationality or background to their assignment region. While no definitive mechanical confirmation exists in the source data, the logic is sound and several experienced players follow this approach — a Scandinavian scout to Scandinavia, a Czech or Slovak scout to Central Europe, and so on.

### Other Permanent Assignments

During the off-season and training camp, one of your better scouts assigned to watch your own NHL team and AHL affiliate is useful for getting current reports on your own players — particularly helpful for identifying players who may have declined or developed.

---

## 3. Scouting Assignments and Settings

### Assignment Types

Scouts can be assigned to:

- **A specific player** (individual observation) — produces the most accurate and detailed report; the scout observes this one player over multiple games.
- **A team** — the scout reports on all players observed in a set number of games for that club.
- **A league** — broader coverage; the scout reports on players across all teams in the league.
- **A country** — covers all leagues within a specific nation.
- **A region** — widest geographic coverage (e.g. Scandinavia, Eastern Europe).
- **The Entry Draft** — scouts all players currently eligible for the upcoming NHL Entry Draft.
- **The Next Opponent** — previews the team you are scheduled to play next.

### Scouting Intensity

Assignments can be set to Normal or Intensive:

- **Normal** is faster and produces an initial overview of the target.
- **Intensive** takes longer but produces more complete reports and more detailed attribute assessments.

For draft scouting, Intensive is recommended — particularly in the second half of the season when the squad of candidates has been narrowed to players of genuine interest.

### Recommendation Update Settings

When assigning a scout, you can choose how they report back:

- **No Recommendation Updates** — the scout operates silently and you review their full report when they return or when you navigate to their screen.
- **Recaps Only** — the scout sends a brief summary (e.g. "Scout found 30 players: 10 excellent, 15 hot prospects, 5 depth players"). This is the most popular option among experienced players — it keeps you informed without generating hundreds of individual player news items.
- **All Updates** — generates a news ticker item for every notable player found. This can become overwhelming, especially during draft scouting with multiple scouts active.

### How Long Scouting Assignments Take

Assignment duration varies by target type and intensity. When assigning a scout, the game displays the estimated duration before you confirm. As a rough guide:

- Scouting a single team: days to a few weeks.
- Scouting a league (Normal): several weeks.
- Scouting a league (Intensive): typically around 2 months.
- Scouting the Entry Draft (Intensive): approximately 3 months.

Plan the timing accordingly — if you want draft scouts to finish by the time the draft arrives (typically June), assign them in late February or early March at the latest.

---

## 4. Draft Scouting Strategy

### Timing the Draft Scouting Cycle

A well-regarded two-phase approach:

**Phase 1 (October to January):** Send most scouts to leagues, countries, and regions to generate broad initial coverage. This identifies the prospect pool and produces first-impression reports. Scouts covering the Canadian juniors, NCAA, and major European leagues will sweep up the majority of draft-eligible talent.

**Phase 2 (January/February to Draft Day):** Recall most scouts and reassign them to the Entry Draft specifically on Intensive. Keep 2–4 scouts on permanent regional assignments if possible to maintain coverage of late-developing players. Do not reassign the draft scouts after this point — their accumulated reports are only active while they are assigned to the draft.

An alternative approach skips Phase 1 entirely and sends all available scouts to the Entry Draft from day one, accepting that regional scouting will be minimal.

### How Many Scouts to Assign to the Draft

The Draft screen allows a maximum of **five scout report columns** to be displayed simultaneously. Therefore, having more than five scouts assigned to the draft does not provide additional visible information on the draft day screen. However, having more scouts assigned builds up more accumulated scouting data and snippet information per player — so 10–15 scouts assigned to the draft produces more comprehensive individual player reports, even though only five can be shown on screen at once.

For maximum information, use all available scouts. For a more structured approach, assign 5 of your best scouts to the draft from January onwards and keep the rest on regional assignments.

### The Five-Scout Draft Screen Method

On draft day, the draft screen can display a star-rating column for up to five scouts simultaneously. Here is how to use this effectively:

1. Assign your five best scouts to the Entry Draft in January and do **not** reassign them before the draft.
2. On draft day, open the draft screen and select to show scout reports.
3. Use the dropdown to assign one scout to each of the five report columns.
4. Each column shows that scout's star rating for every eligible player.
5. Use the player position filter and sort by a scout's star column to see their top-ranked players at each position.
6. Cross-reference multiple scouts' star ratings to identify players rated highly by several scouts simultaneously.

This approach is widely considered the most effective method for managing the draft on day, allowing rapid cross-comparison across hundreds of eligible players.

### Scouting Individual Prospects

Once a player of interest has been identified from league or draft scouting, assigning a scout to observe that specific individual produces more detailed and accurate reports than broad scouting does. This is particularly valuable for:

- Top prospects you are considering with your first pick or early picks.
- Trade targets you want a full report on.
- Prospects currently in your system who you want to evaluate more precisely.

Individual scouting is the only way to reliably surface all of a player's scout snippets — particularly important for revealing information about hidden attributes such as Consistency and Temperament. A player may need to be individually scouted by many scouts over an extended period before all relevant snippets appear.

### Using the Shortlist for Draft Preparation

The shortlist is a convenient way to track players of interest leading up to the draft. Add players you want to monitor closely, then use the shortlist view to review their reports efficiently. Note:

- Any player you make a contract offer to is automatically added to the shortlist, including players invited to training camp.
- Players on your own roster can appear on the shortlist; to exclude them, configure the shortlist to not "Include Own".
- Clearing the shortlist at the start of each draft season is good hygiene to avoid clutter from previous targets.

The shortlist cannot be segmented into multiple named lists within the game — a commonly wished-for feature that has not been implemented. Many players work around this by using a spreadsheet or notes to track different categories of player.

### Age Filters for Draft Scouting

When assigning scouts to the Entry Draft, consider filtering by age. Several community members limit draft scouts to players aged 17–19 (or 17–18), as older draft-eligible European players (20+) are often unlikely to make the move to North American hockey. This focuses the scout's time on genuinely viable candidates. Always verify before ruling out an older prospect — some are worth pursuing regardless of age.

---

## 5. Reading Scouting Reports

### What Scouts Can and Cannot Tell You

A fundamental principle of EHM scouting: **scouts cannot directly lie**. They can be imprecise, limited by their own Judging ability, or wrong about the magnitude of something — but they do not generate outright false information. This means:

- If a scout says a player "needs to improve his consistency", that player has low Consistency. This is not the scout being wrong; it is a genuine limitation in the player.
- If multiple scouts all give different projected career roles for the same player, this reflects genuine uncertainty — the scouts are each giving their honest assessment, and the spread itself tells you something about how difficult the player is to project.
- Scouts can miss information — a scout may not flag a weakness in 10 or 20 reports, only for it to surface later. This does not mean the information was false earlier; it means the scout did not observe it during those assignments.

Approximately 80–90% of the text in a scout report is a word-for-word translation of the visible numerical attributes you can already see on the player's profile. The genuinely valuable information is the small portion that reveals hidden attributes through snippets and contextual clues.

### The Projected Career Role

The projected career role (e.g. "First Line Forward", "Third Pairing Defenseman", "Backup Goalie") is the scout's projection of the role the player will play at peak. This is broadly linked to the player's Potential Ability (PA) — a higher PA player generally gets a more optimistic projected role.

Important caveats:

- The projected role is influenced by PA but also by the player's current CA, meaning a player who is further along in their development will get more optimistic projections even at the same PA as a less-developed counterpart.
- Players from strong databases (real-player rosters) may be projected differently from randomly generated regens, partly because human editors have calibrated their attributes carefully.
- The projected role is useful as a broad indicator but should never be the sole basis for a draft decision.

Scout projections become more accurate as the player ages. Early-season projections on a 16-year-old are inherently less reliable than pre-draft projections on an 18-year-old who has had two seasons of professional observation.

### The Comparable Player

The comparable player (e.g. "Like Connor McDavid" or "A poor man's Brent Burns") tells you primarily about the player's **style and role**, not their absolute talent level. Two key points:

**Upside comparisons are not ability guarantees:** A player compared to a star means they play a similar style to that star — not that they will be as good. An offensive defenseman compared to "Erik Karlsson in type" may only have third-pairing potential. Never draft purely on the strength of a star comparable.

**Downside comparisons are more reliable:** A player compared to a journeyman AHL player or a fringe NHL role player is almost always accurately characterised. Community experience shows that players compared to low-quality benchmarks essentially never overcome that assessment. Use downside comparisons to quickly filter out uninteresting late-round prospects.

**Comparable player modifiers** carry meaningful information about role values:
- "A more talented version of [X]" — suggests both offensive and defensive role values are slightly higher than the comparable player.
- "A poor man's [X]" — both role values slightly lower.
- "Offensive-minded version of [X]" — higher offensive role, lower defensive role.
- "Defensive-minded version of [X]" — higher defensive role, lower offensive role.

Averaging the comparable player assessments from multiple scouts and tracking the modifiers gives you a reasonably accurate picture of where the player's role values sit.

### The Report Card

The Report Card (using letter grades A through F for broad attribute categories such as Skating, Shooting, Defence, etc.) represents the player's **current** attribute levels in each area, expressed as a grade relative to the league they play in.

The Report Card is useful for:
- Quickly identifying a player's strongest and weakest attribute clusters.
- Tracking how a player develops over time as their grades change with attribute gains.

The Report Card is not a projection — it shows current ability, not ceiling. A B- in Shooting from an 18-year-old scout report is not that player's career ceiling.

> ⚠️ Community experience suggests the Report Card changes over time as player attributes develop, and that grades from early draft scouting may shift substantially by the time the player is in their mid-twenties.

### Scout Snippets – The Most Valuable Information

Snippets are short descriptive phrases that appear in the written body of the scouting report. These are the primary way hidden attributes are revealed. Snippets typically appear in threshold bands — for most attributes, snippets indicate whether the value is in the 13+ range, 11+ range, 8+ range, or 7 and below.

Key principles for reading snippets:

- Snippets are **honest** — if the snippet says something negative about a hidden attribute, that is genuinely the case.
- Not all snippets appear in every scouting report. Some hidden attributes require many repeated scoutings to surface. A player can be individually scouted 20–30 times before a low Consistency snippet appears if the Consistency attribute is just below the threshold or if the scout Discipline is inconsistent.
- More scouting by more scouts over more time produces more complete snippet coverage.
- The absence of a negative snippet does not guarantee the attribute is fine — it may simply not have been observed yet.

For a full cross-reference of snippets and the attributes they relate to, see the attribute mapping list in Section 6.

### Notes and Stats Tab

The Notes and Stats tab in a scouting report accumulates a record of every individual scouting observation. Each time a scout files a report on a player, a new entry is added. These entries use qualitative descriptors such as "excellent", "good", "decent", and "marginal".

The Notes and Stats tab is particularly useful for comparing two players with similar star ratings or projected roles. A player with many "excellent" entries is more likely to have a high PA than one with mixed "decent" and "good" entries. A player whose reports suddenly shift from "decent" across the board to "excellent" late in the draft process should be treated with caution — this pattern can indicate a "late bloomer" but can also be associated with players whose attributes look better than their actual ceiling warrants.

### Star Ratings

Star ratings are the simplest way to evaluate a prospect and are useful for quickly prioritising from a large pool. However they should not be relied upon in isolation:

- Stars reflect the scout's overall impression, which is primarily driven by PA and role values — not pure PA alone.
- A player with a great role value distribution and moderate PA may receive higher stars than a player with higher PA but a less efficient role.
- Star ratings are a reasonable starting filter but should always be followed up with snippet analysis for serious prospects.

Community observations suggest that star ratings from the draft screen are broadly consistent with the projected career role (1st line ≈ 5 stars, 2nd line ≈ 4 stars, etc.), though there is variance.

### When There Is No Future Rating

If a scouting report shows only a current rating and no future rating for a young player (especially one aged 17–19), this most likely indicates the player has already reached or is very close to their potential ceiling. They have limited or no room left to develop. While these players can still be useful role players at their current level, they are typically not worth high draft picks if you need a player who will develop over the next several years.

---

## 6. Hidden Attributes and What Scouts Reveal

### Tier 1 Hidden Attributes – Always Prioritise

These four attributes are the most impactful hidden attributes for player performance and should be the primary focus when reading scouting reports on draft prospects:

**Consistency:** Governs how often a player performs at or near their best. Does not grow through practice or development. Low consistency means the player will produce at a high level in some games and be invisible in others — this is manageable over an 82-game season as it averages out, but becomes critically important in playoffs where a player may have 4–7 consecutive poor performances at a crucial time. The most important hidden attribute to identify through scouting.

**Offensive Role:** Determines how many total attributes are distributed to the offensive side of the player's capability. A scoring player without sufficient Offensive Role will never become the goal-scorer you drafted him to be, regardless of practice. Cannot grow. Look for snippet evidence and cross-reference projected player comparisons.

**Defensive Role:** Same principle as Offensive Role but for defensive attributes. A value of 17+ paired with 13+ in Decisions produces players who compete for Selke Trophy consideration annually.

**Temperament:** Described as possibly the single most impactful hidden attribute on individual player performance. Governs a player's ability to stay calm, make the correct decisions under pressure, and execute their best game in important moments. Can grow through playoff experience — making it the one Tier 1 attribute that can be developed rather than purely drafted. A strong correlation exists between high Temperament and low Aggression, and between high Temperament and high Decisions. Temperament can exceed 20 through playoff growth.

### Secondary Hidden Attributes

**Professionalism:** Governs how a player responds to discipline, how consistently they train, and their long-term development habits. Players with 1 Professionalism (described as "slack") are difficult to develop and may require the all-intensive summer schedule merely to prevent decline. Players with 20 Professionalism (described as "model professional") are very well-suited to development-focused systems.

**Decisions:** How well the player makes the right play under game conditions. Correlates strongly with Temperament. A value of 13+ contributes to Selke-calibre defensive play when combined with high Defensive Role.

**Pressure:** Governs how the player handles off-ice pressure (media attention, interest from larger clubs, contract negotiations). Confirmed by the game developer to be about mental pressure from external sources, not in-game forechecking resistance as some players believed. Less tactically impactful than Consistency or Temperament.

**Loyalty:** Affects how easily a player can be re-signed and whether they are likely to request a transfer when discontented. A high-loyalty player is simpler to retain; a low-loyalty player may leave despite fair offers.

**Important Matches:** How well a player raises their game for significant fixtures. Works in conjunction with Consistency to determine playoff performance. Can grow through playoff experience.

### Key Snippet Meanings by Attribute

The following table maps common scouting snippets to the attributes they reveal. Snippets typically have positive variants (indicating 13+), negative variants (indicating 7 or below), and sometimes intermediate variants:

| Attribute | Positive Snippet Indicators | Negative Snippet Indicators |
|---|---|---|
| Consistency | "brings his A-game every night", "you can set your watch by him" | "needs to improve his consistency", "an inconsistent player" |
| Temperament | (inferred from low Aggression + high Decisions; no single direct snippet) | "loses his composure" |
| Offensive Role | "purely an attacking player" (17+), "strong offensive instincts" | (no explicit low snippet; inferred from attribute spread) |
| Defensive Role | "brings talent at both ends of the ice" | (no explicit low snippet) |
| Two-Way Balance | "a fantastic two-way player", "plays both ends of the ice well" | (absence of any two-way mention) |
| Important Matches | "brings his A-game when needed", "rises to the big occasion" | — |
| Determination | "determined", "driven" | "lacks determination", "not always motivated" |
| Work Rate | "gives everything on every shift" | "needs to improve his work rate", "slack" |
| Professionalism | "a professional", "model professional" (20) | "slack", "lacks professionalism" |
| Anticipation | "great hockey sense", "reads the play well" | — |
| Creativity | "creative player", "creative playmaker" | — |
| Decisions | "makes the right decision under pressure" | — |
| Speed | "explosive skater", "quick on his skates" | "not the quickest skater" |
| Acceleration | "quick burst of pace" | — |
| Balance | "hard to knock off the puck" | — |
| Stamina | "tireless worker" | "needs to improve his stamina" |
| Strength | "powerful player", "strong on the puck" | — |
| Injury Proneness | (inferred from frequency of injuries) | "prone to injuries" |
| Adaptability | "independent" (possibly) | — |

> ⚠️ Snippet interpretation is not always exact. Some attributes share snippet territory, and the precise thresholds (whether a given snippet indicates 11+ or 13+) can vary. The general principle that snippets are honest holds — but the exact value behind a snippet is not always determinable with certainty.

**A specific nuance noted in the source data:** A player can simultaneously have "brings his A-game when needed" (high Important Matches average) and "needs to improve his consistency" (low Consistency). These are different attributes reported in different positions within the snippet list — their co-existence indicates a player who performs well in high-stakes games but is inconsistent in regular-season situations.

### The Pressure Attribute – A Clarification

The in-game description and community discussion of the Pressure attribute has historically been confused with in-game forechecking resistance. The game developer (Riz) has confirmed explicitly that **Pressure governs how the player handles mental pressure from external sources** — media scrutiny, interest from other clubs, signing major contracts, and similar off-ice pressures. It is not directly linked to in-game play under high tactical pressure from the opposition. This makes it less critical than Consistency or Temperament for pure performance, though it does affect player behaviour and contentment during contract negotiations.

---

## 7. Player Roles and Their Implications

### How Player Roles Affect Development

Every player in EHM is assigned a Player Role (e.g. Goal-Scoring Forward, Playmaking Forward, Two-Way Forward, Power Forward, Offensive Defenseman, Playmaking Defenseman, etc.). Player Role affects which attributes are classified as Key, Essential, Non-Essential, or Irrelevant for that player type. Key attributes develop more readily and efficiently than non-essential ones.

In EHM 1, Player Role (not Offensive/Defensive Role values) is the primary driver of how attributes are distributed, along with the Key/Essential/Irrelevant attribute classification system. The Offensive and Defensive Role values play a secondary role in fine-tuning distribution, particularly for regens.

### Attribute Cost and Why Roles Matter

Not all attributes cost the same amount of a player's Current Ability (CA) to develop. The CA cost structure is:

**Full Cost (each point costs 1 CA):**
Checking, Deflection, Deking, Fighting, Hitting, Off the Puck, Passing, Pokecheck, Positioning, Slapshot, Stickhandling, Wristshot.

**Half Cost (each point costs 0.5 CA):**
Agility, Natural Fitness, Stamina, Strength.

**Low Cost — 1/5 Cost (each point costs 0.2 CA):**
Acceleration, Balance, Speed, Anticipation, Bravery, Creativity, Decisions, Leadership, Teamwork, Work Rate.

**Free Attributes (no CA cost):**
Adaptability, Aggression, Agitation, Ambition, Determination, Faceoffs, Important Matches, Loyalty, Pass Tendency, Pressure, Professionalism, Sportsmanship, Temperament.

The implication is significant: a player whose role allocates points primarily to full-cost technical attributes (Slapshot, Wristshot, Passing, Deking, etc.) will have fewer total visible attributes at the same CA than a player whose role allocates points to low-cost physical attributes (Acceleration, Speed, Balance, etc.). A speed-focused player with 140 CA can appear more "complete" across the attribute card than an equally skilled technical player — but the technical player has more overall hockey value embedded in their CA.

This also explains why high-speed players with moderate technical attributes can be effective: speed is cheap to develop, so a 140 CA player who "spent" relatively little CA on speed can have a lot of CA left for other areas.

### Preferred Forward Roles

The forward roles best suited to producing highly effective NHL players, in approximate order of desirability:

**Goal-Scoring Forward (Winger/Sniper):** Key attributes include Slapshot, Wristshot, Off the Puck, Deking. Produces consistent goal-scorers when PA is high enough.

**Playmaking Forward / Playmaking Center:** Key attributes include Passing, Creativity, Stickhandling, Off the Puck. Produces primary playmakers and assist leaders.

**Two-Way Forward:** Balanced distribution across offensive and defensive attributes. A Two-Way Forward with a strong Defensive Role value can be Selke-calibre while also producing at a 70–90 point pace. The most versatile role.

**Power Forward:** Combines physical and offensive attributes. Can produce well with the right system but has a lower ceiling than a pure scorer or playmaker of the same PA.

### Preferred Defensive Roles

**Offensive Defenseman / Playmaking Defenseman / Pointman:** Key attributes heavily weighted towards offensive technical skills. These are the most efficient defensive roles for generating points while contributing defensively when their Defensive Role value is at least moderate (10+).

**Two-Way Defenseman:** This specific role description is considered weaker than it sounds — Two-Way Defensemen actually receive fewer attribute points at a given PA than Offensive/Playmaking/Pointman defenders, making them a "poor man's" version of those roles rather than a genuinely balanced alternative.

**Defensive Finesse Defenseman:** A rare but acceptable role. Gives up some physical attributes for increased skating speed and slightly better offensive tools. A better choice than standard defensive roles if available.

### Roles to Avoid

The following roles are considered poor choices for draft picks who are intended to contribute meaningfully:

- **Defensive Forward** — competes with Two-Way Forward for defensive effectiveness but caps at around 60 points in a strong season; rarely exceeds that.
- **Checking Forward** — similarly limited offensively and does not provide meaningfully better defensive numbers than a Two-Way Forward.
- **Stay-at-Home Defenseman** — receives fewer attribute points than offensive defensive roles at the same PA. Very limited upside.
- **Enforcer (Defenseman)** — investing in fighting and physical attributes at full CA cost means few productive attributes for actual hockey.
- **Two-Way Defenseman** — as noted above, actually fewer total attributes at comparable PA than offensive defensive roles.
- **Stand-Up Goalie** — the required attribute spread is poorly supported by the way goalie attributes develop; butterfly and hybrid styles produce far more consistent results.

### Identifying Roles from Scout Reports

Without the in-game editor, player roles are inferred from:

1. **Scout snippets about role balance:** "purely an attacking player" (Offensive Role 17+, Defensive Role <10), "brings talent at both ends of the ice" (both roles 10+), "a fantastic two-way player" (specific phrase correlating with high two-way balance).

2. **Attribute spread:** A player described as an offensive defenseman who shows strong Checking, Pokecheck, and Balance is likely to have a higher Defensive Role value than an offensive defender who only shows offensive attributes.

3. **Projected player comparable modifiers:** "offensive-minded version of" suggests higher Offensive Role; "defensive-minded version of" suggests higher Defensive Role.

4. **The projected player type itself:** The scout's chosen comparable is selected partly on the basis of the player's role — a comparable to an offensive defenseman means the scout sees that player primarily as an offensive defenseman type.

---

## 8. Evaluating Prospects at the Draft

### A Practical Evaluation Framework

A recommended evaluation sequence for any serious draft prospect:

1. **Player Role** — does the role suit your needs? Avoid the weak roles listed in Section 7.
2. **Consistency** — scan snippets immediately for any "needs to improve consistency" language. This is a significant red flag that can disqualify otherwise attractive prospects.
3. **Offensive/Defensive Role balance** — check snippets for two-way language. Is the player "purely an attacking player" when you want a two-way forward?
4. **Temperament indicators** — low Aggression and high Decisions correlate with high Temperament. Check for composure-related snippets.
5. **Determination and Work Rate** — check the report card and snippets. See Section 8.3 below.
6. **Projected career role and star ratings** — now use these as a broad PA indicator.
7. **Notes and Stats tab** — review the pattern of entries for confirming evidence.
8. **Performance statistics** — do the player's on-ice stats for their league and age make sense given what the scouts are saying?

### Determination and Work Rate

These two visible attributes are important but should be viewed in context:

- Both can be **raised through discipline** — if a player has a poor game, issuing an official warning can increase Determination and/or Work Rate. This has been confirmed by community testing; it happens roughly every second or third warning, provided the player's Professionalism is at least moderate (1 Professionalism players will react badly).
- This means that low Determination or Work Rate at draft time is less of a permanent red flag than low Consistency or low Temperament, since those cannot be raised.
- A recommended soft minimum for draft purposes: 12+ in Determination; 7+ in Work Rate (or be willing to use discipline mechanics to raise it).
- Players with low Work Rate who are used as bottom-six forwards with limited ice time can still perform well — they simply have fewer fully productive shifts per game.

Work Rate growth through discipline is most effective in systems where you actively manage player performance and have the time to monitor game-by-game ratings. In shorter seasons (junior leagues) or for players who rarely have poor games, the mechanic is less practical.

### Using Performance Statistics Alongside Scout Reports

Point totals, plus-minus, hits, and game ratings are valuable secondary indicators. Cross-referencing with scout reports:

- A player scouted as 1st line potential but producing modest numbers in a weak league should prompt caution — the scouts may be overrating someone who faces poor competition.
- A player scouted as 3rd line potential but leading their league in scoring at age 18 suggests the scouts may be underselling the player's PA.
- Statistics matter more in context: a 17-point season from an 18-year-old playing major junior minutes is different from a 17-point season for an 18-year-old playing top-line minutes in a weaker league.
- When two players have similar scout reports, check where they each rank in their respective leagues. The player ranking higher in a stronger league at the same position is generally the stronger prospect.

### Conflicting Scout Reports

Multiple scouts giving different projected career roles for the same player is normal and expected. It reflects genuine difficulty in projecting the player. How to handle disagreement:

- **Weight the reports by scout quality:** Prioritise the assessments of scouts with the highest JPP when there is a conflict.
- **Look for consensus on hidden attributes:** Even if scouts disagree on projected career role, they should broadly agree on whether the player has low Consistency or high two-way balance, since these are either there or not.
- **Use the Notes and Stats tab:** A consistent pattern of "excellent" entries across many scouts is more informative than a disputed star rating.
- **Use averages:** If three scouts say 1st line and two say 3rd line, a realistic read is somewhere between 2nd line and low-end 1st line — the player likely has 1st line tools but some attribute uncertainty that is being interpreted differently.

### Scouting Multiple Times

Repeat scouting of the same player by the same scout does add value — more scouting trips produce more snippet entries and can surface information that was not observed in earlier reports. The game may require 20–30 or more observations by good scouts before a low-Consistency snippet appears for a player who genuinely has it.

The practical implication: after identifying your top targets in any draft, assign scouts to individually observe those players for the remainder of the pre-draft period. The additional reports fill in gaps and help rule out (or confirm) hidden attribute concerns.

### Later-Round Drafting

Genuinely useful players can be found in rounds 3–7, but the rate of hits decreases significantly. Key principles for later-round prospecting:

- Look for players with strong mental attributes (particularly Consistency, Determination) and good physical attributes (Speed, Acceleration) even if their technical attributes are currently weak. A fast, consistent player with a sound character can develop into a solid bottom-six player or a PK specialist even at modest PA levels.
- Players with limited PA can still fill important roles: a 3rd or 4th line forward with 15 Consistency and 17 Speed who costs $700K is more useful than an expensive veteran with similar attributes.
- A player with low projected CA but no red flags in the snippet analysis is worth a late pick — the downside is limited and the upside occasionally surprises.

---

## 9. Practical UI and Workflow Tips

### Saving Scout Search Results

When a scout completes an assignment, they have a list of players they have observed. If you reassign the scout without saving, this list disappears. The actual scout reports on individual players remain in the players' profiles — but the convenient summary list is lost.

To save the list: go to the screen showing the scout's results, click the **Search** menu, and select **Export**. Despite being labelled "Export", this functions as a Save — the list can later be imported. In practice, most experienced players do not save these lists, as the player reports themselves persist individually and the list is primarily a convenience feature.

### The Scouted Only Filter

The "Scouted Only" filter in the player search screen does **not** show players you have previously scouted. It shows players who are currently being actively scouted (i.e. have a pending scouting assignment in progress). The "Not Scouted" filter correspondingly shows players without any current active scouting assignment. Both filters are therefore of limited practical use for the common purpose of reviewing your accumulated scouting knowledge.

### Managing the Shortlist

Useful shortlist management habits:
- Clear the shortlist at the start of each season to prevent it from accumulating hundreds of entries.
- Use the shortlist primarily for current draft targets — add players as you identify them during pre-draft scouting.
- To exclude your own team's players from the shortlist display, configure the list: Filters → Configure → uncheck "Include Own".
- Note that any player invited to a training camp tryout will automatically be added to the shortlist.

### Filtering Unrealistic Targets

When reviewing scout results for junior or minor leagues in the context of a specific team's draft (e.g. WHL bantam draft, CHL Import draft), use the filter option to remove unrealistic targets:

**Filters → Configure → Ask assistant to filter unrealistic targets**

This removes players who have no realistic interest in your team (wrong region, wrong contract preference, etc.) and makes the remaining list manageable. Always also apply the relevant protected region or nationality filters as appropriate.

### Scouting Report Expiry

Scouting reports expire over time. A report generated in the previous season will typically no longer be accessible by the following off-season — the option to view the scouting report on a player may become greyed out. This means previously scouted players need to be re-scouted in each new season to maintain current information on them. Some experienced players schedule a regular off-season sweep of their own prospects and known targets to refresh their scouting data.

---

## 10. Sources

- https://www.ehmtheblueline.com/forums/viewtopic.php?t=3050 (Scouting Talk)
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=17816 (Scouting and You: the Basics)
