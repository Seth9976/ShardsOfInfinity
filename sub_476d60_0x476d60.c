// 函数名称: sub_476d60
// 虚拟地址: 0x476d60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_476d60()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HMENU hMenu_1 = CreatePopupMenu()
    POINT point
    GetCursorPos(&point)
    HMENU eax_2 = CreatePopupMenu()
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xa, "Left")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xb, &data_586130)
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xc, "Right")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xd, "Bottom")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xe, "Center Vertically")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xf, "Center Horizontally")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0x10, "Center")
    HMENU eax_3 = CreatePopupMenu()
    InsertMenuA(eax_3, 0xffffffff, MF_BYPOSITION, 0x11, "SizeToSource")
    HMENU hMenu = hMenu_1
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_2, "Align")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_3, "Transform")
    BOOL eax_4 = TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_ce1790, nullptr)
    
    if (eax_4 u<= 0x11)
        eax_4 = zx.d(lookup_table_4775dc[eax_4])
        void var_70
        int128_t var_50
        int128_t var_40
        int128_t var_30
        
        switch (eax_4)
            case 0
                goto label_477561
            case 1
                if (data_5cea2c != 0)
                    int32_t i = 0
                    var_50 = *sub_476cf0(&var_40)
                    
                    if (data_5cea2c s> 0)
                        do
                            char* eax_6
                            int32_t edx_1
                            eax_6, edx_1 = sub_469160((&data_5cda2c)[i])
                            float xmm2_1[0x4] = *(*(eax_6 + 0x63c) * 0x208 + eax_6 + 0x14)
                            float xmm1_2 = var_50.d f- xmm2_1
                            var_30.d = xmm1_2 f+ xmm2_1
                            var_30:4.d = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55) + 0f
                            float xmm0_8 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
                            float xmm2_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff) + 0f
                            var_30:8.d = xmm1_2 + xmm0_8
                            var_30:0xc.d = xmm2_3
                            var_40 = *sub_47bc00(&var_70, edx_1, &var_30, &var_70)
                            sub_46b230(&var_40, 0x71, eax_6, &var_40)
                            i += 1
                        while (i s< data_5cea2c)
                        
                        hMenu = hMenu_1
                    
                    sub_469210(1)
                
                goto label_477561
            case 2
                if (data_5cea2c != 0)
                    int32_t i_1 = 0
                    var_40 = *sub_476cf0(&var_70)
                    
                    if (data_5cea2c s> 0)
                        do
                            char* eax_11
                            int32_t edx_2
                            eax_11, edx_2 = sub_469160((&data_5cda2c)[i_1])
                            float xmm2_4 = var_40:4.d
                            float xmm3_1[0x4] = *(*(eax_11 + 0x63c) * 0x208 + eax_11 + 0x14)
                            float xmm0_12 = xmm3_1[0] + 0f
                            float xmm1_5 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
                            float xmm2_5 = xmm2_4 - xmm1_5
                            var_30.d = xmm0_12
                            var_30:4.d = xmm2_5 + xmm1_5
                            float xmm0_16 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
                            float xmm2_6 = xmm2_5 + _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
                            var_30:8.d = xmm0_16 + 0f
                            var_30:0xc.d = xmm2_6
                            var_50 = *sub_47bc00(&var_70, edx_2, &var_30, &var_70)
                            sub_46b230(&var_50, 0x71, eax_11, &var_50)
                            i_1 += 1
                        while (i_1 s< data_5cea2c)
                        
                        hMenu = hMenu_1
                    
                    sub_469210(1)
                
                goto label_477561
            case 3
                if (data_5cea2c != 0)
                    int32_t i_2 = 0
                    var_40 = *sub_476cf0(&var_70)
                    
                    if (data_5cea2c s> 0)
                        do
                            char* eax_16
                            int32_t edx_3
                            eax_16, edx_3 = sub_469160((&data_5cda2c)[i_2])
                            float xmm2_7 = var_40:8.d
                            float xmm3_3[0x4] = *(*(eax_16 + 0x63c) * 0x208 + eax_16 + 0x14)
                            float xmm1_7 = _mm_shuffle_ps(xmm3_3, xmm3_3, 0xaa)
                            float xmm2_8 = xmm2_7 - xmm1_7
                            var_30:8.d = xmm2_8 + xmm1_7
                            var_30.d = xmm2_8 f+ xmm3_3
                            float xmm0_23 = _mm_shuffle_ps(xmm3_3, xmm3_3, 0x55)
                            float xmm3_5 = _mm_shuffle_ps(xmm3_3, xmm3_3, 0xff) + 0f
                            var_30:4.d = xmm0_23 + 0f
                            var_30:0xc.d = xmm3_5
                            var_50 = *sub_47bc00(&var_70, edx_3, &var_30, &var_70)
                            sub_46b230(&var_50, 0x71, eax_16, &var_50)
                            i_2 += 1
                        while (i_2 s< data_5cea2c)
                        
                        hMenu = hMenu_1
                    
                    sub_469210(1)
                
                goto label_477561
            case 4
                if (data_5cea2c != 0)
                    int32_t i_3 = 0
                    var_40 = *sub_476cf0(&var_70)
                    
                    if (data_5cea2c s> 0)
                        do
                            char* eax_21
                            int32_t edx_4
                            eax_21, edx_4 = sub_469160((&data_5cda2c)[i_3])
                            float xmm4_1 = var_40:0xc.d
                            float xmm3_6[0x4] = *(*(eax_21 + 0x63c) * 0x208 + eax_21 + 0x14)
                            float xmm0_28 = xmm3_6[0] + 0f
                            float xmm2_11 = _mm_shuffle_ps(xmm3_6, xmm3_6, 0xff)
                            float xmm4_2 = xmm4_1 - xmm2_11
                            var_30.d = xmm0_28
                            float xmm0_30 = _mm_shuffle_ps(xmm3_6, xmm3_6, 0x55)
                            float xmm3_8 = _mm_shuffle_ps(xmm3_6, xmm3_6, 0xaa) + 0f
                            var_30:4.d = xmm4_2 + xmm0_30
                            var_30:8.d = xmm3_8
                            var_30:0xc.d = xmm4_2 + xmm2_11
                            var_50 = *sub_47bc00(&var_70, edx_4, &var_30, &var_70)
                            sub_46b230(&var_50, 0x71, eax_21, &var_50)
                            i_3 += 1
                        while (i_3 s< data_5cea2c)
                        
                        hMenu = hMenu_1
                    
                    sub_469210(1)
                
                goto label_477561
            case 5
                if (data_5cea2c != 0)
                    int32_t i_4 = 0
                    var_30 = *sub_476cf0(&var_70)
                    
                    if (data_5cea2c s> 0)
                        float xmm0_35 = (var_30:4.d f+ var_30:0xc.d) * 0.5f
                        
                        do
                            char* eax_26
                            int32_t edx_5
                            eax_26, edx_5 = sub_469160((&data_5cda2c)[i_4])
                            int32_t ecx_23 = *(eax_26 + 0x63c) * 0x208
                            float xmm3_9[0x4] = *(ecx_23 + eax_26 + 0x14)
                            float xmm2_13 = xmm0_35
                                - (*(ecx_23 + eax_26 + 0x20) f+ *(ecx_23 + eax_26 + 0x18)) * 0.5f
                            var_30.d = xmm3_9[0] + 0f
                            float xmm1_11 = xmm2_13 + _mm_shuffle_ps(xmm3_9, xmm3_9, 0x55)
                            float xmm0_44 = _mm_shuffle_ps(xmm3_9, xmm3_9, 0xaa)
                            float xmm2_14 = xmm2_13 + _mm_shuffle_ps(xmm3_9, xmm3_9, 0xff)
                            var_30:4.d = xmm1_11
                            var_30:8.d = xmm0_44 + 0f
                            var_30:0xc.d = xmm2_14
                            var_40 = *sub_47bc00(&var_70, edx_5, &var_30, &var_70)
                            sub_46b230(&var_40, 0x71, eax_26, &var_40)
                            i_4 += 1
                        while (i_4 s< data_5cea2c)
                        
                        hMenu = hMenu_1
                    
                    sub_469210(1)
                
                goto label_477561
            case 6
                if (data_5cea2c != 0)
                    int32_t i_5 = 0
                    var_30 = *sub_476cf0(&var_70)
                    
                    if (data_5cea2c s> 0)
                        float xmm0_50 = (var_30.d f+ var_30:8.d) * 0.5f
                        
                        do
                            char* eax_31
                            int32_t edx_6
                            eax_31, edx_6 = sub_469160((&data_5cda2c)[i_5])
                            int32_t ecx_28 = *(eax_31 + 0x63c) * 0x208
                            float xmm2_15[0x4] = *(ecx_28 + eax_31 + 0x14)
                            float xmm1_13 = xmm0_50
                                - (*(ecx_28 + eax_31 + 0x1c) f+ *(ecx_28 + eax_31 + 0x14)) * 0.5f
                            var_30.d = xmm1_13 f+ xmm2_15
                            var_30:4.d = _mm_shuffle_ps(xmm2_15, xmm2_15, 0x55) + 0f
                            float xmm0_60 = _mm_shuffle_ps(xmm2_15, xmm2_15, 0xaa)
                            float xmm2_17 = _mm_shuffle_ps(xmm2_15, xmm2_15, 0xff) + 0f
                            var_30:8.d = xmm1_13 + xmm0_60
                            var_30:0xc.d = xmm2_17
                            var_40 = *sub_47bc00(&var_70, edx_6, &var_30, &var_70)
                            sub_46b230(&var_40, 0x71, eax_31, &var_40)
                            i_5 += 1
                        while (i_5 s< data_5cea2c)
                        
                        hMenu = hMenu_1
                    
                    sub_469210(1)
                
                goto label_477561
            case 7
                if (data_5cea2c != 0)
                    int32_t i_6 = 0
                    var_30 = *sub_476cf0(&var_70)
                    
                    if (data_5cea2c s> 0)
                        float xmm0_65 = (var_30.d f+ var_30:8.d) * 0.5f
                        float xmm0_68 = (var_30:4.d f+ var_30:0xc.d) * 0.5f
                        
                        do
                            char* eax_36
                            int32_t edx_7
                            eax_36, edx_7 = sub_469160((&data_5cda2c)[i_6])
                            int32_t ecx_33 = *(eax_36 + 0x63c) * 0x208
                            float xmm4_4[0x4] = *(ecx_33 + eax_36 + 0x14)
                            float xmm2_19 = xmm0_65
                                - (*(ecx_33 + eax_36 + 0x1c) f+ *(ecx_33 + eax_36 + 0x14)) * 0.5f
                            float xmm3_12 = xmm0_68
                                - (*(ecx_33 + eax_36 + 0x20) f+ *(ecx_33 + eax_36 + 0x18)) * 0.5f
                            var_30.d = xmm2_19 f+ xmm4_4
                            float xmm1_19 = xmm3_12 + _mm_shuffle_ps(xmm4_4, xmm4_4, 0x55)
                            float xmm0_77 = _mm_shuffle_ps(xmm4_4, xmm4_4, 0xaa)
                            float xmm3_13 = xmm3_12 + _mm_shuffle_ps(xmm4_4, xmm4_4, 0xff)
                            var_30:4.d = xmm1_19
                            var_30:8.d = xmm2_19 + xmm0_77
                            var_30:0xc.d = xmm3_13
                            var_40 = *sub_47bc00(&var_70, edx_7, &var_30, &var_70)
                            sub_46b230(&var_40, 0x71, eax_36, &var_40)
                            i_6 += 1
                        while (i_6 s< data_5cea2c)
                        
                        hMenu = hMenu_1
                    
                    sub_469210(1)
                
                goto label_477561
            case 8
                sub_47a860()
            label_477561:
                DestroyMenu(hMenu)
                DestroyMenu(eax_2)
                BOOL result = DestroyMenu(eax_3)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
    
    sub_44e4d0(eax_4, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x3126, "UI2DoRClickMenu")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
