// 函数名称: sub_466640
// 虚拟地址: 0x466640
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_466640(void* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = *(*(arg1 + 0x63c) * 0x208 + arg1 + 0xe8)
    uint32_t i_4 = *(arg1 + 0x67c)
    
    if (ecx == 0)
    label_4667ab:
        
        if (i_4 != 0)
            uint32_t eax_7 = sub_4c0fc0(i_4)
            *(arg1 + 0x67c) = 0
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_7
    else
        int32_t edx
        
        if (i_4 == 0)
            int32_t* eax_3 = sub_4c0e10(ecx)
            *(arg1 + 0x67c) = eax_3
            edx = sub_4c1ed0(eax_3, "idle", eax_3, 1f, 0)
            i_4 = *(arg1 + 0x67c)
        else if (ecx == 0)
            goto label_4667ab
        
        if (i_4 != 0)
            int128_t var_1c0
            int128_t* eax_5 =
                sub_4c4540(&var_1c0, edx, *(*(arg1 + 0x63c) * 0x208 + arg1 + 0xe8), &var_1c0)
            int32_t* ecx_4 = *(arg1 + 0x67c)
            float xmm0_1[0x4] = *eax_5
            int32_t eax_6 = *(arg1 + 0x63c) * 0x208
            float xmm3_2 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xaa)
            float xmm1_2 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff) - _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55)
            float xmm0_3 = *(arg1 + 0x6e8)
            float xmm2_1[0x4] = *(eax_6 + arg1 + 0x14)
            float xmm4_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
            float xmm5_4 =
                (_mm_shuffle_ps(xmm2_1, xmm2_1, 0xff) - _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)) / xmm1_2
            float xmm1_3 = *(arg1 + 0x750)
            int32_t xmm0_4 = *(arg1 + 0x6dc)
            int32_t xmm0_5 = *(arg1 + 0x6e0)
            var_1c0 = xmm5_4 * xmm0_3
            char var_18c
            
            if (not(xmm1_3 <= 0.999000013f))
                var_18c = 0xff
            else if (0.00100000005f <= xmm1_3)
                eax_6 = int.d(xmm1_3 * 255f + 0.5f)
                var_18c.d = eax_6
            else
                var_18c = 0
            
            int32_t* ecx_8 = *ecx_4
            
            if (ecx_8[1] != 0x18)
                sub_44e4d0(eax_6, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
                    "c:\ax2017\engine\assetutils.cpp", 0x2e6, "FlanimGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_8 = sub_4459f0(ecx_8)
            int32_t i_2 = 0
            
            if (*(eax_8 + 0x14) s> 0)
                int32_t ecx_9 = 0
                int32_t i
                
                do
                    ecx_9 += 0x60
                    *(ecx_4[0x1a] + ecx_9 - 5) = var_18c
                    i = i_2 + 1
                    i_2 = i
                while (i s< *(eax_8 + 0x14))
            
            void* eax_10 = *(arg1 + 0x67c)
            *(eax_10 + 0x2c) = xmm0_4
            *(eax_10 + 0x3c) = xmm0_5
            void* eax_11 = *(arg1 + 0x67c)
            *(eax_11 + 0x20) = (xmm4_2 f- xmm2_1) / (xmm3_2 f- xmm0_1) * xmm0_3
            *(eax_11 + 0x34) = var_1c0.d
            int32_t var_1f4_2 = sub_4c1040(*(arg1 + 0x67c), arg2)
            void* var_158
            i_4 = sub_4c4160(*(arg1 + 0x67c), &var_158)
            uint32_t i_3 = i_4
            var_18c.d = i_3
            
            if (i_3 s> 0)
                void var_14c
                void* esi_2 = &var_14c
                uint32_t i_1
                
                do
                    i_4 = *(*(esi_2 - 0xc) + 0xc) - 2
                    
                    switch (i_4)
                        case 0
                            void var_188
                            sub_481e00(*(*(esi_2 - 0xc) + 0x10), &var_188)
                            char var_174_1 = 1
                            i_4 = sub_4820b0(&var_188)
                            i_3 = var_18c.d
                            *(arg1 + 0x68c) = i_4
                        case 1
                            i_4 = sub_4824a0(*(arg1 + 0x68c))
                            i_3 = var_18c.d
                        case 3
                            void* ecx_17 = *(arg1 + 0x680)
                            
                            if (ecx_17 != 0)
                                sub_4954d0(ecx_17)
                            
                            void* ecx_18 = *(esi_2 - 0xc)
                            float xmm1_7[0x4] = *(esi_2 - 8)
                            int128_t var_1d0 = data_5c779c
                            float var_1e0_1 = 0
                            int32_t* ecx_19 = *(ecx_18 + 0x10)
                            var_1c0 = data_5c77ac
                            var_1c0:0xc.d = 0
                            float xmm0_12 = *esi_2
                            var_1d0.d = xmm0_12 + xmm0_12
                            var_1c0:4.q = _mm_unpacklo_ps(xmm1_7, *(esi_2 - 4))
                            i_4 = sub_495120(ecx_19, &var_1d0)
                            i_3 = var_18c.d
                            *(arg1 + 0x680) = i_4
                        case 4
                            i_4 = *(arg1 + 0x680)
                            
                            if (i_4 != 0)
                                i_4 = sub_4954d0(i_4)
                                i_3 = var_18c.d
                            
                            *(arg1 + 0x680) = 0
                    
                    esi_2 += 0x14
                    i_1 = i_3
                    i_3 -= 1
                    var_18c.d = i_3
                while (i_1 != 1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_4
}
