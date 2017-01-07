/*
 * Copyright (c) 2017 Dell EMC Isilon
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef __SNMP_IPV6__IPV6_STATSTABLE_H__
#define __SNMP_IPV6__IPV6_STATSTABLE_H__

#include "ipv6MIB_tree.h"

typedef struct ipv6IfStatsEntry {
	u_int	ipv6IfStatsInReceives;
	u_int	ipv6IfStatsInHdrErrors;
	u_int	ipv6IfStatsInTooBigErrors;
	u_int	ipv6IfStatsInNoRoutes;
	u_int	ipv6IfStatsInAddrErrors;
	u_int	ipv6IfStatsInUnknownProtos;
	u_int	ipv6IfStatsInTruncatedPkts;
	u_int	ipv6IfStatsInDiscards;
	u_int	ipv6IfStatsInDelivers;
	u_int	ipv6IfStatsOutForwDatagrams;
	u_int	ipv6IfStatsOutRequests;
	u_int	ipv6IfStatsOutDiscards;
	u_int	ipv6IfStatsOutFragOKs;
	u_int	ipv6IfStatsOutFragFails;
	u_int	ipv6IfStatsOutFragCreates;
	u_int	ipv6IfStatsReasmReqds;
	u_int	ipv6IfStatsReasmOKs;
	u_int	ipv6IfStatsReasmFails;
	u_int	ipv6IfStatsInMcastPkts;
	u_int	ipv6IfStatsOutMcastPkts;
} ipv6IfStatsEntry;

#endif
