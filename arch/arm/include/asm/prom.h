/*
 *  arch/arm/include/asm/prom.h
 *
 *  Copyright (C) 2009 Canonical Ltd. <jeremy.kerr@canonical.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */
#ifndef __ASMARM_PROM_H
#define __ASMARM_PROM_H

#ifdef CONFIG_OF

extern struct machine_desc *setup_machine_fdt(unsigned int dt_phys);
extern void arm_dt_memblock_reserve(void);
extern void arm_dt_memblock_free(void);
#else /* CONFIG_OF */

static inline struct machine_desc *setup_machine_fdt(unsigned int dt_phys)
{
	return NULL;
}

static inline void arm_dt_memblock_reserve(void) { }
static void arm_dt_memblock_free() {}

#endif /* CONFIG_OF */
#endif /* ASMARM_PROM_H */
