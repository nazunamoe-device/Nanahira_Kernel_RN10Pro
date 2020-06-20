/*
 * Author: andip71, 01.09.2017
 *
 * Version 2.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"2.0"

#define LIST_WL_DEFAULT				"qcom_rx_wakelock;wlan;wlan_wow_wl;wlan_extscan_wl;netmgr_wl;NETLINK;IPA_WS;[timerfd];wlan_ipa;wlan_pno_wl;wcnss_filter_lock;IPCRTR_lpass_rx;hal_bluetooth_lock"

#define LENGTH_LIST_WL				255
#define LENGTH_LIST_WL_DEFAULT		158
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5
