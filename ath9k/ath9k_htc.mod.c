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
	{ 0xd7ecd8ad, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x65524612, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xf0728860, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x313ffb1b, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x8a9809d6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x67ca6f48, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xc64ef9ea, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x6942499f, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x9313d603, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xa2e59924, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xedbddb40, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x3e89b508, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x4a0cf5a8, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x338e2969, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xbdd5f102, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x4c90984c, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x60882f51, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0x2b0127e2, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x4cb93a22, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xd45e4d0a, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x95b0a31c, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0xb91879cb, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xe1e8eb10, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4d15841, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4a7a18ec, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x645f97b5, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb931ebc5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5cccd4d6, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x7b40e206, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x347cd1b3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4f482ac, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x1aeba889, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x760ffe08, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xe3b60e0b, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xa09a8a16, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x527a8d6e, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_init_debug) },
	{ 0xbc82831d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xe229598d, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x9f259c62, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x276d4c3c, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_deinit_debug) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x61e3ec3a, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x8fe5c1a3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xcef121ca, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xe7985cd8, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xc8556896, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x73d49651, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x2f70413a, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x20ef8927, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb2baecba, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xf721fbcd, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x11b230b1, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xb544227, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x195d4402, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x17b099d2, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xcca0be3c, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xd891be8a, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x17d070c2, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x984ee7b3, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xacb1b78e, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x34f92f7a, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x9cf3310c, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x2d15177d, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_stat_rx) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xaee40d0c, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x5527dcc4, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xd098999b, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x5155600, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xee4bb529, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x75e4b898, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xc5473301, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0xabcc1dc2, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_base_eeprom) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa2cec23e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x11761f56, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf74d1ef3, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_recv) },
	{ 0xb71d108d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4d32f7f6, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xcd4b7cd5, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x4f86f33b, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x1b68182f, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xa7f14f4e, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x7cc374c2, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x5fdb69ad, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x4d65f296, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x26ca3db2, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xd85b6c42, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_phy_err) },
	{ 0x23d33b22, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x59f0b69d, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x15d8247d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2810cbaf, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x278832bc, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xe37094a8, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0x53169fb2, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x5ea7ece6, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc375dec3, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x4395953e, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xf40fbf02, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd5a3ffa9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x2d493cff, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xc0f333fa, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x95e5793f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd0b8c838, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xb84eb84e, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x282657a4, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x1036aa1b, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xf4ca2bb4, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xae8d6f0c, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0xb9d1692a, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x2142697b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb98619b5, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x907fccf7, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x536ce742, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x6434095a, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x9ae52d03, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xf47e66b0, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x6f1f9ec7, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x9e7b103e, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x16a6feda, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x13470b19, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa6301530, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xea1b33d0, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x500daaa, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x927a7aad, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xf860b07b, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x2b626cd6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x4fcfe57b, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x5f79b6fb, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x83c5c23c, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xca702abb, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xf16d977b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x5037e40b, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc7922d93, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xdadd8c5d, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x5efcef9d, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_modal_eeprom) },
	{ 0x66c66f48, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x226c32c1, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb1ae0375, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x809dd6c4, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x55fe4565, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x46004aa9, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xd5ac7f96, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x2da1b27c, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D97AA41EF63133F707BAA44");
