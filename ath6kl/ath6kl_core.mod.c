#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9d35aeec, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x39bb37ea, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x8a9809d6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6df928b, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd7b7329e, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0xa29d6f58, __VMLINUX_SYMBOL_STR(cfg80211_conn_failed) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x7ad6ac18, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4a0c112d, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xe92a8028, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xcc2d0c6e, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x347cd1b3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0xadbe3fa5, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x576a451, __VMLINUX_SYMBOL_STR(cfg80211_check_station_change) },
	{ 0x8fe5c1a3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x819588d4, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0xc8556896, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xcb037b81, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x980b3d2d, __VMLINUX_SYMBOL_STR(cfg80211_pmksa_candidate_notify) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb84acfdb, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x13787b3, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xd58277, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x298f5f9, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf15a3541, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19c18373, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb6b37f56, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe101e803, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xff39f6be, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa2cec23e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x11761f56, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1380c48, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x81d0c6c3, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xb71d108d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf33b94a4, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xb4fa8d0b, __VMLINUX_SYMBOL_STR(cfg80211_get_drvinfo) },
	{ 0x23d33b22, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x3081948a, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xe3afc0d3, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0x5fc997de, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x2d9fd1a0, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x95e5793f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xaa0eb285, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0xe2168960, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x7d38bfc5, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x2d0643bd, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x14ccf681, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xc19eef41, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x2142697b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc40a4947, __VMLINUX_SYMBOL_STR(netdev_set_default_ethtool_ops) },
	{ 0x351a4900, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x10178e19, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb88e437e, __VMLINUX_SYMBOL_STR(cfg80211_roamed_bss) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa6301530, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x4fcfe57b, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf16d977b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xf6b1bb49, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x99a109bd, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8c81409a, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x6291d2a8, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x66c66f48, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x226c32c1, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x55fe4565, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x78960c6d, __VMLINUX_SYMBOL_STR(cfg80211_cqm_txe_notify) },
	{ 0x6fa11800, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "B2A2D04A2D45741823DEA01");
