#ifndef FUSEE_FLOW_CTLR_H
#define FUSEE_FLOW_CTLR_H

#include <stdint.h>

#define FLOW_CTLR_BASE 0x60007000
#define MAKE_FLOW_REG(n) MAKE_REG32(FLOW_CTLR_BASE + n)

#define FLOW_CTLR_HALT_COP_EVENTS_0 MAKE_FLOW_REG(0x004)
#define FLOW_CTLR_RAM_REPAIR_0      MAKE_FLOW_REG(0x040)
#define FLOW_CTLR_FLOW_DBG_QUAL_0   MAKE_FLOW_REG(0x050)
#define FLOW_CTLR_L2FLUSH_CONTROL_0 MAKE_FLOW_REG(0x094)
#define FLOW_CTLR_BPMP_CLUSTER_CONTROL_0 MAKE_FLOW_REG(0x098)

#endif
