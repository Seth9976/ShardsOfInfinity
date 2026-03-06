// 函数名称: sub_500b00
// 虚拟地址: 0x500b00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_500b00()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HMENU hMenu = CreatePopupMenu()
    POINT point
    GetCursorPos(&point)
    char eax_2 = sub_500a80()
    char eax_3 = sub_500ac0()
    HMENU eax_4 = CreatePopupMenu()
    int32_t ecx
    ecx.b = eax_2 != 0
    InsertMenuA(eax_4, 0xffffffff, (ecx << 3) + 0x400, 0x16, "Lock")
    int32_t eax_5
    eax_5.b = eax_3 != 0
    InsertMenuA(eax_4, 0xffffffff, (eax_5 << 3) + 0x400, 0x17, "Hide")
    HMENU eax_7 = CreatePopupMenu()
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xa, "Left")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xb, &data_586130)
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xc, "Right")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xd, "Bottom")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xe, "Center Vertically")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xf, "Center Horizontally")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x10, "Center")
    InsertMenuA(eax_7, 0xffffffff, 0xc00, 0, &data_5559b1)
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x12, "Move Forward\tCtrl-]")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x13, "Move Back\tCtrl-[")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x14, "To Front\tCtrl-Shift-]")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x15, "To Back\tCtrl-Shift-[")
    HMENU eax_8 = CreatePopupMenu()
    InsertMenuA(eax_8, 0xffffffff, MF_BYPOSITION, 0x11, "SizeToSource")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_4, "Layer")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_7, "Align")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_8, "Transform")
    BOOL eax_9 = TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_ce1790, nullptr)
    void var_68
    float var_50
    float var_24
    char* ecx_24
    
    switch (eax_9)
        case 0
            goto label_501183
        case 0xa
            int32_t eax_10 = data_d77c6c
            
            if (eax_10 != 0)
                char* ecx_3
                float var_30_1
                
                if (eax_10 != 1)
                    void* eax_11
                    eax_11, ecx_3 = sub_4fbab0(data_d76c6c, nullptr)
                    int32_t esi_1 = 1
                    int32_t eax_12 = data_d77c6c
                    var_30_1 = *(eax_11 + 0xc)
                    
                    if (eax_12 s> 1)
                        do
                            void* eax_13
                            eax_13, ecx_3 = sub_4fbab0((&data_d76c6c)[esi_1], nullptr)
                            esi_1 += 1
                            float xmm0_3 = __minss_xmmss_memss(*(eax_13 + 0xc), var_30_1)
                            eax_12 = data_d77c6c
                            var_30_1 = xmm0_3
                        while (esi_1 s< eax_12)
                    
                    if (eax_12 s> 0)
                        goto label_500d5d
                else
                    var_30_1 = 0f
                label_500d5d:
                    int32_t i = 0
                    
                    do
                        void* eax_14
                        int32_t edx_1
                        eax_14, edx_1 = sub_4fbab0((&data_d76c6c)[i], nullptr)
                        float xmm2_2 = var_30_1 f- *(eax_14 + 0xc)
                        var_24 = xmm2_2 f+ *(eax_14 + 0xc)
                        float var_20_1 = *(eax_14 + 0x10) + 0f
                        float var_1c_1 = *(eax_14 + 0x14) + xmm2_2
                        float var_18_1 = *(eax_14 + 0x18) + 0f
                        int128_t* eax_16
                        eax_16, ecx_3 = sub_47bc00(&var_50, edx_1, &var_24, &var_50)
                        i += 1
                        *(eax_14 + 0xc) = *eax_16
                    while (i s< data_d77c6c)
                ecx_3.b = 1
                sub_4fb880(ecx_3)
            
            goto label_501183
        case 0xb
            int32_t eax_17 = data_d77c6c
            
            if (eax_17 != 0)
                int32_t ecx_7 = data_d76c6c
                char* ecx_8
                float xmm0_13
                
                if (eax_17 != 1)
                    void* eax_20
                    eax_20, ecx_8 = sub_4fbab0(ecx_7, nullptr)
                    xmm0_13 = *(eax_20 + 0x10)
                else
                    int32_t eax_18
                    eax_18, ecx_8 = sub_4fba30(ecx_7)
                    
                    if (eax_18 == 0)
                        xmm0_13 = (zx.o(0)).d
                    else
                        int32_t* eax_19
                        eax_19, ecx_8 = sub_485450(data_d76c60)
                        xmm0_13 = *(*eax_19 + 0x10)
                
                int32_t i_1 = 0
                
                if (data_d77c6c s> 0)
                    do
                        void* eax_21
                        int32_t edx_2
                        eax_21, edx_2 = sub_4fbab0((&data_d76c6c)[i_1], nullptr)
                        float xmm1_2 = xmm0_13 f- *(eax_21 + 0x10)
                        var_24 = *(eax_21 + 0xc) + 0f
                        float var_20_2 = *(eax_21 + 0x10) + xmm1_2
                        float var_1c_2 = *(eax_21 + 0x14) + 0f
                        float var_18_2 = *(eax_21 + 0x18) + xmm1_2
                        int128_t* eax_23
                        eax_23, ecx_8 = sub_47bc00(&var_50, edx_2, &var_24, &var_50)
                        i_1 += 1
                        *(eax_21 + 0xc) = *eax_23
                    while (i_1 s< data_d77c6c)
                
                ecx_8.b = 1
                sub_4fb880(ecx_8)
            
            goto label_501183
        case 0xc
            int32_t eax_24 = data_d77c6c
            
            if (eax_24 != 0)
                int32_t ecx_12 = data_d76c6c
                char* ecx_13
                
                if (eax_24 != 1)
                    void* eax_29
                    eax_29, ecx_13 = sub_4fbab0(ecx_12, nullptr)
                    var_50 = *(eax_29 + 0x14)
                else
                    int32_t eax_25
                    eax_25, ecx_13 = sub_4fba30(ecx_12)
                    
                    if (eax_25 == 0)
                        float xmm0_24[0x4] = *sub_500350(&var_50)
                        var_50.o = _mm_shuffle_ps(xmm0_24, xmm0_24, 0xaa)
                    else
                        int32_t* eax_26
                        eax_26, ecx_13 = sub_485450(data_d76c60)
                        var_50.o = *(*eax_26 + 0x14)
                
                int32_t i_2 = 0
                
                if (data_d77c6c s> 0)
                    do
                        void* eax_30
                        int32_t edx_3
                        eax_30, edx_3 = sub_4fbab0((&data_d76c6c)[i_2], nullptr)
                        float xmm1_4 = var_50 f- *(eax_30 + 0x14)
                        var_24 = xmm1_4 f+ *(eax_30 + 0xc)
                        float var_20_3 = *(eax_30 + 0x10) + 0f
                        float var_1c_3 = *(eax_30 + 0x14) + xmm1_4
                        float var_18_3 = *(eax_30 + 0x18) + 0f
                        int128_t* eax_32
                        eax_32, ecx_13 = sub_47bc00(&var_68, edx_3, &var_24, &var_68)
                        i_2 += 1
                        *(eax_30 + 0xc) = *eax_32
                    while (i_2 s< data_d77c6c)
                
                ecx_13.b = 1
                sub_4fb880(ecx_13)
            
            goto label_501183
        case 0xd
            int32_t eax_33 = data_d77c6c
            
            if (eax_33 != 0)
                int32_t ecx_17 = data_d76c6c
                char* ecx_18
                
                if (eax_33 != 1)
                    void* eax_38
                    eax_38, ecx_18 = sub_4fbab0(ecx_17, nullptr)
                    var_50 = *(eax_38 + 0x18)
                else
                    int32_t eax_34
                    eax_34, ecx_18 = sub_4fba30(ecx_17)
                    
                    if (eax_34 == 0)
                        float xmm0_37[0x4] = *sub_500350(&var_68)
                        var_50.o = _mm_shuffle_ps(xmm0_37, xmm0_37, 0xff)
                    else
                        int32_t* eax_35
                        eax_35, ecx_18 = sub_485450(data_d76c60)
                        var_50.o = *(*eax_35 + 0x18)
                
                int32_t i_3 = 0
                
                if (data_d77c6c s> 0)
                    do
                        void* eax_39
                        int32_t edx_4
                        eax_39, edx_4 = sub_4fbab0((&data_d76c6c)[i_3], nullptr)
                        float xmm1_6 = var_50 f- *(eax_39 + 0x18)
                        var_24 = *(eax_39 + 0xc) + 0f
                        float var_20_4 = *(eax_39 + 0x10) + xmm1_6
                        float var_1c_4 = *(eax_39 + 0x14) + 0f
                        float var_18_4 = *(eax_39 + 0x18) + xmm1_6
                        int128_t* eax_41
                        eax_41, ecx_18 = sub_47bc00(&var_68, edx_4, &var_24, &var_68)
                        i_3 += 1
                        *(eax_39 + 0xc) = *eax_41
                    while (i_3 s< data_d77c6c)
                
                ecx_18.b = 1
                sub_4fb880(ecx_18)
            
            goto label_501183
        case 0xe
            sub_5004f0()
            char* ecx_22
            ecx_22.b = 1
            sub_4fb880(ecx_22)
        label_501183:
            DestroyMenu(hMenu)
            DestroyMenu(eax_7)
            DestroyMenu(eax_8)
            BOOL result = DestroyMenu(eax_4)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        case 0xf
            goto label_5010b7
        case 0x10
            sub_5004f0()
        label_5010b7:
            sub_5003b0()
            char* ecx_23
            ecx_23.b = 1
            sub_4fb880(ecx_23)
            goto label_501183
        case 0x11
            sub_500630()
            goto label_501183
        case 0x12
            sub_4ff130()
            goto label_501183
        case 0x13
            sub_4ff1c0()
            goto label_501183
        case 0x14
            sub_4ff0d0()
            goto label_501183
        case 0x15
            sub_4ff100()
            goto label_501183
        case 0x16
            char eax_42
            eax_42, ecx_24 = sub_500a80()
            int32_t i_4 = 0
            
            if (data_d77c6c s> 0)
                bool var_25_1 = eax_42 == 0
                
                do
                    void* eax_43
                    eax_43, ecx_24 = sub_4fbab0((&data_d76c6c)[i_4], nullptr)
                    ecx_24.b = var_25_1
                    i_4 += 1
                    *(eax_43 + 0x31) = ecx_24.b
                while (i_4 s< data_d77c6c)
            
        label_50110d:
            ecx_24.b = 1
            sub_4fb880(ecx_24)
            sub_4cf4c0(data_d76c60)
            sub_5012b0()
            goto label_501183
        case 0x17
            char eax_44
            eax_44, ecx_24 = sub_500ac0()
            int32_t i_5 = 0
            
            if (data_d77c6c s> 0)
                bool var_25_2 = eax_44 == 0
                
                do
                    void* eax_45
                    eax_45, ecx_24 = sub_4fbab0((&data_d76c6c)[i_5], nullptr)
                    ecx_24.b = var_25_2
                    i_5 += 1
                    *(eax_45 + 0x30) = ecx_24.b
                while (i_5 s< data_d77c6c)
            
            goto label_50110d
    
    sub_44e4d0(eax_9, &data_5559b1, "Halt", "c:\ax2017\engine\editor\uieditor.cpp", 0x8ed, 
        "DoRClickMenu")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
