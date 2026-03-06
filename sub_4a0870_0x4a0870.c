// 函数名称: sub_4a0870
// 虚拟地址: 0x4a0870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4a0870(int32_t arg1, int32_t* arg2, int128_t* arg3, int32_t arg4 @ edi, int32_t* arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_543b02
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    float eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* esi = arg3
    int128_t* var_850 = esi
    int32_t* var_858
    int32_t* var_8e8 = &var_858
    int32_t* result_1
    sub_42ce10(&result_1, arg5, 0x1d)
    int32_t var_14_1 = 0
    int32_t var_828[0x201]
    int32_t eax_4 = sub_4a0790(var_858, &var_828)
    int32_t var_854 = eax_4
    int32_t edi = 0
    float var_830 = 0f
    
    if (eax_4 s> 0)
        int32_t (* esi_1)[0x201] = &var_828
        float xmm1_5
        
        do
            int32_t* ecx_2
            
            if (*esi_1 != 0)
                ecx_2 = data_e46fe4
                
                if (ecx_2[1] != 0x1e)
                    sub_44e4d0(eax_4, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
                        "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            else
                ecx_2 = data_e46fe0
                
                if (ecx_2[1] != 0x1e)
                    sub_44e4d0(eax_4, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
                        "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            
            void* eax_5 = sub_4459f0(ecx_2)
            edi += 1
            esi_1 = &(*esi_1)[4]
            int128_t var_880_1 = *(eax_5 + 8)
            float xmm0_2[0x4] = *(eax_5 + 8)
            eax_4 = var_854
            xmm1_5 = (_mm_shuffle_ps(xmm0_2, xmm0_2, 0xff) - _mm_shuffle_ps(xmm0_2, xmm0_2, 0x55)) f*
                *(var_850 + 0xc) + var_830
            var_830 = xmm1_5
        while (edi s< eax_4)
        
        esi = var_850
        var_830 = xmm1_5
    
    int32_t eax_7 = eax_4 - 1
    int32_t var_854_1 = eax_7
    
    if (eax_4 - 1 s>= 0)
        while (true)
            int32_t ecx_4 = eax_7 << 4
            int128_t var_8d8_1 = *esi
            int32_t var_868_1 = eax_7
            int128_t var_8c8_1 = esi[1]
            var_824
            int32_t eax_9 = *(&var_824 + ecx_4) * 9
            int32_t eax_10 = *var_858
            int128_t var_8b8_1 = esi[2]
            int32_t eax_11 = esi[5].d
            int32_t var_888_1 = eax_11
            int128_t var_8a8_1 = esi[3]
            int32_t esi_2 = var_828[eax_7 * 4]
            int128_t var_898_1 = esi[4]
            int32_t* ecx_5
            
            if (esi_2 != 0)
                ecx_5 = data_e46fe4
                
                if (ecx_5[1] != 0x1e)
                    sub_44e4d0(eax_11, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
                        "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            else
                ecx_5 = data_e46fe0
                
                if (ecx_5[1] != 0x1e)
                    sub_44e4d0(eax_11, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
                        "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            
            void* eax_12 = sub_4459f0(ecx_5)
            int128_t var_880_2 = *(eax_12 + 8)
            float xmm0_11[0x4] = *(eax_12 + 8)
            float xmm1_8 =
                _mm_shuffle_ps(xmm0_11, xmm0_11, 0xff) - _mm_shuffle_ps(xmm0_11, xmm0_11, 0x55)
            var_8d8_1.d = *arg2
            float xmm2_2 = var_830 - xmm1_8 f* var_8d8_1:0xc.d
            void* edi_1 = *fsbase->ThreadLocalStoragePointer
            var_830 = xmm2_2
            var_8d8_1:4.d = arg2[1] f+ xmm2_2
            
            if (esi_2 != 0)
                if (data_e49a38 s> *(edi_1 + 4))
                    __Init_thread_header(&data_e49a38)
                    
                    if (data_e49a38 == 0xffffffff)
                        var_14_1.b = 0xe
                        data_e49a3c = sub_4869c0(data_e46fe4)
                        var_14_1.b = 0
                        __Init_thread_footer(&data_e49a38)
                
                int32_t eax_49 = data_e49a40
                
                if (eax_49 s> *(edi_1 + 4))
                    eax_49 = __Init_thread_header(&data_e49a40)
                    
                    if (data_e49a40 == 0xffffffff)
                        var_14_1.b = 0xf
                        data_e49a44 = sub_4856d0(data_e46fe4, "txtLayerName")
                        var_14_1.b = 0
                        eax_49 = __Init_thread_footer(&data_e49a40)
                
                char const* const edx_25
                
                if (esi_2 == 1)
                    int32_t eax_55 = *(eax_10 + (eax_9 << 3) + 0x18)
                    var_820
                    
                    if (*(eax_55 + (*(&var_820 + ecx_4) << 2)) != 0)
                        sub_44e4d0(eax_55, &data_5559b1, "Halt", "c:\ax2017\engine\materialfndef.cpp", 
                            0x156, "MaterialFnEntry_Text")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    edx_25 = "Spherize"
                else
                    if (esi_2 != 2)
                        sub_44e4d0(eax_49, &data_5559b1, "Halt", "c:\ax2017\engine\materialfndef.cpp", 
                            0x159, "MaterialFnEntry_Text")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    var_81c
                    int32_t eax_51 = *(&var_81c + ecx_4)
                    
                    if (eax_51 == 4)
                        edx_25 = "Translate"
                    else
                        if (eax_51 != 5)
                            sub_44e4d0(eax_51 - 5, &data_5559b1, "Halt", 
                                "c:\ax2017\engine\materialfndef.cpp", 0x14e, "MaterialFnEntry_Text")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        edx_25 = "Rotate"
                
                char* var_844
                int32_t ecx_57 = sub_44f240(&var_844, edx_25)
                var_14_1.b = 0x10
                char* const eax_56 = &data_5559b1
                char* esi_7 = var_844
                int32_t var_8e8_7 = ecx_57
                
                if (esi_7 != 0)
                    eax_56 = esi_7
                
                sub_488a60(eax_56, data_e49a44, data_e49a3c, eax_56)
                data_e49a3c
                sub_4899c0(0x3f800000, eax_2, arg4)
                var_14_1.b = 0x11
                
                if (data_cdf414 != 0 && esi_7 != 0 && *esi_7 != 0)
                    char* eax_57 = sub_44f000(&var_844)
                    int32_t temp5_1 = *(eax_57 + 4)
                    *(eax_57 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_45d050(eax_57, *(eax_57 + 0xc) + 0x10)
                        var_844 = &data_5559b1
            else
                if (data_e49a08 s> *(edi_1 + 4))
                    __Init_thread_header(&data_e49a08)
                    
                    if (data_e49a08 == 0xffffffff)
                        var_14_1.b = 1
                        data_e49a0c = sub_4869c0(data_e46fe0)
                        var_14_1.b = 0
                        __Init_thread_footer(&data_e49a08)
                
                if (data_e49a10 s> *(edi_1 + 4))
                    __Init_thread_header(&data_e49a10)
                    
                    if (data_e49a10 == 0xffffffff)
                        var_14_1.b = 2
                        data_e49a14 = sub_4856d0(data_e46fe0, "imgTexture")
                        var_14_1.b = 0
                        __Init_thread_footer(&data_e49a10)
                
                if (data_e49a18 s> *(edi_1 + 4))
                    __Init_thread_header(&data_e49a18)
                    
                    if (data_e49a18 == 0xffffffff)
                        var_14_1.b = 3
                        data_e49a1c = sub_4856d0(data_e46fe0, "txtLayerName")
                        var_14_1.b = 0
                        __Init_thread_footer(&data_e49a18)
                
                if (data_e49a20 s> *(edi_1 + 4))
                    __Init_thread_header(&data_e49a20)
                    
                    if (data_e49a20 == 0xffffffff)
                        var_14_1.b = 4
                        data_e49a24 = sub_4856d0(data_e46fe0, "txtBlend")
                        var_14_1.b = 0
                        __Init_thread_footer(&data_e49a20)
                
                if (data_e49a28 s> *(edi_1 + 4))
                    __Init_thread_header(&data_e49a28)
                    
                    if (data_e49a28 == 0xffffffff)
                        var_14_1.b = 5
                        data_e49a2c = sub_4856d0(data_e46fe0, "txtVisible")
                        var_14_1.b = 0
                        __Init_thread_footer(&data_e49a28)
                
                int32_t eax_25 = *(eax_10 + (eax_9 << 3))
                
                if (eax_25 u> 3)
                    sub_44e4d0(eax_25, &data_5559b1, "Halt", "c:\ax2017\engine\materialfndef.cpp", 
                        0xc3, "MaterialFnItem_Name")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                char const* const edx_3
                
                switch (eax_25)
                    case 0
                        edx_3 = "Texture"
                    case 1
                        edx_3 = "Color"
                    case 2
                        edx_3 = "Group"
                    case 3
                        if (*(eax_10 + (eax_9 << 3) + 0x14) != 0)
                            sub_44e4d0(eax_25, &data_5559b1, "Halt", 
                                "c:\ax2017\engine\materialfndef.cpp", 0xc0, "MaterialFnItem_Name")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        edx_3 = "Circle"
                
                char* var_834
                int32_t ecx_13 = sub_44f240(&var_834, edx_3)
                var_14_1.b = 6
                char* const eax_26 = &data_5559b1
                char* esi_3 = var_834
                int32_t var_8e8_1 = ecx_13
                
                if (esi_3 != 0)
                    eax_26 = esi_3
                
                sub_488a60(eax_26, data_e49a1c, data_e49a0c, eax_26)
                int32_t eax_27 = *(eax_10 + (eax_9 << 3) + 0x20)
                char* var_82c
                char const* const edx_6
                
                switch (eax_27)
                    case 0
                        float xmm0_14 = *(eax_10 + (eax_9 << 3) + 0x24)
                        xmm0_14 - 1f
                        eax_27:1.b = (xmm0_14 == 1f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_14, 1f) ? 1 : 0) << 2 | (xmm0_14 < 1f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            edx_6 = &data_5559b1
                            goto label_4a0da5
                        
                        float xmm0_15 = xmm0_14 * 100f
                        float xmm0_16
                        
                        if (0 f<= xmm0_15)
                            xmm0_16 = xmm0_15 + 0.5f
                        else
                            xmm0_16 = xmm0_15 - 0.5f
                        
                        int32_t var_8e8_2 = int.d(xmm0_16)
                        char* const var_848
                        sub_44f980(&var_848, "%%%d")
                        var_14_1.b = 7
                        char* const ecx_16 = &data_5559b1
                        char* eax_29 = var_848
                        
                        if (eax_29 != 0)
                            ecx_16 = eax_29
                        
                        char* const var_8e8_3 = ecx_16
                        sub_44f980(&var_82c, "Opacity: %s")
                        var_14_1.b = 8
                        
                        if (data_cdf414 != 0)
                            char* eax_30 = var_848
                            
                            if (eax_30 != 0 && *eax_30 != 0)
                                char* eax_31 = sub_44f000(&var_848)
                                int32_t temp7_1 = *(eax_31 + 4)
                                *(eax_31 + 4) -= 1
                                
                                if (temp7_1 == 1)
                                    sub_45d050(eax_31, *(eax_31 + 0xc) + 0x10)
                                    var_848 = &data_5559b1
                        
                        goto label_4a0daa
                    case 1
                        edx_6 = "Multiply"
                        goto label_4a0da5
                    case 3
                        edx_6 = "Overlay"
                    label_4a0da5:
                        sub_44f240(&var_82c, edx_6)
                    label_4a0daa:
                        var_14_1.b = 9
                        char* ecx_20 = &data_5559b1
                        char* eax_32 = var_82c
                        
                        if (eax_32 != 0)
                            ecx_20 = eax_32
                        
                        char* var_8e8_4 = ecx_20
                        sub_488a60(eax_32, data_e49a24, data_e49a0c, ecx_20)
                        sub_488b00(data_e49a0c, data_e49a14)
                        void* eax_33 = *(eax_10 + (eax_9 << 3))
                        
                        if (eax_33 == 0)
                            uint32_t eax_34 = *(eax_10 + (eax_9 << 3) + 0xc)
                            int32_t ecx_24 = data_e49a0c
                            uint32_t var_838_2 = eax_34
                            
                            if (ecx_24 == 0)
                                sub_44e4d0(eax_34, &data_5559b1, "id != DATAID_NULL", 
                                    "c:\ax2017\engine\dataarray.h", 0x6c, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            uint32_t edx_12 = zx.d(ecx_24.w)
                            int32_t edi_2
                            
                            if (edx_12 u< data_654ebc)
                                edi_2 = data_654eb8
                                eax_34 = edx_12 * 0x438
                            
                            if (edx_12 u>= data_654ebc || *(eax_34 + edi_2 + 0x434) != ecx_24)
                                sub_44e4d0(eax_34, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                                    "c:\ax2017\engine\dataarray.h", 0x6d, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            uint32_t (* eax_35)[0x4] =
                                sub_486810(eax_34, data_e49a14, edx_12 * 0x438 + edi_2, &data_5559b1)
                            (*eax_35)[0x25] = *eax_35 + 1
                            (*eax_35)[0x26] = var_838_2
                        else if (eax_33 == 3)
                            if (data_e49a30 s> *(edi_1 + 4))
                                __Init_thread_header(&data_e49a30)
                                
                                if (data_e49a30 == 0xffffffff)
                                    var_14_1.b = 0xa
                                    data_e49a34 = sub_48d5b0("sys/TextureFn_Circle.materialFn", 0x1d)
                                    var_14_1.b = 9
                                    __Init_thread_footer(&data_e49a30)
                            
                            int32_t* var_864
                            int32_t* var_8e8_5 = &var_864
                            int32_t* var_85c
                            sub_42ce10(&var_85c, data_e49a34, 0x1d)
                            var_14_1.b = 0xb
                            uint32_t eax_38 = sub_4a2e30(var_864)
                            var_14_1.b = 9
                            int32_t* ecx_32 = var_85c
                            uint32_t var_838_3 = eax_38
                            
                            if (ecx_32 != 0)
                                ecx_32[7] -= 1
                                var_85c = nullptr
                            
                            int32_t ecx_33 = data_e49a0c
                            
                            if (ecx_33 == 0)
                                sub_44e4d0(eax_38, &data_5559b1, "id != DATAID_NULL", 
                                    "c:\ax2017\engine\dataarray.h", 0x6c, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            uint32_t edx_14 = zx.d(ecx_33.w)
                            int32_t edi_3
                            
                            if (edx_14 u< data_654ebc)
                                edi_3 = data_654eb8
                                eax_38 = edx_14 * 0x438
                            
                            if (edx_14 u>= data_654ebc || *(eax_38 + edi_3 + 0x434) != ecx_33)
                                sub_44e4d0(eax_38, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                                    "c:\ax2017\engine\dataarray.h", 0x6d, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            uint32_t (* eax_39)[0x4] =
                                sub_486810(eax_38, data_e49a14, edx_14 * 0x438 + edi_3, &data_5559b1)
                            (*eax_39)[0xf] = *eax_39 + 1
                            eax_39[4][0] = var_838_3
                        else if (eax_33 != 1)
                            sub_489e30(eax_33, data_e49a14, data_e49a0c, 1)
                        else
                            uint32_t esi_4 = *(eax_10 + (eax_9 << 3) + 0x10)
                            int32_t ecx_39 = data_e49a0c
                            
                            if (ecx_39 == 0)
                                sub_44e4d0(eax_33, &data_5559b1, "id != DATAID_NULL", 
                                    "c:\ax2017\engine\dataarray.h", 0x6c, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            uint32_t edx_16 = zx.d(ecx_39.w)
                            
                            if (edx_16 u< data_654ebc)
                                eax_33 = edx_16 * 0x438 + data_654eb8
                            
                            if (edx_16 u>= data_654ebc || *(eax_33 + 0x434) != ecx_39)
                                sub_44e4d0(eax_33, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                                    "c:\ax2017\engine\dataarray.h", 0x6d, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            uint32_t (* eax_41)[0x4] = sub_486810(eax_33, data_e49a14, 
                                edx_16 * 0x438 + data_654eb8, &data_5559b1)
                            uint32_t ecx_43 = *eax_41 + 1
                            (*eax_41)[0x23] = esi_4
                            esi_3 = var_834
                            (*eax_41)[0x22] = ecx_43
                            eax_41[9][0] = 0
                        
                        uint32_t eax_43 = zx.d(*(eax_10 + (eax_9 << 3) + 4))
                        sub_489e30(eax_43, data_e49a2c, data_e49a0c, eax_43.b)
                        data_e49a0c
                        sub_4899c0(0x3f800000, eax_2, arg4)
                        var_14_1.b = 0xc
                        
                        if (data_cdf414 != 0)
                            char* eax_44 = var_82c
                            
                            if (eax_44 != 0 && *eax_44 != 0)
                                char* eax_45 = sub_44f000(&var_82c)
                                int32_t temp8_1 = *(eax_45 + 4)
                                *(eax_45 + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    sub_45d050(eax_45, *(eax_45 + 0xc) + 0x10)
                                    var_82c = &data_5559b1
                        
                        var_14_1.b = 0xd
                        
                        if (data_cdf414 != 0 && esi_3 != 0 && *esi_3 != 0)
                            char* eax_46 = sub_44f000(&var_834)
                            int32_t temp9_1 = *(eax_46 + 4)
                            *(eax_46 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                sub_45d050(eax_46, *(eax_46 + 0xc) + 0x10)
                                var_834 = &data_5559b1
                    case 4
                        edx_6 = "Mask"
                        goto label_4a0da5
                    default
                        sub_44e4d0(eax_27, &data_5559b1, "Halt", "c:\ax2017\engine\materialfndef.cpp", 
                            0xac, "MaterialFnItem_Blend")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
            
            eax_7 = var_854_1 - 1
            var_14_1.b = 0
            var_854_1 = eax_7
            
            if (var_868_1 s<= 0)
                break
            
            esi = var_850
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
