#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9d35aeec, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa252a49f, __VMLINUX_SYMBOL_STR(ieee80211_rts_duration) },
	{ 0xd7ecd8ad, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x897f0ccc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x66f4a024, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x338e2969, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x4c90984c, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x29d5e0f0, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0xf9a4f491, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xb91879cb, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4d15841, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x645f97b5, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x5cccd4d6, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x7b40e206, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x561ed4e1, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x347cd1b3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4f482ac, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x8448f098, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcef121ca, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x21ad2e14, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x73d49651, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xfb6d4da3, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x11becc8f, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x17b099d2, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd891be8a, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x17d070c2, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6d12c63, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x33ea1df0, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x9cf3310c, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5155600, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa2cec23e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x11761f56, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xb71d108d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa7f14f4e, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x7cc374c2, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x5fdb69ad, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x41c2eb24, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x15d8247d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbdfc5b7a, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0x428d1cbf, __VMLINUX_SYMBOL_STR(ath_hw_get_listen_time) },
	{ 0xfb4de67a, __VMLINUX_SYMBOL_STR(ath_regd_get_band_ctl) },
	{ 0x24482a5c, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd5a3ffa9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xfcdef8ea, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0x45ec8db3, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x282657a4, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xa4450c33, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x90f9a77e, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x319c6026, __VMLINUX_SYMBOL_STR(ath_is_49ghz_allowed) },
	{ 0xb98619b5, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9ce88f48, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x7de84fe8, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0x9ae52d03, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x38b6f3cf, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_duration) },
	{ 0x66997bab, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x9e7b103e, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x16a6feda, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa6301530, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x33cdf8a, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xda74c0d9, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0xaceb4f8d, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x83c5c23c, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x263018f8, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x99a109bd, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xdadd8c5d, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x66c66f48, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x30c58d84, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x37f4e422, __VMLINUX_SYMBOL_STR(ath_hw_keyreset) },
	{ 0x6a6cf370, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0xeb87363c, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211,ath";

MODULE_ALIAS("pci:v0000168Cd00000207sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000A727d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "810B493FFA7764F2E3573E2");
