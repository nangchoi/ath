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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xb375fced, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0x65524612, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xf0728860, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x313ffb1b, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x8a9809d6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x897f0ccc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x67ca6f48, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xc64ef9ea, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xdce777bc, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x6942499f, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x9313d603, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xf0ef2b01, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0x399d7544, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x8b59153a, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xa2e59924, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x53d2cece, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1e35e9cc, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_start) },
	{ 0x3e89b508, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x4a0cf5a8, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x338e2969, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xbdd5f102, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x4c90984c, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xcb1eb0a1, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x60882f51, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xffd02408, __VMLINUX_SYMBOL_STR(ath9k_hw_get_tsf_offset) },
	{ 0x3eecd3b2, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0x7d97c8c7, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0x2b0127e2, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x4cb93a22, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xb51f5811, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0xd45e4d0a, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x95b0a31c, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x5624fead, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x548f5eaa, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x17b8e2d9, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0xd1580b52, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0xb91879cb, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xe1e8eb10, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x854c50c3, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xfd66fb7c, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc162ee1c, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0x4d15841, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4a7a18ec, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x56d4ca56, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x645f97b5, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x2db09022, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0xad25ad8b, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0x5cccd4d6, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x7b40e206, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xaa7b73c9, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_apply_pattern) },
	{ 0x5572a148, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x347cd1b3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4f482ac, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xb7d07b2c, __VMLINUX_SYMBOL_STR(ieee80211_scan_completed) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xd94b3c0c, __VMLINUX_SYMBOL_STR(ath_gen_timer_free) },
	{ 0x1aeba889, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x760ffe08, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xe3b60e0b, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xa09a8a16, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x527a8d6e, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_init_debug) },
	{ 0xbc82831d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xe229598d, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x9f259c62, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbf8d1e2a, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_gpio_input) },
	{ 0xc7c8c191, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0x276d4c3c, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_deinit_debug) },
	{ 0xa6a3cf69, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x61e3ec3a, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0xa97f857a, __VMLINUX_SYMBOL_STR(ath9k_hw_request_gpio) },
	{ 0x2fbee4ea, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf32) },
	{ 0x8fe5c1a3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xcef121ca, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xf09442f6, __VMLINUX_SYMBOL_STR(ieee80211_ready_on_channel) },
	{ 0x21ad2e14, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x73d49651, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x2f70413a, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x9a358c43, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_wakeup) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xab43d101, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0xe124ad68, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0x53a38a82, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x20ef8927, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfb6d4da3, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb2baecba, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xf721fbcd, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x802b8620, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0x7e184715, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0x11b230b1, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb544227, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x195d4402, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x17b099d2, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd76d0222, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xd891be8a, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x17d070c2, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6d12c63, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x984ee7b3, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6ebefc2c, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0x40ea4466, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0xacb1b78e, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x34f92f7a, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x26e2e74f, __VMLINUX_SYMBOL_STR(ieee80211_tx_prepare_skb) },
	{ 0x9cf3310c, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x2d15177d, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_stat_rx) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xaee40d0c, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x5527dcc4, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xd098999b, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x5155600, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xee4bb529, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0xc5473301, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x46a45705, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_stop) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0xabcc1dc2, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_base_eeprom) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1a3ec6d7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xa2cec23e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x11761f56, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x42187e4, __VMLINUX_SYMBOL_STR(ieee80211_remain_on_channel_expired) },
	{ 0xdc47488, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0xf3ea20b6, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x21c9c156, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x13b92851, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0xf74d1ef3, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_recv) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xb71d108d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe3109190, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x4d32f7f6, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xcd4b7cd5, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xcee38600, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0x4f86f33b, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x2e666ed6, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0x1b68182f, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xa7f14f4e, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x251fe05a, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x7cc374c2, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x2a975e54, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0x5fdb69ad, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x404ed03b, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0xaf759bb4, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0x4d65f296, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x886fe62e, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_enable) },
	{ 0x26ca3db2, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xd85b6c42, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_phy_err) },
	{ 0x59f0b69d, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x15d8247d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x278832bc, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xe37094a8, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0x772c354c, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0x53169fb2, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x5ea7ece6, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x3b2184d5, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xf40fbf02, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xe033734e, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tx_filter) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x11c6ea23, __VMLINUX_SYMBOL_STR(debugfs_create_devm_seqfile) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd5a3ffa9, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x4718f5d9, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xf4a3ff6c, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0x95e5793f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd0b8c838, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xef037488, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0x706d9bfc, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0xfcdef8ea, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0x6cc0c0b1, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0xf22a837b, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0x45ec8db3, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0xcfd486a5, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0xb84eb84e, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x7ddc56cc, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0xb0fd72a9, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0x282657a4, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x48969a10, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xc9c99c99, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf4ca2bb4, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd10d5617, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0xae8d6f0c, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x2691acb, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0x90f9a77e, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x123f82f3, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0xb9d1692a, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x2142697b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3d7565a, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0xb98619b5, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9ce88f48, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x907fccf7, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x536ce742, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6434095a, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x450da88c, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0xf47e66b0, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xd2d0c47b, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x6f1f9ec7, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x66997bab, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x16a6feda, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x9e7b103e, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x13470b19, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0xd72625cb, __VMLINUX_SYMBOL_STR(ieee80211_parse_p2p_noa) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x5ac9509c, __VMLINUX_SYMBOL_STR(ieee80211_nullfunc_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa6301530, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0xea1b33d0, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x425d9f64, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0xc469f09f, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0x33cdf8a, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xda74c0d9, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0x64c3a8bc, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0xaceb4f8d, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x927a7aad, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x3bd8f2cc, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0xf860b07b, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xb18be9c4, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0x5f79b6fb, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0xe998cb8f, __VMLINUX_SYMBOL_STR(ieee80211_probereq_get) },
	{ 0x83c5c23c, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xca702abb, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x79413036, __VMLINUX_SYMBOL_STR(ath_gen_timer_alloc) },
	{ 0xc7922d93, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x99a109bd, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x49f5a25a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xdadd8c5d, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xb14c45a0, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_check) },
	{ 0x49987f41, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x5efcef9d, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_modal_eeprom) },
	{ 0x66c66f48, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc9e537a9, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x455047c8, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x226c32c1, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb1ae0375, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x55fe4565, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x46004aa9, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xeb87363c, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x634eb654, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x26e41c92, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x77ea65c4, __VMLINUX_SYMBOL_STR(ieee80211_update_p2p_noa) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x6957d190, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x9f9a2ef, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0x43b4f887, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,cfg80211,ath";

MODULE_ALIAS("platform:ath9k");
MODULE_ALIAS("platform:ar933x_wmac");
MODULE_ALIAS("platform:ar934x_wmac");
MODULE_ALIAS("platform:qca955x_wmac");
MODULE_ALIAS("platform:qca953x_wmac");
MODULE_ALIAS("platform:qca956x_wmac");
MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv0000168Csd00002096bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002003bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006B2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A1bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F8Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000682bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd00002005bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd00004129bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000412Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000692bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000803bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002182bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F82bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A4bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A120bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E07Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E08Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E081bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E099bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00004026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001043sd000085F2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "591F25EEE2294D51A1DE1FE");
