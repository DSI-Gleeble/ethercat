// SPDX-License-Identifier: MIT
/**
    Network Driver for Beckhoff CCAT communication controller
    Copyright (C) Beckhoff Automation GmbH & Co. KG
    Author: Patrick Bruenn <p.bruenn@beckhoff.com>
*/

#ifndef _NETDEV_H_
#define _NETDEV_H_
extern struct ccat_eth_priv *ccat_eth_init(const struct ccat_device *ccatdev,
					   const void __iomem * addr);
extern void ccat_eth_remove(struct ccat_eth_priv *priv);
#endif /* #ifndef _NETDEV_H_ */
