/*
===========================================================================

Doom 3 BFG Edition GPL Source Code
Copyright (C) 1993-2012 id Software LLC, a ZeniMax Media company. 

This file is part of the Doom 3 BFG Edition GPL Source Code ("Doom 3 BFG Edition Source Code").  

Doom 3 BFG Edition Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Doom 3 BFG Edition Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 BFG Edition Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 BFG Edition Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 BFG Edition Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#ifdef __GNUG__
#pragma implementation "d_items.h"
#endif
#include "d_items.h"

#include "globaldata.h"

/**
 * PSPRITE ACTIONS for weapons.
 * This struct controls the weapon animations.
 * Each entry is made up of:
 * - Ammo/ammunition type
 * - Up state
 * - Down state
 * - Ready state
 * - Attack/fire/hit frame
 * - Muzzle flash state
 */
const weaponinfo_t	weaponinfo[NUMWEAPONS] =
{
    {
        // Fists
        am_noammo,
        S_PUNCHUP,
        S_PUNCHDOWN,
        S_PUNCH,
        S_PUNCH1,
        S_NULL
    },
    {
        // Pistol
        am_clip,
        S_PISTOLUP,
        S_PISTOLDOWN,
        S_PISTOL,
        S_PISTOL1,
        S_PISTOLFLASH
    },
	{
        // Shotgun
        am_shell,
        S_SGUNUP,
        S_SGUNDOWN,
        S_SGUN,
        S_SGUN1,
        S_SGUNFLASH1
    },
    {
        // Chain Gun
        am_clip,
        S_CHAINUP,
        S_CHAINDOWN,
        S_CHAIN,
        S_CHAIN1,
        S_CHAINFLASH1
    },
    {
        // Missile Launcher
        am_misl,
        S_MISSILEUP,
        S_MISSILEDOWN,
        S_MISSILE,
        S_MISSILE1,
        S_MISSILEFLASH1
    },
    {
        // Plasma Rifle
        am_cell,
        S_PLASMAUP,
        S_PLASMADOWN,
        S_PLASMA,
        S_PLASMA1,
        S_PLASMAFLASH1
    },
    {
        // BFG 9000
        am_cell,
        S_BFGUP,
        S_BFGDOWN,
        S_BFG,
        S_BFG1,
        S_BFGFLASH1
    },
    {
        // Chainsaw
        am_noammo,
        S_SAWUP,
        S_SAWDOWN,
        S_SAW,
        S_SAW1,
        S_NULL
    },
    {
        // Super Shotgun
        am_shell,
        S_DSGUNUP,
        S_DSGUNDOWN,
        S_DSGUN,
        S_DSGUN1,
        S_DSGUNFLASH1
    },
};
