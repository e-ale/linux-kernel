#ifndef __TI_PM_ASM_OFFSETS_H__
#define __TI_PM_ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 */

#define EMIF_SDCFG_VAL_OFFSET 0 /* offsetof(struct emif_regs_amx3, emif_sdcfg_val) */
#define EMIF_TIMING1_VAL_OFFSET 4 /* offsetof(struct emif_regs_amx3, emif_timing1_val) */
#define EMIF_TIMING2_VAL_OFFSET 8 /* offsetof(struct emif_regs_amx3, emif_timing2_val) */
#define EMIF_TIMING3_VAL_OFFSET 12 /* offsetof(struct emif_regs_amx3, emif_timing3_val) */
#define EMIF_REF_CTRL_VAL_OFFSET 16 /* offsetof(struct emif_regs_amx3, emif_ref_ctrl_val) */
#define EMIF_ZQCFG_VAL_OFFSET 20 /* offsetof(struct emif_regs_amx3, emif_zqcfg_val) */
#define EMIF_PMCR_VAL_OFFSET 24 /* offsetof(struct emif_regs_amx3, emif_pmcr_val) */
#define EMIF_PMCR_SHDW_VAL_OFFSET 28 /* offsetof(struct emif_regs_amx3, emif_pmcr_shdw_val) */
#define EMIF_RD_WR_LEVEL_RAMP_CTRL_OFFSET 32 /* offsetof(struct emif_regs_amx3, emif_rd_wr_level_ramp_ctrl) */
#define EMIF_RD_WR_EXEC_THRESH_OFFSET 36 /* offsetof(struct emif_regs_amx3, emif_rd_wr_exec_thresh) */
#define EMIF_COS_CONFIG_OFFSET 40 /* offsetof(struct emif_regs_amx3, emif_cos_config) */
#define EMIF_PRIORITY_TO_COS_MAPPING_OFFSET 44 /* offsetof(struct emif_regs_amx3, emif_priority_to_cos_mapping) */
#define EMIF_CONNECT_ID_SERV_1_MAP_OFFSET 48 /* offsetof(struct emif_regs_amx3, emif_connect_id_serv_1_map) */
#define EMIF_CONNECT_ID_SERV_2_MAP_OFFSET 52 /* offsetof(struct emif_regs_amx3, emif_connect_id_serv_2_map) */
#define EMIF_OCP_CONFIG_VAL_OFFSET 56 /* offsetof(struct emif_regs_amx3, emif_ocp_config_val) */
#define EMIF_LPDDR2_NVM_TIM_OFFSET 60 /* offsetof(struct emif_regs_amx3, emif_lpddr2_nvm_tim) */
#define EMIF_LPDDR2_NVM_TIM_SHDW_OFFSET 64 /* offsetof(struct emif_regs_amx3, emif_lpddr2_nvm_tim_shdw) */
#define EMIF_DLL_CALIB_CTRL_VAL_OFFSET 68 /* offsetof(struct emif_regs_amx3, emif_dll_calib_ctrl_val) */
#define EMIF_DLL_CALIB_CTRL_VAL_SHDW_OFFSET 72 /* offsetof(struct emif_regs_amx3, emif_dll_calib_ctrl_val_shdw) */
#define EMIF_DDR_PHY_CTLR_1_OFFSET 76 /* offsetof(struct emif_regs_amx3, emif_ddr_phy_ctlr_1) */
#define EMIF_EXT_PHY_CTRL_VALS_OFFSET 80 /* offsetof(struct emif_regs_amx3, emif_ext_phy_ctrl_vals) */
#define EMIF_REGS_AMX3_SIZE 560 /* sizeof(struct emif_regs_amx3) */

#define EMIF_PM_BASE_ADDR_VIRT_OFFSET 0 /* offsetof(struct ti_emif_pm_data, ti_emif_base_addr_virt) */
#define EMIF_PM_BASE_ADDR_PHYS_OFFSET 4 /* offsetof(struct ti_emif_pm_data, ti_emif_base_addr_phys) */
#define EMIF_PM_CONFIG_OFFSET 8 /* offsetof(struct ti_emif_pm_data, ti_emif_sram_config) */
#define EMIF_PM_REGS_VIRT_OFFSET 12 /* offsetof(struct ti_emif_pm_data, regs_virt) */
#define EMIF_PM_REGS_PHYS_OFFSET 16 /* offsetof(struct ti_emif_pm_data, regs_phys) */
#define EMIF_PM_DATA_SIZE 24 /* sizeof(struct ti_emif_pm_data) */

#define EMIF_PM_SAVE_CONTEXT_OFFSET 0 /* offsetof(struct ti_emif_pm_functions, save_context) */
#define EMIF_PM_RESTORE_CONTEXT_OFFSET 4 /* offsetof(struct ti_emif_pm_functions, restore_context) */
#define EMIF_PM_ENTER_SR_OFFSET 8 /* offsetof(struct ti_emif_pm_functions, enter_sr) */
#define EMIF_PM_EXIT_SR_OFFSET 12 /* offsetof(struct ti_emif_pm_functions, exit_sr) */
#define EMIF_PM_ABORT_SR_OFFSET 16 /* offsetof(struct ti_emif_pm_functions, abort_sr) */
#define EMIF_PM_FUNCTIONS_SIZE 24 /* sizeof(struct ti_emif_pm_functions) */
#define AMX3_PM_WFI_FLAGS_OFFSET 0 /* offsetof(struct am33xx_pm_sram_data, wfi_flags) */
#define AMX3_PM_L2_AUX_CTRL_VAL_OFFSET 4 /* offsetof(struct am33xx_pm_sram_data, l2_aux_ctrl_val) */
#define AMX3_PM_L2_PREFETCH_CTRL_VAL_OFFSET 8 /* offsetof(struct am33xx_pm_sram_data, l2_prefetch_ctrl_val) */
#define AMX3_PM_SRAM_DATA_SIZE 16 /* sizeof(struct am33xx_pm_sram_data) */

#define AMX3_PM_RO_SRAM_DATA_VIRT_OFFSET 0 /* offsetof(struct am33xx_pm_ro_sram_data, amx3_pm_sram_data_virt) */
#define AMX3_PM_RO_SRAM_DATA_PHYS_OFFSET 4 /* offsetof(struct am33xx_pm_ro_sram_data, amx3_pm_sram_data_phys) */
#define AMX3_PM_RO_SRAM_DATA_SIZE 8 /* sizeof(struct am33xx_pm_ro_sram_data) */

#endif
