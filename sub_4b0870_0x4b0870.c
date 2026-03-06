// 函数名称: sub_4b0870
// 虚拟地址: 0x4b0870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_4b0870(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4))[0x4]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int128_t* eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* var_c = eax_1
    int32_t var_138
    char const* const var_134
    char* ecx
    
    if (*arg3 == 5)
        void var_d0
        int128_t* eax_3 = sub_4b0280(&var_d0, arg2, arg3, &var_d0)
        int128_t var_40 = *eax_3
        int128_t var_30_1 = eax_3[1]
        int64_t var_20_1 = eax_3[2].q
        void var_f8
        int64_t* eax_5 = sub_4b7480(&var_f8, arg2 + 0x3c, &var_40, &var_f8)
        int32_t ecx_2 = arg3[0x20]
        int32_t edx_1 = arg4[1]
        var_40 = *eax_5
        int128_t var_30_2 = *(eax_5 + 0x10)
        int32_t eax_6 = arg4[2]
        int32_t ebx_1 = *arg4
        int32_t var_10_1 = arg3[0x21]
        int64_t var_20_2 = eax_5[4]
        void* ecx_5 = (ecx_2 * eax_6 + edx_1) * arg3[0x1f]
        int64_t var_18 = *(arg3 + 0x7c)
        int128_t* ecx_6 = ecx_5 + ebx_1
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = sx.q(ecx_6)
        int32_t ecx_7 = var_18:4.d
        eax_1 = divs.dp.d(sx.q(ecx_6), ecx_7 * var_18.d)
        
        if (mods.dp.d(edx_2:eax_9, var_18.d) != ebx_1
                || mods.dp.d(sx.q(divs.dp.d(edx_2:eax_9, var_18.d)), ecx_7) != edx_1 || eax_1 != eax_6)
            var_134 = "FabSubstateTable"
            var_138 = 0x1c7
            ecx = "FabSubstateCoordFromSlot(el, elState, idx) == coord"
        else
            uint32_t (* result)[0x4] = sub_4b07c0(arg2, ecx_6)
            eax_1 = ecx_6
            int32_t edx_9 = arg3[0x25]
            int32_t ecx_11 = arg3[0x24]
            int32_t* ecx_12
            
            if (eax_1 s>= edx_9)
                ecx_12 = *(ecx_11 + (edx_9 << 2) - 4)
            else
                ecx_12 = *(ecx_11 + (eax_1 << 2))
            
            *result = ecx_12
            int128_t xmm0_8
            int128_t xmm1_1
            int64_t xmm2_1
            
            if (ecx_12 == 0)
            label_4b09ed:
                xmm0_8 = data_572798
                xmm1_1 = data_5727a8
                xmm2_1 = 0x3f8000003f800000
            label_4b0a03:
                int32_t eax_16 = *(arg2 + 0x6c)
                int128_t var_68 = xmm0_8
                int128_t var_58_1 = xmm1_1
                int64_t var_48_1 = xmm2_1
                int32_t eax_17
                int64_t xmm0_9
                
                if (eax_16 s<= *(arg2 + 0x5c))
                    xmm0_9 = *(arg3 + 0x7c)
                    eax_17 = arg3[0x21]
                else
                    xmm0_9 = *(arg2 + 0x70)
                    eax_17 = *(arg2 + 0x78)
                
                int32_t edx_11 = arg3[0x22]
                int32_t var_10_2 = eax_17
                var_18 = xmm0_9
                void var_a8
                eax_1 = sub_4b1940(&var_a8, edx_11, &var_18, &var_a8, arg4, &var_40, &var_68)
                int128_t xmm1_2 = eax_1[1]
                *(result + 0x3c) = *eax_1
                *(result + 0x4c) = xmm1_2
                
                if ((*result)[0xf] f> 0f)
                    @__security_check_cookie@4(var_c ^ &__saved_ebp)
                    return result
                
                var_134 = "FabSubstateTable"
                var_138 = 0x1db
                ecx = "substate.transform.t.s > 0"
            else
                if (ecx_12[1] == 0x20)
                    int32_t** eax_14 = sub_4459f0(ecx_12)
                    
                    if (eax_14[1] == 0)
                        goto label_4b09ed
                    
                    void var_120
                    int128_t* eax_15 = sub_4b0280(eax_14, result, *eax_14, &var_120)
                    xmm0_8 = *eax_15
                    xmm1_1 = eax_15[1]
                    xmm2_1 = eax_15[2].q
                    goto label_4b0a03
                
                var_134 = "FabDefGet"
                var_138 = 0xe7
                ecx = "ptr->assetType == ASSET_TYPE_FAB"
    else
        var_134 = "FabSubstateTable"
        var_138 = 0x1c0
        ecx = "el.type == FAB_DISTRIBUTE"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx, "c:\ax2017\engine\fabdef.cpp", var_138, var_134)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
