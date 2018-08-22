// SPDX-License-Identifier: MIT
/**
    Network Driver for Beckhoff CCAT communication controller
    Copyright (C) Beckhoff Automation GmbH & Co. KG
    Author: Patrick Bruenn <p.bruenn@beckhoff.com>
*/

#ifndef _UPDATE_H_
#define _UPDATE_H_
extern u8 ccat_get_prom_id(void __iomem * const ioaddr);
extern struct ccat_update *ccat_update_init(const struct ccat_device *ccatdev,
					    void __iomem * addr);
extern void ccat_update_remove(struct ccat_update *update);
#endif /* #ifndef _UPDATE_H_ */
