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
	{ 0xff1b7214, __VMLINUX_SYMBOL_STR(ath6kl_core_destroy) },
	{ 0x8a9809d6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xee71e3b0, __VMLINUX_SYMBOL_STR(ath6kl_hif_intr_bh_handler) },
	{ 0xf3fb00d8, __VMLINUX_SYMBOL_STR(ath6kl_core_cleanup) },
	{ 0x91cfb84a, __VMLINUX_SYMBOL_STR(ath6kl_hif_rw_comp_handler) },
	{ 0x385778e5, __VMLINUX_SYMBOL_STR(ath6kl_core_create) },
	{ 0x88a6ad08, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xbeaed943, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x74575499, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x71a16493, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x347cd1b3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcfbcb953, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb03efc8a, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xcb014460, __VMLINUX_SYMBOL_STR(ath6kl_err) },
	{ 0xa6f66cc1, __VMLINUX_SYMBOL_STR(ath6kl_warn) },
	{ 0x17d070c2, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x531b604e, __VMLINUX_SYMBOL_STR(__virt_addr_valid) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xbaa052c2, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x11761f56, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6ccf60c1, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_suspend) },
	{ 0x33a11d02, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xff20c04d, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xff48382, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xe607a4d4, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_resume) },
	{ 0x161192bd, __VMLINUX_SYMBOL_STR(ath6kl_stop_txrx) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6ade6878, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2825972c, __VMLINUX_SYMBOL_STR(ath6kl_core_init) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2142697b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5952be73, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xf41121d2, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xc1df301b, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x128387e9, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x6261e55d, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x528e95ed, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xe7684a2a, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");

MODULE_INFO(srcversion, "62AB85ECA1DF5A37CFC4F5A");
