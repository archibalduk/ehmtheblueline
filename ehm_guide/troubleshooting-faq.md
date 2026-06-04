# Eastside Hockey Manager – Troubleshooting FAQ

This guide is a troubleshooting reference for Eastside Hockey Manager (EHM), covering EHM 2004, EHM 2005, EHM 2007, and EHM 1 (also known as EHM Early Access / EA, the Steam release). The content is drawn from the Technical Support sub-forum at ehmtheblueline.com and spans posts from January 2006 through June 2026. The guide is organised by issue type so that a player encountering a specific problem can navigate directly to the relevant section.

This summary has been prepared by Claude AI based on a review of the source forum threads from ehmtheblueline.com and set out in the `Sources` section at the end of this guide.

## Table of Contents

1. [Installation and First Launch](#installation-and-first-launch)
2. [Licensing and eLicense Issues (EHM 2007)](#licensing-and-elicense-issues-ehm-2007)
3. [Running EHM on Windows Vista, 7, 8, and 10](#running-ehm-on-windows-vista-7-8-and-10)
4. [Running EHM on Apple Mac](#running-ehm-on-apple-mac)
5. [Screen Resolution and Windowed Mode](#screen-resolution-and-windowed-mode)
6. [Game Crashes on Start-up or at Main Menu](#game-crashes-on-start-up-or-at-main-menu)
7. [Missing DLL Files (msvcr71.dll and msvcp71.dll)](#missing-dll-files-msvcr71dll-and-msvcp71dll)
8. [The "No Restrictions" Error](#the-no-restrictions-error)
9. [DirectX Sound Error (EHM 1 / EHM EA)](#directx-sound-error-ehm-1--ehm-ea)
10. [.CPP Fatal Errors](#cpp-fatal-errors)
11. [Game Crashes on a Specific In-game Date](#game-crashes-on-a-specific-in-game-date)
12. [Corrupted Save Files](#corrupted-save-files)
13. [Custom Start Date (CSD) Patch Crashes](#custom-start-date-csd-patch-crashes)
14. [Database and Roster Installation Problems](#database-and-roster-installation-problems)
15. [Pre-Game Editor Issues](#pre-game-editor-issues)
16. [Custom Graphics (Facepacks, Logos, Backgrounds)](#custom-graphics-facepacks-logos-backgrounds)
17. [Network / Online Play Issues](#network--online-play-issues)
18. [Moving EHM to a New Computer](#moving-ehm-to-a-new-computer)
19. [Antivirus and Firewall Conflicts](#antivirus-and-firewall-conflicts)
20. [EHM 2004 and EHM 2005 on Modern Windows](#ehm-2004-and-ehm-2005-on-modern-windows)
21. [Allsvenskan / Swedish League Crash (EHM 1)](#allsvenskan--swedish-league-crash-ehm-1)
22. [EHM 1 "Creating Shortlists" Crash at New Game Start](#ehm-1-creating-shortlists-crash-at-new-game-start)
23. [Miscellaneous Issues and Known Bugs](#miscellaneous-issues-and-known-bugs)
24. [Sources](#sources)

---

## Installation and First Launch

### EHM 2007

EHM 2007 was distributed exclusively as a digital download via the eLicense platform (with a very small number of physical disc copies produced for certain markets). To install:

1. Download the Try'n'Buy demo (the full-game installer). This was historically available from CNET's Download.com and various mirror sites.
2. Run the installer. On Windows Vista, 7, 8, and 10, right-click the installer `.exe` and select **Run as administrator**.
3. After installing the base game, download and apply the **v3.0.4 patch**. This patch is required for multiple-database support, general bug fixes, and compatibility with community roster updates. Without it, the game will not allow you to choose a database when starting a new game.
4. To unlock the full version from the Try'n'Buy demo, click the **Purchase** or **Activate** button on the eLicense screen and enter your Order ID.

> ⚠️ The v3.0.4 patch installer must also be run with **Run as administrator** on Vista and later versions of Windows, or it may appear to install successfully without actually updating the game.

On Windows Vista and later, if the patch appears to install but the game still reports an older version, it is almost always because the patch was not run with administrator privileges. Uninstall and reinstall from scratch, running every step as admin.

### EHM 1 (Steam / EA)

EHM 1 is available through Steam and installs via the standard Steam process. No separate patch file is required; updates are delivered automatically through Steam. If the game will not start after an update, see the [Game Crashes on Start-up or at Main Menu](#game-crashes-on-start-up-or-at-main-menu) section.

---

## Licensing and eLicense Issues (EHM 2007)

### How eLicense works

EHM 2007 used the eLicense digital rights management system. When you purchased the game, you received an **Order ID** (in the format `VT-XXXXXXXXXXXX`). This Order ID activates up to two (or in some configurations, three) simultaneous licence installations.

The eLicense Control Panel was accessible from Windows Control Panel on older versions of Windows. On Windows Vista and later it frequently does not open from the Control Panel; this is a known compatibility issue but does not prevent the game from running.

### How to unlicense the game (to move it to another computer)

If the Control Panel method does not work, the standard workaround is to add the `-unlicense` flag to your EHM shortcut:

1. Right-click your EHM 2007 desktop shortcut and select **Properties**.
2. In the **Target** field, add `-unlicense` after the closing quotation mark, so it reads:
   ```
   "C:\Program Files (x86)\Sports Interactive\NHL Eastside Hockey Manager 2007\ehm2007.exe" -unlicense
   ```
3. Click **OK** and then double-click the shortcut. An eLicense dialogue will appear with an **Unlicense** button.
4. Make sure you are connected to the internet before clicking Unlicense.

On Windows Vista with Data Execution Prevention (DEP) enabled, the eLicense service (`Runservice.exe`) may be blocked, preventing the unlicense step from working. The fix is to add `Runservice.exe` to the DEP exceptions list via **Control Panel → System → Advanced System Settings → Performance Settings → Data Execution Prevention**.

An alternative workaround when the shortcut method does not work is to use ExplorerXP (a free file manager): navigate to the `ehm2007.exe` file, right-click it, and choose the eLicense option from the context menu.

A command-line approach also works: open a command prompt, navigate to the EHM installation directory, and run:
```
ehm2007.exe -unlicense
```
This may need to be run from an administrator command prompt.

### Recovering lost licences

If you have lost your Order ID or your licence has become locked because a computer crashed or was replaced before unlicensing, contact eLicense directly:

- Support form: `http://www.elicense.com/support-form.aspx`
- Email: `support@elicense.com`

Provide your original email address, your Order ID if you have it, and a description of your situation. eLicense has been consistently responsive (typically 1–5 business days), and forum members have reported successful licence resets many years after purchase. They will re-issue your licence without charge.

> ⚠️ Do not share licences with other people. Each Order ID is a personal licence for use on your own computers only.

### Common error codes

| Error Code | Meaning | Action |
|---|---|---|
| `11` | All licences in use (none available to activate) | Contact eLicense to reset |
| `18` | Relicensing not allowed / licences expired | Contact eLicense |
| `23` | Could not get a licence at this time | Retry; if persistent, contact eLicense |
| `31` | System identifier cannot be retrieved | Contact eLicense |
| `999` | Vendor account locked | Try again later; contact eLicense if persistent |

---

## Running EHM on Windows Vista, 7, 8, and 10

### Core steps that apply to all modern Windows versions

The single most common fix for EHM 2007 not starting on Windows Vista and later is to **run the game as administrator**:

1. Right-click your EHM shortcut or the `ehm2007.exe` file.
2. Select **Run as administrator**.

To make this permanent, right-click the shortcut → **Properties** → **Compatibility** → tick **Run this program as an administrator**.

If the game still does not start, work through the following in order:

1. **Install `msvcr71.dll`** — See the [Missing DLL Files](#missing-dll-files-msvcr71dll-and-msvcp71dll) section. This is the most common cause of the game failing to start on Windows 7 and later.
2. **Disable your antivirus and firewall** — See the [Antivirus and Firewall Conflicts](#antivirus-and-firewall-conflicts) section. Zone Alarm in particular is known to completely prevent EHM from loading.
3. **Compatibility mode** — If the above do not help, right-click the `ehm2007.exe` → **Properties** → **Compatibility** → set to **Windows XP (Service Pack 2)**. Note that compatibility mode is often not needed and can sometimes cause additional issues; try it as a last resort.
4. **External monitors** — If you have an external monitor or HDMI cable connected, try disconnecting it and restarting Windows before launching EHM. Multiple users have found that an external display causes a runtime crash.
5. **Fresh install** — Uninstall EHM, manually delete the `Sports Interactive\NHL Eastside Hockey Manager 2007` folder from `C:\Program Files (x86)\`, then reinstall the game and reapply the patch, running both as administrator.

### Windows 7 specific

EHM 2007 runs well on Windows 7 (32-bit and 64-bit) with the steps above. The most common obstacle on 64-bit systems is the missing `msvcr71.dll`, which must be placed in both `C:\Windows\System32\` and `C:\Windows\SysWOW64\`. See the [Missing DLL Files](#missing-dll-files-msvcr71dll-and-msvcp71dll) section.

Extracting roster archives (`.zip` or `.rar`) directly to `C:\Program Files\` may fail silently due to Windows User Account Control (UAC). The recommended workaround is to extract to a temporary folder on the desktop first and then move the extracted folder manually into the EHM `database` directory.

Similarly, the Pre-Game Editor **must** be run as administrator on Windows 7 or any changes made in it will silently fail to save.

### Windows 8 and 8.1

EHM 2007 works on Windows 8 and 8.1 with the same steps as Windows 7. The `msvcr71.dll` fix and administrator privileges are typically sufficient. One specific issue reported on Windows 8.1: after a Windows 8.1 upgrade, the CSD Patch (Custom Start Date) may not recognise the EHM executable version and report `WARNING: Unrecognised version of EHM`. See the [CSD Patch Crashes](#custom-start-date-csd-patch-crashes) section.

An incompatible skin installed in the game's skins folder has also caused EHM to stop loading on Windows 8. If the game worked previously and no longer starts, try removing any custom skins you have installed.

### Windows 10

EHM 2007 runs on Windows 10 for many users without special configuration beyond running as administrator and installing `msvcr71.dll`. If the game does not start:

1. Install `msvcr71.dll` (see the [Missing DLL Files](#missing-dll-files-msvcr71dll-and-msvcp71dll) section).
2. Run as administrator.
3. Disable antivirus software.
4. If a patched version of the game (`ehm2007.exe` file size around 9 MB) still will not run after all the above, some users have found success by replacing the EHM executable with a "no-CD" fixed version obtained from a game patch archive. This workaround is documented in the forum thread for older EHM versions on Windows 10, and the site administrators have noted an exception to the usual policy on modified executables given that the game is no longer commercially available.

EHM 1 (Steam) works natively on Windows 10.

---

## Running EHM on Apple Mac

### EHM 2007

EHM 2007 was briefly sold as a native Mac application, but Mac sales were discontinued several years before the PC version was also withdrawn. Mac save files are incompatible with PC save files (though databases are cross-platform). Mac licences were sold separately and cannot be substituted for PC licences.

The recommended method for running the PC version of EHM 2007 on a Mac is via **CrossOver Mac** or **Wine**. After installing CrossOver, create a new bottle and install EHM into it using the Try'n'Buy installer. The v3.0.4 patch must then be applied within the same bottle through CrossOver's software installation function.

Roster databases should be placed in the `data/database` folder within the bottle's virtual drive structure.

### EHM 1 (EHM EA, Steam)

There is no official native Mac build of EHM 1. The following methods have been used successfully by forum members:

- **PlayOnMac** — Generally regarded as the simplest approach. Install Steam through PlayOnMac and then install EHM through Steam within the PlayOnMac environment.
- **Wineskin Wrapper** — A community-built pre-configured Wineskin wrapper was created and shared in the forum, though links to older versions may be defunct given dropbox public folder changes. Check the forum for current links.
- **VirtualBox** — Install a Windows virtual machine and run EHM within it.
- **Boot Camp** — Dual-boot your Mac with a Windows installation.
- **Parallels / VMware Fusion** — Run EHM within a Windows virtual machine.

**Preferences not saving (PlayOnMac / Wine):** This is a known issue where EHM cannot write to the preferences file. A fix using Terminal symbolic links was documented in the forum and involves redirecting the preferences path. See the forum thread for step-by-step instructions.

**Graphics files not loading:** Player photos and logos should be placed in the correct sub-folders within the `data/pictures` directory of the game installation. Note that EHM does not display player photos from the default database as it uses fictional players; a real-player roster update is required before face packs will display.

**"Game is already running" when it clearly isn't (Steam / PlayOnMac):** Deleting the contents of the `My Documents/Sports Interactive/EHM/` folder has resolved this in many cases. Alternatively, reinstalling EHM through Steam within the PlayOnMac environment and starting fresh often works.

---

## Screen Resolution and Windowed Mode

### EHM 2007

EHM 2007 runs at a fixed resolution of 1024×768. On widescreen displays it will either show black bars on the sides (in correct aspect ratio) or stretch to fill the screen (distorted). Neither is an error.

**To run in windowed mode on a small-screen laptop (resolution 1366×768 or similar):**

Windowed mode requires the available desktop height to exceed 768 pixels. Since 1366×768 resolution gives exactly 768 pixels of height, the Windows taskbar uses some of that space and windowed mode will fail with the message *"Unable to initialize graphics in windowed mode. Please ensure the available desktop is larger than 1024×768."*

The workarounds are:
- Set the Windows taskbar to **auto-hide**, which frees up the taskbar height.
- Use the `-small_screen -windowed` shortcut commands:
  Right-click your EHM shortcut → **Properties** → add to the **Target** field after the closing quotation mark:
  ```
  "C:\Program Files (x86)\Sports Interactive\NHL Eastside Hockey Manager 2007\ehm2007.exe" -small_screen -windowed
  ```
- On some Windows 7 netbooks with 1024×600 resolution, editing the registry `Display1_DownScalingSupported` value from `0` to `1` allows selection of 1024×768. This is an advanced step with registry-editing risks.

**Runtime error when using `-small_screen -windowed`:** If your display height is less than approximately 800 pixels, the windowed mode command will generate a runtime error. There is no clean fix; the options are to use full-screen mode or to increase the system resolution if possible.

### EHM 1 (EHM EA, Steam)

EHM 1 supports multiple resolutions including up to 1920×1080. The resolution is set via **Preferences** in-game.

**"Unable to initialize graphics in windowed mode":** Add the Steam launch option `-small_screen -windowed` (via Steam Library → right-click EHM → Properties → Set Launch Options).

**DirectX sound error preventing game start:** See the [DirectX Sound Error](#directx-sound-error-ehm-1--ehm-ea) section.

**Corrupt game.cfg causes wrong resolution or crash on start:** Delete `game.cfg` from `C:\Users\[username]\AppData\Local\Sports Interactive\EHM\Temporary\` and restart the game. It will regenerate the file with default settings.

**4K monitors:** EHM 1 runs on 4K displays but text does not natively scale. To increase apparent text size, right-click `ehm.exe` → Properties → Compatibility → experiment with the **Override high DPI scaling behaviour** (or equivalent HiDPI) dropdown settings. Reducing colour mode to 8-bit has also been reported as helpful.

---

## Game Crashes on Start-up or at Main Menu

The most common causes, in rough order of frequency:

1. **Missing `msvcr71.dll`** — See the [Missing DLL Files](#missing-dll-files-msvcr71dll-and-msvcp71dll) section.
2. **Antivirus or firewall blocking the game** — See [Antivirus and Firewall Conflicts](#antivirus-and-firewall-conflicts). Disable entirely for a test.
3. **Not running as administrator** — Right-click and Run as administrator.
4. **External monitor connected** — Disconnect any HDMI or VGA cables and restart Windows.
5. **Corrupt `game.cfg` file (EHM 1)** — Delete `game.cfg` from `C:\Users\[username]\AppData\Local\Sports Interactive\EHM\Temporary\`.
6. **Game process already running in background** — Open Task Manager, look for `ehm2007.exe` or `ehm.exe`, end the task, and try again.
7. **Incompatible skin or graphics file** — Remove any custom skins or graphics from the game data folder, then try again.
8. **Corrupt or incomplete installation** — Uninstall, delete residual folders, reinstall from scratch.

### EHM 1 specific: crashes after updating

After some EHM 1 updates the game has failed to launch. Two fixes:

- **Delete `game.cfg`** from `C:\Users\[username]\AppData\Local\Sports Interactive\EHM\Temporary\`.
- **Verify integrity of game files** via Steam (right-click EHM in Steam Library → Properties → Local Files → Verify integrity of game files).

If neither works, uninstall and reinstall EHM through Steam.

---

## Missing DLL Files (msvcr71.dll and msvcp71.dll)

The error message *"This application has failed to start because msvcr71.dll was not found"* appears on Windows 7 and later because Microsoft removed these Visual C++ runtime files from newer Windows versions. They are required by EHM 2007 (especially after patching to v3.0.4).

**Fix:**

1. Download `msvcr71.dll` and/or `msvcp71.dll` from a reputable source such as `dll-files.com`.
2. On **32-bit Windows**: place the file in `C:\Windows\System32\`.
3. On **64-bit Windows**: place copies in **both** `C:\Windows\System32\` **and** `C:\Windows\SysWOW64\`. Placing it in only one location is a common mistake that leaves the error unresolved.
4. Alternatively, placing the `.dll` file directly in the EHM installation folder (alongside `ehm2007.exe`) is also effective and simpler.

This fix also resolves the related error `mscvr72.dll is missing`.

---

## The "No Restrictions" Error

The error message *"No restrictions — at least one of the days, executions or hours must be restricted. 15"* appears when EHM's eLicense system cannot initialise correctly, typically when running the Try'n'Buy demo or immediately after patching.

**Fix:**

1. **Install `msvcr71.dll`** — This is the most commonly reported fix. See the [Missing DLL Files](#missing-dll-files-msvcr71dll-and-msvcp71dll) section.
2. **Run as administrator** — Right-click the shortcut or `.exe` and select Run as administrator.
3. **Uninstall and reinstall** — Uninstall the game completely, delete residual files, then reinstall and run as administrator.
4. **Disable antivirus/firewall** — See [Antivirus and Firewall Conflicts](#antivirus-and-firewall-conflicts).
5. **eLicense service not running** — On some systems, the eLicense `LicCtrl Service` stops running. The fix involves starting the service via Windows Services manager. An alternative documented in the forum involves disabling DEP for `Runservice.exe` (see the eLicense section above).

---

## DirectX Sound Error (EHM 1 / EHM EA)

The error *"Unable to initialise the sound — please ensure that DirectX has been installed correctly"* is specific to EHM 1 and appears on some systems, particularly after certain game updates or after changing display settings.

**Try these fixes in order:**

1. **Delete `game.cfg`** from `C:\Users\[username]\AppData\Local\Sports Interactive\EHM\Temporary\` — This is the most reliable fix and resolves the error for many users.

2. **Disable display scaling on high DPI settings:**
   Navigate to `C:\Program Files (x86)\Steam\SteamApps\common\Eastside Hockey Manager\`, right-click `ehm.exe` → Properties → Compatibility → tick **Disable display scaling on high DPI settings**.

3. **Change desktop resolution to 1024×768 before launching:**
   Change your Windows desktop resolution to 1024×768, launch the game, then go to Preferences, untick **Play sound**, alt-tab out, restore your normal resolution, alt-tab back, and then change the resolution to your preferred setting within the game's Preferences.

4. **Untick "Play sound" in Preferences** — If you can get into the game by any means, unticking sound in Preferences resolves the crash on subsequent launches.

> ⚠️ If the game was muted via the Windows volume mixer while running, it may become permanently unable to initialise sound until the volume mixer entry is removed (which requires the game to be running). Deleting `game.cfg` resets all preferences including this.

---

## .CPP Fatal Errors

`.CPP` errors are diagnostic messages from the EHM game engine. They appear in a dialogue box showing a version number and a source code file reference, e.g. `FATAL: v3.0.4 comp_stats.cpp 10306`.

### Common causes

- **Modified database** — The most frequent cause. If you have edited the database with the Pre-Game or Saved Game editor, an incorrectly made change will produce a `.CPP` error. Testing the database with the default (unmodified) database will confirm whether this is the cause.
- **Outdated database version** — Using a database compiled for an earlier patch version with a newer game build (or vice versa) commonly produces the error `v3.0.2 db_files.cpp 1809`, indicating a version mismatch. Ensure you are using a database designed for the patch version you are running.
- **Corrupted save file** — A save that has become corrupt will often present as a `.CPP` error on loading. See [Corrupted Save Files](#corrupted-save-files).
- **Cracked executable** — Using a non-legitimate game executable causes `.CPP` errors. Support cannot be provided for pirated copies.
- **Hard disk issues** — Disk errors, insufficient disk space, or bad sectors can trigger `.CPP` errors including the `file_llist.CPP` disk I/O error.
- **Background process conflicts** — Antivirus or other software blocking game file access.

### Disk I/O error (`file_llist.CPP 238`)

The full message reads: *"Disk I/O error — unable to access data from disk. Reasons: (1) lack of disk space, (2) file locked by system, (3) bad sector on disk."*

Fix: Ensure you have more than 1 GB of free disk space. Run Windows Disk Error Checking (right-click drive → Properties → Tools → Error Checking) with full scan enabled. On Vista and later, try running the game as administrator as UAC may be blocking file writes.

### Specific .CPP errors and their meanings

| Error | Common Cause |
|---|---|
| `db_files.cpp 1809` | Database version mismatch (e.g. v3.0.2 database with v3.0.4 game) |
| `comp_stats.cpp 10301 / 10306` | Corrupt save or disk space issue |
| `file_llist.CPP 238` | Disk I/O problem — disk space or disk health |
| `select_leagues_screen.cpp 85` | Reinstall the v3.0.4 patch |
| `league.cpp 7740` | Likely corrupt save or unsupported database edit |
| `ingame_events.cpp` | Save corruption |
| `staff_contracts.cpp 3112` | Database edit or corrupt save |
| `utils.cpp 729` | Informational only, does not affect gameplay |
| `database.cpp 4133` | Corrupt save or version mismatch |

---

## Game Crashes on a Specific In-game Date

Crashing at the same in-game date across multiple save files or game restarts is typically caused by one of two things: a corrupt save file, or an error in the database.

### Diagnosing the cause

1. Start a completely new game using the **default (unmodified) database** and try to simulate past the problematic date. If it passes without issue, the database is the cause. If it crashes again, the problem may be hardware-related (disk errors).
2. If the crash only occurs with a particular database or roster update, that database has a bug on or around that date (often triggered by specific events such as trade deadline, draft, or the end of a season).

### Workarounds for crashes on a specific date

- **Go on vacation past the date** — Set your GM to vacation mode for a period covering the crash date. This sometimes bypasses the event that triggers the crash.
- **Make roster changes before simming** — Small actions such as trading a player, placing someone on waivers, firing a scout, or making a line-up change before simming past the date have been reported to resolve some crashes.
- **Go on vacation from the prior week in-game** — Rolling back to an earlier save and using vacation mode to cross the date is the most reliable method when other approaches fail.
- **Retire and go unemployed** — One user resolved a crash by retiring as GM and returning unemployed, allowing the AI to control the team through the problematic date.
- **Compressed saves increase risk** — Disable **Save Compressed** in Game Preferences. Multiple users have found that switching from compressed to uncompressed saves eliminates repeat crashes on specific dates.

### Attribute Decline Bug (unpatched EHM 2007)

Running EHM 2007 without the v3.0.4 patch causes all players to lose most of their attributes partway through a save game. This presents as a hard crash or as unusually poor player performance. If you started a game on an unpatched version, it is strongly recommended to restart on a patched installation.

---

## Corrupted Save Files

A save file is corrupt when it cannot be loaded or produces `.CPP` errors upon loading that do not occur with other saves or new games.

### Prevention

- **Disable Save Compressed** — In Preferences, untick the compressed saves option. This reduces (though does not eliminate) the risk of corruption, which is higher when compressing saves.
- **Enable Save Safely** — This option saves to a temporary file first before replacing the actual save, reducing the risk of truncated saves if the game crashes during saving.
- **Use Rolling Saves** — The rolling saves setting maintains up to four save slots, meaning a recent non-corrupt backup is always available.
- **Maintain free disk space** — Insufficient disk space is a documented cause of save corruption. Keep at least 1–2 GB free.
- **Run regular disk maintenance** — Disk errors can corrupt saves. Run Disk Error Checking (scandisk) and defragmentation periodically.

### Recovery

If your save is corrupt, check whether you have rolling save backups. These are located alongside your main save file with `_2`, `_3`, `_4` appended to the filename (typically in `My Documents\Sports Interactive\EHM 2007\Games\` for EHM 2007, or `My Documents\Sports Interactive\Eastside Hockey Manager\Games\` for EHM 1). Try loading each backup in turn.

If no backups exist, the save is generally unrecoverable.

---

## Custom Start Date (CSD) Patch Crashes

The Custom Start Date Patch for EHM 2007 allows starting a game in a more recent season than the default 2006/07 start date. It works by modifying the game's memory at runtime and must be used correctly on every load until a specific point in Season 1.

### Critical rules

- The CSD Patch must be used **every single time you load the save game** until:
  - **1 February of Season 1** — if you are not loading Russian or Finnish leagues.
  - **1 July of Season 1** — if Russian and/or Finnish leagues are loaded.
- Missing even one load with the CSD Patch will corrupt the save. The game will appear to continue working but will crash at a specific later date.
- The CSD Patch must be run **as administrator** (right-click → Run as administrator). Without admin privileges, the game will produce a `WARNING: Unrecognised version of EHM` and fail to apply correctly.

### Crash on a specific date after using the CSD Patch

If your game crashes on a date after you started using the CSD Patch (commonly around February or July of Season 1), it is almost certainly because you loaded the save without applying the CSD Patch on at least one occasion. The save cannot be recovered if this has happened.

### `comp_stats.cpp 1752` error with 2013/14 start date

Using CSD Patch v1.3 or earlier with a 2013/14 start date causes a crash around 14 February 2014 due to the Winter Olympics. This was fixed in CSD Patch v1.4. A save started with an earlier version cannot be recovered; start a new game with v1.4 or later.

### CSD Patch failing to recognise EHM version

If the Patch window shows `WARNING: Unrecognised version of EHM` and reports `17 of 17 values failed`, the most common cause is that the game was not run as administrator. Running both EHM and the Patch as administrator resolves this in most cases. If the issue persists, the ArtMoney manual patching method can be used as an alternative to the CSD Patch.

### Game crashes on October 1st with a post-2010 start date

October 1st is when the IIHF World Junior Championship begins in the game data. Using the CSD Patch changes the year but this date's events must still be patched correctly. If the game crashes on October 1st, use the **Apply Patch Only** button in the CSD Patch window after loading EHM but before the game creates the save, or use the ArtMoney method.

---

## Database and Roster Installation Problems

### EHM 2007

After patching to v3.0.4, when starting a new game the **Choose Database** screen should appear. If it does not, the patch has not been applied correctly or was not run as administrator.

**Installing a roster update:**

1. Download the roster update archive (`.zip` or `.rar`).
2. Extract the archive to a temporary location (e.g. the desktop). Do **not** extract directly to the Program Files folder on Windows 7 and later — UAC will silently block the extraction.
3. Inside the extracted archive there will be a folder containing the database files (`.dat`, `.cfg`). Move this entire folder into:
   ```
   C:\Program Files (x86)\Sports Interactive\NHL Eastside Hockey Manager 2007\data\database\
   ```
4. Launch EHM and select the new database when starting a game.

**Common mistake:** Copying individual `.dat` files over the default database files (overwriting them) instead of placing the folder alongside the existing database. Always keep the folder structure intact and do not overwrite.

**"Fatal: Unable to allocate data for database":** The database folder structure is incorrect or the database is incompatible with the current patch version. Re-read the readme file included with the database download.

### EHM 1 (Steam)

Databases can be installed via:
- **Steam Workshop** — Subscribe to a database and it will be downloaded and activated automatically.
- **Manual installation** — Place the database folder in `[Steam install path]\SteamApps\common\Eastside Hockey Manager\data\database\`, then import the database via the **Import Database** option in EHM.

**Game crashes when clicking Import Database:** This was a widespread bug in EHM version 15.14.0b. It was patched in a subsequent hotfix. If you encounter it, ensure your game is updated. A workaround reported by users is to remove older EHM 2007-format databases (e.g. UUDB) from the database folder, as their presence could cause the crash.

**Database not appearing after manual installation:** Ensure the folder is placed correctly and that the game has been fully restarted (not just the main menu). The import step is required for databases brought in manually.

---

## Pre-Game Editor Issues

### Buttons not visible / window too small

The Pre-Game Editor (for EHM 2007) has a minimum required resolution and will hide buttons — including **Confirm**, **Add New**, **Delete**, and **Change Database** — if the application window is not large enough. The fix is to maximise the editor window. Right-click the editor's taskbar button and select **Maximise** if the standard maximise button is not accessible.

### Changes not saving

If changes made in the Pre-Game Editor appear to save within the editor but are not reflected in the game, the editor was not run with administrator privileges. On Windows Vista and later, right-click the Editor executable and select **Run as administrator**. Any changes made without admin rights will not be written to disk.

### Unable to load database

When clicking File → Load in the Pre-Game Editor, the game may show *"Unable to load database — please choose another one"* without allowing you to browse for a file. This is because File → Load uses the **currently selected database folder**, not a file browser. Click the **Change Database** button near the bottom of the editor window to navigate to a different database folder.

---

## Custom Graphics (Facepacks, Logos, Backgrounds)

### EHM 2007

Graphics files (player photos, team logos, etc.) are placed in sub-folders within:
```
[EHM install folder]\data\pictures\
```

Common sub-folders:
- `players\` — player photos (PNG format)
- `clubs\[League Name]\` — team logos

If graphics are not appearing, check that:
1. You are using a real-player database (the default database uses fictional players and will not display photos tied to real player names).
2. Files are in PNG format. EHM 2007 does not display JPG files.
3. The folder structure matches exactly what the game expects. Check the readme file included with your graphics pack for the correct path.

### EHM 1 (Steam)

Graphics are placed in the same sub-folder structure under the EHM installation directory. On Mac via PlayOnMac or CrossOver, navigate to the equivalent path within the virtual drive structure. The Steam Workshop is an easier alternative for downloading official packs.

---

## Network / Online Play Issues

A detailed guide on setting up online play is available on the ehmtheblueline.com wiki: `https://ehmtheblueline.com/wiki/index.php?title=Setting_up_online_gameplay_in_EHM_2007`

### Key steps for hosting an online game

1. **Port forwarding** — Open ports **10095** and **10065** on your router. The process varies by router model; search for your model's manual or use the `portforward.com` guides.
2. **Share your public IP address** — Use a search engine to find your current public IP (search "what is my IP") and share this with connecting players. Do not use your local (`192.168.x.x`) IP address for external connections.
3. **Firewall exceptions** — Add EHM to your firewall exceptions list, or temporarily disable the firewall to test.
4. **Host joins chat first** — One reported tip is that the host should be in the in-game chat screen before other players attempt to connect.

### Common connection problems

**"Unable to join the game":** Ensure ports are forwarded correctly and that the connecting player is using the host's public IP, not local IP.

**Players connect but are immediately disconnected:** The host's router may be assigning a different local IP at each boot, invalidating the port forwarding rule. Set a static local IP address on the hosting machine in the router's DHCP settings, then update the port forwarding rule.

**Game freezes during online simulation speed changes:** A fix reported in 2026 is to set highlights to **None** and run the game on text-only simulation before adjusting the game speed.

**Player gets kicked when assigning scouts:** A reported fix was to stop all GMs from assigning scouts simultaneously.

**"DATA FULL" error in online game:** This is a known limitation of large databases in online mode. Reducing the number of leagues loaded may help.

### EHM 2007 online stability

EHM 2007's online mode is considered less stable than EHM 2005, and supports a maximum of approximately 16 simultaneous GMs (versus 30 in EHM 2005). For larger online leagues, EHM 2005 is generally preferred.

---

## Moving EHM to a New Computer

### EHM 2007

1. **Unlicense the game on the old computer first** (see the [Licensing](#licensing-and-elicense-issues-ehm-2007) section). This is essential. If you cannot unlicense before the old computer is disposed of, contact eLicense to reset your licences.
2. On the new computer, download the Try'n'Buy demo and install it.
3. Apply the v3.0.4 patch.
4. Enter your Order ID to activate the full game.
5. Copy your save files from `My Documents\Sports Interactive\EHM 2007\Games\` on the old machine to the same path on the new machine. Your save files survive reinstallation.

If you forgot to unlicense and the old computer is gone, contact eLicense via their support form and explain the situation. They will typically reset your licence within a few business days.

### EHM 1 (Steam)

Steam handles licencing automatically. Simply install Steam on the new computer, log into your Steam account, and download EHM. Save files are stored in `My Documents\Sports Interactive\Eastside Hockey Manager\` and can be transferred between computers.

---

## Antivirus and Firewall Conflicts

Several antivirus and firewall products are documented to conflict with EHM, either preventing it from starting or interrupting the eLicense process:

- **Zone Alarm** — A consistently reported cause of EHM 2007 failing to load on Vista and later. The recommended fix is to uninstall Zone Alarm entirely and switch to a different security product. Adding EHM to Zone Alarm's exceptions list has not reliably resolved the issue.
- **AVG** — Reported to prevent EHM from loading on Windows 7.
- **Avast** — Reported to interfere after updates, causing the game to stop launching.
- **Comodo** — The OOTP/EHM developer has noted this as a cause of eLicense issues on Windows 7.

**When testing, completely disable the antivirus and firewall (not just add an exception) to confirm whether they are the cause.** Once confirmed, either switch products or add exceptions that genuinely work for your specific software version.

The Windows built-in firewall (Windows Defender Firewall) and Microsoft Security Essentials have not been reported to cause problems with EHM.

---

## EHM 2004 and EHM 2005 on Modern Windows

### EHM 2004

EHM 2004 was distributed on physical disc and is subject to physical copy-protection rather than the eLicense system. It may not run on modern 64-bit Windows due to incompatible DRM. Running via **VirtualBox with a Windows XP virtual machine** is the most reliable approach.

A no-CD fixed executable has been discussed in the forum as a workaround for users who own original discs and cannot get the disc-based protection to work on modern hardware.

On Windows 10 specifically, the game produces an *"unable to read fonts"* error. This has not been resolved via standard compatibility modes; the VirtualBox/XP virtual machine approach is the documented solution.

### EHM 2005

EHM 2005 generally runs on Windows 7 with Run as administrator. On Windows 10 it may produce font-related errors. The VirtualBox approach works reliably. EHM 2005 also uses eLicense (from Version 2.0 onwards), so the licence management guidance in this guide applies.

One workaround for font errors in EHM 2005 is to copy the fonts folder from an EHM 2007 installation into the EHM 2005 installation directory.

---

## Allsvenskan / Swedish League Crash (EHM 1)

From approximately the 2025/26 in-game season onward, saves using the Swedish HockeyAllsvenskan may crash with the error `Error: failed to setup next stage: 0 (Allsvenskan)` or `CUSTOM_LEAGUE::Setup_Next_Stage()` errors. This is caused by a scheduling mismatch between the Allsvenskan relegation playoffs and the HockeyEttan (Swedish First Division) promotion playoffs.

### Root cause

The Allsvenskan's relegation stage requires the HockeyEttan playoffs to be complete before drawing teams. In some database versions, the HockeyEttan playoff schedule was not updated past 2016/17 dates, causing its games to fall after the Allsvenskan's relegation stage start date from the 2025/26 season onward.

### Fixes

**New games:** Do not load the HockeyEttan (Swedish First Division) when setting up a new career. Removing this league from your game setup prevents the scheduling conflict from arising.

**Existing saves (before July 1, 2025 in-game):** Use the EHM Editor to import a corrected HockeyEttan Rules & Structures file. A fixed version was shared in the forum thread.

**Existing saves (after July 1, 2025 in-game, before the crash date):** Use the EHM Editor to delete Swedish HockeyEttan from Rules & Structures in the saved game. This allows you to progress past the crash date. Add the league back before the next July 1 season update.

**Existing saves (at or past the crash date, no earlier save available):** Several users have reported deleting both the Allsvenskan relegation stage and the Swedish HockeyEttan from the saved game in the EHM Editor as a last resort that allowed continued play.

This bug has been addressed in updated versions of the TBL Roster databases. Ensure you are using the most recent available roster version.

---

## EHM 1 "Creating Shortlists" Crash at New Game Start

When starting a new game with EHM 1, the game may crash during the **Creating Shortlists** or **Initialising Game Data** stages. This is caused by errors in the `extra_config.cfg` or `record_config.cfg` files included with the database.

### Common causes

- **Future transfer dates in the past** — If the `extra_config.cfg` contains `FUTURE_TRANSFER` entries with dates before the game's start date, the game will crash. Remove or update these entries.
- **Duplicate player name entries** — If two players in the database share a name, certain config file entries (such as retirements) may match the wrong player and crash the game.
- **Outdated retirement entries** — Retirement entries for players who are now coaches, or players who no longer exist in the database, can cause the crash.

### Fix

Open the `extra_config.cfg` file in the database folder in a text editor and examine it for the issues above. Specific entries that have caused crashes in community roster releases include:
- Future transfers dated before the default game start date.
- UK league retirement entries for players who may have duplicate names in the database.
- Arena expansion entries.

Removing the offending lines and retrying usually resolves the crash. As a quick diagnostic step, renaming `extra_config.cfg` temporarily and starting the game without it will confirm whether the file is the cause.

**Instability with the Steam Workshop version:** If the database is subscribed to via Steam Workshop and crashing, copying the database files (`.db` and `.cfg`) from the Workshop folder to a manually created sub-folder in `[EHM install]\data\database\` and using that copy instead has been reported to improve stability.

---

## Miscellaneous Issues and Known Bugs

### Players disappearing from Free Agent market

A known issue where AI teams do not re-sign expiring contracts after Season 1. This is typically caused by not loading the CSD Patch every time during Season 1 (see [CSD Patch Crashes](#custom-start-date-csd-patch-crashes)).

### "Not enough space on roster"

This message can appear when a roster is marked as full due to league rules. It is not a software bug — check the team's contracted roster against league minimums and maximums in the rules settings.

### Wrong AHL/ECHL team affiliations

Affiliations are set in the database and may not match real-world pairings if the database has not been updated. This is a data issue rather than a software bug.

### Simulation speed is very slow on modern hardware

EHM is a single-threaded 32-bit application and does not make use of multiple CPU cores. Higher CPU clock speed (GHz) benefits simulation speed more than core count. A budget high-frequency processor may outperform a multi-core workstation CPU.

### Score display glitch / incorrect playoff series score

A display bug with playoff scores was reported and is cosmetic only; the underlying results are correct.

### Job offers auto-accepted while on vacation

A known limitation: while on vacation, certain prompted events may be auto-accepted. Avoid setting a vacation that overlaps critical decisions such as contract offer deadlines.

### Statistics not tracked properly after player changes teams

A known limitation in EHM 2007 when the Disk I/O error is occurring; player career statistics may fail to update. Resolving the underlying disk I/O problem (disk space, disk health) corrects this.

### Video recording does not work

Video capture of match simulation is not a supported feature in EHM 2007 or EHM 1. Third-party screen recording software is required.

### Pre-Game Editor changes not saved (Run as Administrator)

See the [Pre-Game Editor](#pre-game-editor-issues) section.

---

## Sources

The following threads from the ehmtheblueline.com Technical Support sub-forum (Forum 117) were reviewed for this guide. The full list of 371 source threads covers the period January 2006 through June 2026. The most substantive threads are listed below:

- https://www.ehmtheblueline.com/forums/viewforum.php?f=117 *(full sub-forum)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=2705 *(EHM 2007 eLicense & Order ID Issues)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=2861 *(EHM 2007 v3.0.x .CPP Fatal Errors)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=3586 *(EHM 2007 on Windows Vista)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=3700 *(EHM Crashes on the Same Date / Corrupted Save File)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=5019 *(EHM 2007 on Windows 7)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=7849 *(EHM 2007 on Apple Mac / CrossOver)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=7882 *(EHM 2007 No Longer On Sale)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=8700 *(msvcr71.dll and other DLL errors)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=8795 *(EHM crashes when selecting a database for a new game)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=10054 *(EHM 2007 on Windows 8)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=10121 *(EHM 2007 crashes on a certain date with the CSD Patch)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=12339 *("No Restrictions" error)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=13638 *(EHM 1 Windowed Mode / Screen Resolution)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=13644 *(Running EHM 1 on a Mac)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=14106 *(DirectX error: Unable to initialise the sound)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=15203 *(EHM will not start and/or crashes at start-up)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=15210 *(Network/Online Mode: Crashes and connection problems)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=17381 *(EHM 2007 on Windows 10)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=18987 *(Error: failed to setup next stage: 0 (Allsvenskan))*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=19930 *(Game crashing at "Creating Shortlists" stage)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=20194 *(EHM 2004/2005/2007 on Windows 10)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=20976 *(Save corrupted out of nowhere)*
- https://www.ehmtheblueline.com/forums/viewtopic.php?t=20983 *(Online game freezing)*
