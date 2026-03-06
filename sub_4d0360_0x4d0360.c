// 函数名称: sub_4d0360
// 虚拟地址: 0x4d0360
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULTsub_4d0360()
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5455c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_88 = 0xac
    HWND hWnd = GetDlgItem(data_ce1c90, 0xac)
    int32_t var_88_1 = 0
    int32_t var_8c_1 = 0
    int32_t var_90 = 0x184
    LRESULT eax_3 = SendMessageA(hWnd, 0x184, 0, 0)
    int32_t* ecx = data_ce26e4
    
    if (ecx[1] != 0x1e)
        char const* const var_88_59 = "UIDefGet"
        int32_t var_8c_63 = 0x10d
        char const* const var_90_64 = "c:\ax2017\engine\uidef.cpp"
        sub_44e4d0(eax_3, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
            "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_4 = sub_4459f0(ecx)
    LRESULT result = sub_4fbb50()
    
    if (result != 0xffffffff)
        int32_t* esi_1 = result * 0x118 + *eax_4
        int32_t var_88_2 = *esi_1
        void* const var_8c_2 = &data_5828f8
        char* var_14
        sub_44f980(&var_14, &data_5828f8)
        char* eax_5 = var_14
        char* const ebx_1 = &data_5559b1
        int32_t var_5c_1 = 3
        char const* const lParam = "General"
        char* const ecx_1 = &data_5559b1
        void* const var_6c_1 = &data_597f70
        
        if (eax_5 != 0)
            ecx_1 = eax_5
        
        char* const var_64_1 = &data_5559b1
        char* const var_60_1 = ecx_1
        int32_t var_8c_3 = 0
        int32_t var_90_2 = 0x180
        char const* const var_68 = nullptr
        SendMessageA(hWnd, 0x180, 0, &lParam)
        int32_t var_8_1 = 0
        
        if (data_cdf414 != 0)
            char* eax_6 = var_14
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_44f000(&var_14)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_2 = 0xffffffff
        uint32_t var_60_2 = zx.d(esi_1[0xc].b)
        int32_t var_8c_4 = 0
        int32_t var_90_3 = 0x180
        int32_t var_5c_2 = 8
        lParam = "General"
        char const* const var_6c_2 = "Hidden"
        char* const var_64_2 = &data_5559b1
        var_68 = nullptr
        SendMessageA(hWnd, 0x180, 0, &lParam)
        int32_t var_60_3 = esi_1[2]
        int32_t var_8c_5 = 0
        int32_t var_90_4 = 0x180
        int32_t var_5c_3 = 0
        lParam = "General"
        char const* const var_6c_3 = "Name"
        char* const var_64_3 = &data_5559b1
        var_68 = nullptr
        SendMessageA(hWnd, 0x180, 0, &lParam)
        int32_t var_60_4 = sub_4cd520(esi_1[1])
        int32_t var_8c_6 = 0
        int32_t var_90_5 = 0x180
        int32_t var_5c_4 = 1
        lParam = "General"
        char const* const var_6c_4 = "Type"
        char* const var_64_4 = &data_5559b1
        var_68 = "Image"
        SendMessageA(hWnd, 0x180, 0, &lParam)
        var_8c_6.q = _mm_cvtps_pd(esi_1[6])
        HWND var_94_4
        var_94_4.q = _mm_cvtps_pd(esi_1[5])
        int64_t var_9c_1 = _mm_cvtps_pd(esi_1[4])
        int64_t var_a4_1 = _mm_cvtps_pd(esi_1[3])
        char const* const var_a8_1 = "%g %g %g %g"
        sub_44f980(&var_14, "%g %g %g %g")
        char* eax_11 = var_14
        int32_t var_5c_5 = 0
        char* ecx_5 = &data_5559b1
        lParam = "General"
        
        if (eax_11 != 0)
            ecx_5 = eax_11
        
        char const* const var_6c_5 = "Rect"
        char* const var_64_5 = &data_5559b1
        int32_t var_8c_7 = 0
        int32_t var_90_6 = 0x180
        char* var_60_5 = ecx_5
        var_68 = nullptr
        char** ecx_6 = SendMessageA(hWnd, 0x180, 0, &lParam)
        int32_t var_8_3 = 1
        
        if (data_cdf414 != 0)
            char* eax_12 = var_14
            
            if (eax_12 != 0 && *eax_12 != 0)
                ecx_6 = &var_14
                char* eax_13 = sub_44f000(ecx_6)
                int32_t temp1_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp1_1 == 1)
                    ecx_6 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_4 = 0xffffffff
        int32_t eax_15 = esi_1[1] - 1
        char const* const var_28
        char* const eax_17
        
        switch (eax_15)
            case 0, 3
                void* eax_33 = esi_1[0x1a]
                char* const ecx_31
                
                if (eax_33 != 0)
                    char* eax_34 = *(eax_33 + 0x20)
                    ecx_31 = &data_5559b1
                    
                    if (eax_34 != 0)
                        ecx_31 = eax_34
                else
                    ecx_31 = &data_5559b1
                
                int32_t var_88_18 = 0
                char* const var_24_3 = ecx_31
                char const* const* var_8c_18 = &var_28
                int32_t var_90_19 = 6
                char* const var_94_16 = ecx_31
                var_9c_1:4.d = "Texture"
                void* const var_1c_3 = &data_597fa4
                var_28 = "Choose Texture"
                char const* const var_20_3 = "Image (*.jpg, *.png)"
                int32_t ecx_33 = sub_4cf800(&var_28, "Image", hWnd)
                uint32_t eax_36 = zx.d(esi_1[0x1b].b)
                int32_t var_88_19 = 0
                uint32_t var_8c_19 = eax_36
                int32_t var_90_20 = 8
                int32_t var_94_17 = ecx_33
                var_9c_1:4.d = "Nine Slice"
                int32_t ecx_35 = sub_4cf800(eax_36, "Image", hWnd)
                int32_t eax_37 = esi_1[0x1c]
                
                if (eax_37 u> 9)
                    char const* const var_88_60 = "ToImageAlignmentStr"
                    int32_t var_8c_64 = 0x12ea
                    char const* const var_90_65 = "c:\ax2017\engine\windows\editorwindow.cpp"
                    sub_44e4d0(eax_37, &data_5559b1, "Halt", 
                        "c:\ax2017\engine\windows\editorwindow.cpp", 0x12ea, "ToImageAlignmentStr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                switch (eax_37)
                    case 0
                        eax_17 = "Stretch"
                    case 1
                        eax_17 = "LeftTop"
                    case 2
                        eax_17 = "CenterTop"
                    case 3
                        eax_17 = "RightTop"
                    case 4
                        eax_17 = "LeftMiddle"
                    case 5
                        eax_17 = "CenterMiddle"
                    case 6
                        eax_17 = "RightMiddle"
                    case 7
                        eax_17 = "LeftBottom"
                    case 8
                        eax_17 = "CenterBottom"
                    case 9
                        eax_17 = "RightBottom"
                
                char const* const var_88_20 = "Stretch"
                char* const var_8c_20 = eax_17
                int32_t var_90_21 = 1
                int32_t var_94_18 = ecx_35
                var_9c_1:4.d = "Alignment"
                sub_4cf800(eax_17, "Image", hWnd)
            case 1
                char* eax_18
                int32_t ecx_11
                eax_18, ecx_11 = sub_4cf840(esi_1[0x28])
                int32_t var_88_9 = 0
                char* var_24_2 = eax_18
                void* const var_1c_2 = &data_597fa4
                char const* const* var_8c_9 = &var_28
                int32_t var_90_8 = 6
                int32_t var_94_7 = ecx_11
                var_9c_1:4.d = "Sublayout"
                var_28 = "Choose Layout"
                char const* const var_20_2 = "Image (*.ui)"
                sub_4cf800(&var_28, "Table", hWnd)
                int32_t var_88_10 = esi_1[0x22]
                void* const var_8c_10 = &data_5828f8
                sub_44f980(&var_14, &data_5828f8)
                char* eax_20 = var_14
                char* ecx_13 = &data_5559b1
                
                if (eax_20 != 0)
                    ecx_13 = eax_20
                
                int32_t var_88_11 = 0
                char* var_8c_11 = ecx_13
                int32_t var_90_10 = 0
                char* var_94_8 = ecx_13
                var_9c_1:4.d = "Rows"
                sub_4cf800(eax_20, "Table", hWnd)
                int32_t var_8_5 = 2
                
                if (data_cdf414 != 0)
                    char* eax_21 = var_14
                    
                    if (eax_21 != 0 && *eax_21 != 0)
                        char* eax_22 = sub_44f000(&var_14)
                        int32_t temp2_1 = *(eax_22 + 4)
                        *(eax_22 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                
                int32_t var_8_6 = 0xffffffff
                int32_t var_88_12 = esi_1[0x23]
                void* const var_8c_12 = &data_5828f8
                sub_44f980(&var_14, &data_5828f8)
                char* eax_23 = var_14
                char* ecx_17 = &data_5559b1
                
                if (eax_23 != 0)
                    ecx_17 = eax_23
                
                int32_t var_88_13 = 0
                char* var_8c_13 = ecx_17
                int32_t var_90_12 = 0
                char* var_94_9 = ecx_17
                var_9c_1:4.d = "Columns"
                sub_4cf800(eax_23, "Table", hWnd)
                int32_t var_8_7 = 3
                
                if (data_cdf414 != 0)
                    char* eax_24 = var_14
                    
                    if (eax_24 != 0 && *eax_24 != 0)
                        char* eax_25 = sub_44f000(&var_14)
                        int32_t temp6_1 = *(eax_25 + 4)
                        *(eax_25 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
                
                int32_t var_8_8 = 0xffffffff
                var_8c_13.q = _mm_cvtps_pd(esi_1[0x24])
                void* const var_90_13 = &data_584ae4
                sub_44f980(&var_14, &data_584ae4)
                char* eax_26 = var_14
                char* ecx_21 = &data_5559b1
                
                if (eax_26 != 0)
                    ecx_21 = eax_26
                
                int32_t var_88_14 = 0
                char* var_8c_14 = ecx_21
                int32_t var_90_14 = 0
                char* var_94_11 = ecx_21
                var_9c_1:4.d = "Row Spacing"
                sub_4cf800(eax_26, "Table", hWnd)
                int32_t var_8_9 = 4
                
                if (data_cdf414 != 0)
                    char* eax_27 = var_14
                    
                    if (eax_27 != 0 && *eax_27 != 0)
                        char* eax_28 = sub_44f000(&var_14)
                        int32_t temp9_1 = *(eax_28 + 4)
                        *(eax_28 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_45d050(eax_28, *(eax_28 + 0xc) + 0x10)
                
                int32_t var_8_10 = 0xffffffff
                var_8c_14.q = _mm_cvtps_pd(esi_1[0x25])
                void* const var_90_15 = &data_584ae4
                int32_t ecx_25 = sub_44f980(&var_14, &data_584ae4)
                char* eax_29 = var_14
                
                if (eax_29 != 0)
                    ebx_1 = eax_29
                
                int32_t var_88_15 = 0
                char* const var_8c_15 = ebx_1
                int32_t var_90_16 = 0
                int32_t var_94_13 = ecx_25
                var_9c_1:4.d = "Column Spacing"
                char** ecx_27 = sub_4cf800(eax_29, "Table", hWnd)
                int32_t var_8_11 = 5
                
                if (data_cdf414 != 0)
                    char* eax_30 = var_14
                    
                    if (eax_30 != 0 && *eax_30 != 0)
                        ecx_27 = &var_14
                        char* eax_31 = sub_44f000(ecx_27)
                        int32_t temp11_1 = *(eax_31 + 4)
                        *(eax_31 + 4) -= 1
                        
                        if (temp11_1 == 1)
                            ecx_27 = sub_45d050(eax_31, *(eax_31 + 0xc) + 0x10)
                
                int32_t var_88_16 = 0
                int32_t eax_32
                eax_32.b = *(esi_1 + 0xad) == 0
                int32_t var_8c_16 = eax_32
                int32_t var_90_17 = 8
                char** var_94_14 = ecx_27
                var_9c_1:4.d = "Auto Scale"
                int32_t ecx_30 = sub_4cf800(eax_32, "Table", hWnd)
                eax_17 = zx.d(*(esi_1 + 0xae))
                int32_t var_88_17 = 0
                char* const var_8c_17 = eax_17
                int32_t var_90_18 = 8
                int32_t var_94_15 = ecx_30
                var_9c_1:4.d = "Clip Sublayouts"
                sub_4cf800(eax_17, "Table", hWnd)
            case 2
                int32_t var_88_21 = 0
                int32_t var_8c_21 = esi_1[0x2c]
                int32_t var_90_22 = 0
                char** var_94_19 = ecx_6
                var_9c_1:4.d = "Example Text"
                sub_4cf800(eax_15, "Text", hWnd)
                char* eax_38
                int32_t ecx_38
                eax_38, ecx_38 = sub_4cf840(esi_1[0x2d])
                int32_t var_88_22 = 0
                char* var_24_4 = eax_38
                char const* const var_1c_4 = "font.xml"
                char const* const* var_8c_22 = &var_28
                int32_t var_90_23 = 6
                int32_t var_94_20 = ecx_38
                var_9c_1:4.d = "Font"
                var_28 = "Choose Font"
                char const* const var_20_4 = "Font (*.font.xml)"
                sub_4cf800(&var_28, "Text", hWnd)
                uint32_t eax_41 = zx.d(esi_1[0x2e].b)
                uint32_t ecx_44 = (zx.d(*(esi_1 + 0xba)) << 8 | zx.d(*(esi_1 + 0xb9))) << 8 | eax_41
                int32_t var_88_23 = 0
                uint32_t var_8c_23 = ecx_44
                int32_t var_90_24 = 4
                uint32_t var_94_21 = ecx_44
                var_9c_1:4.d = "Text Color"
                sub_4cf800(eax_41, "Text", hWnd)
                uint32_t eax_43 = zx.d(esi_1[0x2f].b)
                uint32_t ecx_50 = (zx.d(*(esi_1 + 0xbe)) << 8 | zx.d(*(esi_1 + 0xbd))) << 8 | eax_43
                int32_t var_88_24 = 0
                uint32_t var_8c_24 = ecx_50
                int32_t var_90_25 = 4
                uint32_t var_94_22 = ecx_50
                var_9c_1:4.d = "Outline Color"
                sub_4cf800(eax_43, "Text", hWnd)
                var_8c_24.q = _mm_cvtps_pd(esi_1[0x30])
                void* const var_90_26 = &data_584ae4
                int32_t ecx_52 = sub_44f980(&var_14, &data_584ae4)
                char* eax_44 = var_14
                
                if (eax_44 != 0)
                    ebx_1 = eax_44
                
                int32_t var_88_25 = 0
                char* const var_8c_25 = ebx_1
                int32_t var_90_27 = 0
                int32_t var_94_24 = ecx_52
                var_9c_1:4.d = "Text Scale"
                char** ecx_54 = sub_4cf800(eax_44, "Text", hWnd)
                int32_t var_8_12 = 6
                
                if (data_cdf414 != 0)
                    char* eax_45 = var_14
                    
                    if (eax_45 != 0 && *eax_45 != 0)
                        ecx_54 = &var_14
                        char* eax_46 = sub_44f000(ecx_54)
                        int32_t temp3_1 = *(eax_46 + 4)
                        *(eax_46 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            ecx_54 = sub_45d050(eax_46, *(eax_46 + 0xc) + 0x10)
                
                char const* const var_88_26 = "Left"
                int32_t var_8_13 = 0xffffffff
                char** var_8c_26 = ecx_54
                int32_t eax_47
                int32_t ecx_57
                eax_47, ecx_57 = sub_4cf860(esi_1[0x31])
                int32_t var_8c_27 = eax_47
                int32_t var_90_28 = 1
                int32_t var_94_25 = ecx_57
                var_9c_1:4.d = "Horz. Alignment"
                void* const var_88_27 = &data_5980fc
                int32_t var_8c_28 = sub_4cf800(eax_47, "Text", hWnd)
                int32_t eax_48
                int32_t ecx_61
                eax_48, ecx_61 = sub_4cf8d0(esi_1[0x31])
                int32_t var_8c_29 = eax_48
                int32_t var_90_29 = 1
                int32_t var_94_26 = ecx_61
                var_9c_1:4.d = "Vert. Alignment"
                int32_t ecx_63 = sub_4cf800(eax_48, "Text", hWnd)
                eax_17 = zx.d(esi_1[0x32].b)
                int32_t var_88_28 = 0
                char* const var_8c_30 = eax_17
                int32_t var_90_30 = 8
                int32_t var_94_27 = ecx_63
                var_9c_1:4.d = "Word Wrap"
                sub_4cf800(eax_17, "Text", hWnd)
            case 4
                char* eax_49
                int32_t ecx_65
                eax_49, ecx_65 = sub_4cf840(esi_1[0x1a])
                int32_t var_88_29 = 0
                char* var_24_5 = eax_49
                void* const var_1c_5 = &data_597fa4
                int32_t* var_8c_31 = &var_28
                int32_t var_90_31 = 6
                int32_t var_94_28 = ecx_65
                var_9c_1:4.d = "Texture"
                var_28 = "Choose Texture"
                char const* const var_20_5 = "Image (*.jpg, *.png)"
                sub_4cf800(&var_28, "Image", hWnd)
                char* eax_51
                int32_t ecx_68
                eax_51, ecx_68 = sub_4cf840(esi_1[0x38])
                int32_t var_88_30 = 0
                char* var_34_1 = eax_51
                void* const var_2c_1 = &data_597fa4
                char const* const var_38
                int32_t* var_8c_32 = &var_38
                int32_t var_90_32 = 6
                int32_t var_94_29 = ecx_68
                var_9c_1:4.d = "Image Over"
                var_38 = "Choose Texture"
                char const* const var_30_1 = "Image (*.jpg, *.png)"
                sub_4cf800(&var_38, "Image", hWnd)
                char* eax_53
                int32_t ecx_71
                eax_53, ecx_71 = sub_4cf840(esi_1[0x39])
                int32_t var_88_31 = 0
                char* var_44_1 = eax_53
                void* const var_3c_1 = &data_597fa4
                char const* const var_48
                int32_t* var_8c_33 = &var_48
                int32_t var_90_33 = 6
                int32_t var_94_30 = ecx_71
                var_9c_1:4.d = "Image Down"
                var_48 = "Choose Texture"
                char const* const var_40_1 = "Image (*.jpg, *.png)"
                sub_4cf800(&var_48, "Image", hWnd)
                char* eax_55
                int32_t ecx_74
                eax_55, ecx_74 = sub_4cf840(esi_1[0x3a])
                int32_t var_88_32 = 0
                char* var_54_1 = eax_55
                void* const var_4c_1 = &data_597fa4
                char const* const var_58
                int32_t* var_8c_34 = &var_58
                int32_t var_90_34 = 6
                int32_t var_94_31 = ecx_74
                var_9c_1:4.d = "Image Disabled"
                var_58 = "Choose Texture"
                char const* const var_50_1 = "Image (*.jpg, *.png)"
                int32_t ecx_76 = sub_4cf800(&var_58, "Image", hWnd)
                uint32_t eax_57 = zx.d(esi_1[0x1b].b)
                int32_t var_88_33 = 0
                uint32_t var_8c_35 = eax_57
                int32_t var_90_35 = 8
                int32_t var_94_32 = ecx_76
                var_9c_1:4.d = "Nine Slice"
                int32_t eax_58
                int32_t ecx_78
                eax_58, ecx_78 = sub_4cf800(eax_57, "Image", hWnd)
                int32_t var_88_34 = 0
                int32_t var_8c_36 = esi_1[0x37]
                int32_t var_90_36 = 0
                int32_t var_94_33 = ecx_78
                var_9c_1:4.d = "Text"
                sub_4cf800(eax_58, "Text", hWnd)
                char* eax_59
                int32_t ecx_81
                eax_59, ecx_81 = sub_4cf840(esi_1[0x2d])
                int32_t var_88_35 = 0
                char* var_64_6 = eax_59
                char const* const var_5c_6 = "font.xml"
                char const* const* var_8c_37 = &var_68
                int32_t var_90_37 = 6
                int32_t var_94_34 = ecx_81
                var_9c_1:4.d = "Font"
                var_68 = "Choose Font"
                char const* const var_60_6 = "Font (*.font.xml)"
                sub_4cf800(&var_68, "Text", hWnd)
                uint32_t eax_62 = zx.d(esi_1[0x2e].b)
                uint32_t ecx_87 = (zx.d(*(esi_1 + 0xba)) << 8 | zx.d(*(esi_1 + 0xb9))) << 8 | eax_62
                int32_t var_88_36 = 0
                uint32_t var_8c_38 = ecx_87
                int32_t var_90_38 = 4
                uint32_t var_94_35 = ecx_87
                var_9c_1:4.d = "Text Color"
                sub_4cf800(eax_62, "Text", hWnd)
                uint32_t eax_64 = zx.d(esi_1[0x2f].b)
                uint32_t ecx_93 = (zx.d(*(esi_1 + 0xbe)) << 8 | zx.d(*(esi_1 + 0xbd))) << 8 | eax_64
                int32_t var_88_37 = 0
                uint32_t var_8c_39 = ecx_93
                int32_t var_90_39 = 4
                uint32_t var_94_36 = ecx_93
                var_9c_1:4.d = "Outline Color"
                sub_4cf800(eax_64, "Text", hWnd)
                uint32_t eax_66 = zx.d(esi_1[0x3b].b)
                uint32_t ecx_99 = (zx.d(*(esi_1 + 0xee)) << 8 | zx.d(*(esi_1 + 0xed))) << 8 | eax_66
                int32_t var_88_38 = 0
                uint32_t var_8c_40 = ecx_99
                int32_t var_90_40 = 4
                uint32_t var_94_37 = ecx_99
                var_9c_1:4.d = "Disabled Color"
                sub_4cf800(eax_66, "Text", hWnd)
                uint32_t eax_68 = zx.d(esi_1[0x3c].b)
                uint32_t ecx_105 = (zx.d(*(esi_1 + 0xf2)) << 8 | zx.d(*(esi_1 + 0xf1))) << 8 | eax_68
                int32_t var_88_39 = 0
                uint32_t var_8c_41 = ecx_105
                int32_t var_90_41 = 4
                uint32_t var_94_38 = ecx_105
                var_9c_1:4.d = "Disabled Outline"
                sub_4cf800(eax_68, "Text", hWnd)
                var_8c_41.q = _mm_cvtps_pd(esi_1[0x30])
                void* const var_90_42 = &data_584ae4
                sub_44f980(&var_14, &data_584ae4)
                char* eax_69 = var_14
                char* ecx_107 = &data_5559b1
                
                if (eax_69 != 0)
                    ecx_107 = eax_69
                
                int32_t var_88_40 = 0
                char* var_8c_42 = ecx_107
                int32_t var_90_43 = 0
                char* var_94_40 = ecx_107
                var_9c_1:4.d = "Text Scale"
                sub_4cf800(eax_69, "Text", hWnd)
                int32_t var_8_14 = 7
                
                if (data_cdf414 != 0)
                    char* eax_70 = var_14
                    
                    if (eax_70 != 0 && *eax_70 != 0)
                        char* eax_71 = sub_44f000(&var_14)
                        int32_t temp4_1 = *(eax_71 + 4)
                        *(eax_71 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_45d050(eax_71, *(eax_71 + 0xc) + 0x10)
                
                int32_t var_8_15 = 0xffffffff
                var_8c_42.q = _mm_cvtps_pd(esi_1[0x3e])
                var_94_40.q = _mm_cvtps_pd(esi_1[0x3d])
                var_9c_1:4.d = "%g %g"
                var_9c_1.d = &var_14
                int32_t ecx_111 = sub_44f980(var_9c_1, var_94_40, 0, var_8c_42, 0, eax_2)
                char* eax_72 = var_14
                
                if (eax_72 != 0)
                    ebx_1 = eax_72
                
                int32_t var_88_41 = 0
                char* const var_8c_43 = ebx_1
                int32_t var_90_44 = 0
                int32_t var_94_41 = ecx_111
                var_9c_1:4.d = "Text Offset"
                char** ecx_113 = sub_4cf800(eax_72, "Text", hWnd)
                int32_t var_8_16 = 8
                
                if (data_cdf414 != 0)
                    char* eax_73 = var_14
                    
                    if (eax_73 != 0 && *eax_73 != 0)
                        ecx_113 = &var_14
                        char* eax_74 = sub_44f000(ecx_113)
                        int32_t temp7_1 = *(eax_74 + 4)
                        *(eax_74 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            ecx_113 = sub_45d050(eax_74, *(eax_74 + 0xc) + 0x10)
                
                char const* const var_88_42 = "Left"
                int32_t var_8_17 = 0xffffffff
                char** var_8c_44 = ecx_113
                int32_t eax_75
                int32_t ecx_116
                eax_75, ecx_116 = sub_4cf860(esi_1[0x31])
                int32_t var_8c_45 = eax_75
                int32_t var_90_45 = 1
                int32_t var_94_42 = ecx_116
                var_9c_1:4.d = "Horz. Alignment"
                void* const var_88_43 = &data_5980fc
                int32_t var_8c_46 = sub_4cf800(eax_75, "Text", hWnd)
                int32_t eax_76
                int32_t ecx_120
                eax_76, ecx_120 = sub_4cf8d0(esi_1[0x31])
                int32_t var_8c_47 = eax_76
                int32_t var_90_46 = 1
                int32_t var_94_43 = ecx_120
                var_9c_1:4.d = "Vert. Alignment"
                int32_t ecx_122 = sub_4cf800(eax_76, "Text", hWnd)
                uint32_t eax_77 = zx.d(esi_1[0x32].b)
                int32_t var_88_44 = 0
                uint32_t var_8c_48 = eax_77
                int32_t var_90_47 = 8
                int32_t var_94_44 = ecx_122
                var_9c_1:4.d = "Word Wrap"
                sub_4cf800(eax_77, "Text", hWnd)
                void* ecx_124 = esi_1[0x3f]
                void* const var_1c_6 = &data_5981b8
                var_28 = "Choose Sound"
                char const* const var_20_6 = "Sound (*.xmlsound, *.ogg, *.wav)"
                char* eax_78
                int32_t ecx_125
                eax_78, ecx_125 = sub_4cf840(ecx_124)
                int32_t var_88_45 = 0
                char* var_24_6 = eax_78
                char const* const* var_8c_49 = &var_28
                int32_t var_90_48 = 6
                int32_t var_94_45 = ecx_125
                var_9c_1:4.d = "Click"
                sub_4cf800(&var_28, "Sound", hWnd)
                char* eax_80
                int32_t ecx_128
                eax_80, ecx_128 = sub_4cf840(esi_1[0x40])
                int32_t var_88_46 = 0
                char* var_24_7 = eax_80
                char const* const* var_8c_50 = &var_28
                int32_t var_90_49 = 6
                int32_t var_94_46 = ecx_128
                var_9c_1:4.d = "Mouseover"
                sub_4cf800(&var_28, "Sound", hWnd)
                char* eax_82
                int32_t ecx_131
                eax_82, ecx_131 = sub_4cf840(esi_1[0x41])
                int32_t var_88_47 = 0
                char* var_24_8 = eax_82
                char const* const* var_8c_51 = &var_28
                int32_t var_90_50 = 6
                int32_t var_94_47 = ecx_131
                var_9c_1:4.d = "Disabled"
                sub_4cf800(&var_28, "Sound", hWnd)
            case 5
                int32_t var_88_48 = esi_1[0x12]
                void* const var_8c_52 = &data_5828f8
                sub_44f980(&var_14, &data_5828f8)
                char* eax_83 = var_14
                char* ecx_132 = &data_5559b1
                
                if (eax_83 != 0)
                    ecx_132 = eax_83
                
                int32_t var_88_49 = 0
                char* var_8c_53 = ecx_132
                int32_t var_90_52 = 0
                char* var_94_48 = ecx_132
                var_9c_1:4.d = "Count"
                sub_4cf800(eax_83, "Group", hWnd)
                int32_t var_8_18 = 9
                
                if (data_cdf414 != 0)
                    char* eax_84 = var_14
                    
                    if (eax_84 != 0 && *eax_84 != 0)
                        char* eax_85 = sub_44f000(&var_14)
                        int32_t temp5_1 = *(eax_85 + 4)
                        *(eax_85 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_45d050(eax_85, *(eax_85 + 0xc) + 0x10)
                
                int32_t var_8_19 = 0xffffffff
                int32_t var_88_50 = esi_1[0x13]
                void* const var_8c_54 = &data_5828f8
                sub_44f980(&var_14, &data_5828f8)
                char* eax_86 = var_14
                char* ecx_136 = &data_5559b1
                
                if (eax_86 != 0)
                    ecx_136 = eax_86
                
                int32_t var_88_51 = 0
                char* var_8c_55 = ecx_136
                int32_t var_90_54 = 0
                char* var_94_49 = ecx_136
                var_9c_1:4.d = "Anim Duration (ms)"
                sub_4cf800(eax_86, "Group", hWnd)
                int32_t var_8_20 = 0xa
                
                if (data_cdf414 != 0)
                    char* eax_87 = var_14
                    
                    if (eax_87 != 0 && *eax_87 != 0)
                        char* eax_88 = sub_44f000(&var_14)
                        int32_t temp8_1 = *(eax_88 + 4)
                        *(eax_88 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_45d050(eax_88, *(eax_88 + 0xc) + 0x10)
                
                int32_t var_8_21 = 0xffffffff
                int32_t var_88_52 = esi_1[0x14]
                void* const var_8c_56 = &data_5828f8
                sub_44f980(&var_14, &data_5828f8)
                char* eax_89 = var_14
                char* ecx_140 = &data_5559b1
                
                if (eax_89 != 0)
                    ecx_140 = eax_89
                
                int32_t var_88_53 = 0
                char* var_8c_57 = ecx_140
                int32_t var_90_56 = 0
                char* var_94_50 = ecx_140
                var_9c_1:4.d = "Anim Delay (ms)"
                sub_4cf800(eax_89, "Group", hWnd)
                int32_t var_8_22 = 0xb
                
                if (data_cdf414 != 0)
                    char* eax_90 = var_14
                    
                    if (eax_90 != 0 && *eax_90 != 0)
                        char* eax_91 = sub_44f000(&var_14)
                        int32_t temp10_1 = *(eax_91 + 4)
                        *(eax_91 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            sub_45d050(eax_91, *(eax_91 + 0xc) + 0x10)
                
                int32_t var_8_23 = 0xffffffff
                var_8c_57.q = _mm_cvtps_pd(esi_1[0x15])
                void* const var_90_57 = &data_584ae4
                sub_44f980(&var_14, &data_584ae4)
                char* eax_92 = var_14
                char* ecx_144 = &data_5559b1
                
                if (eax_92 != 0)
                    ecx_144 = eax_92
                
                int32_t var_88_54 = 0
                char* var_8c_58 = ecx_144
                int32_t var_90_58 = 0
                char* var_94_52 = ecx_144
                var_9c_1:4.d = "Anim Start Alpha"
                sub_4cf800(eax_92, "Group", hWnd)
                int32_t var_8_24 = 0xc
                
                if (data_cdf414 != 0)
                    char* eax_93 = var_14
                    
                    if (eax_93 != 0 && *eax_93 != 0)
                        char* eax_94 = sub_44f000(&var_14)
                        int32_t temp12_1 = *(eax_94 + 4)
                        *(eax_94 + 4) -= 1
                        
                        if (temp12_1 == 1)
                            sub_45d050(eax_94, *(eax_94 + 0xc) + 0x10)
                
                int32_t var_8_25 = 0xffffffff
                var_8c_58.q = _mm_cvtps_pd(esi_1[0x16])
                void* const var_90_59 = &data_584ae4
                sub_44f980(&var_14, &data_584ae4)
                char* eax_95 = var_14
                char* ecx_148 = &data_5559b1
                
                if (eax_95 != 0)
                    ecx_148 = eax_95
                
                int32_t var_88_55 = 0
                char* var_8c_59 = ecx_148
                int32_t var_90_60 = 0
                char* var_94_54 = ecx_148
                var_9c_1:4.d = "Anim Scale"
                sub_4cf800(eax_95, "Group", hWnd)
                int32_t var_8_26 = 0xd
                
                if (data_cdf414 != 0)
                    char* eax_96 = var_14
                    
                    if (eax_96 != 0 && *eax_96 != 0)
                        char* eax_97 = sub_44f000(&var_14)
                        int32_t temp13_1 = *(eax_97 + 4)
                        *(eax_97 + 4) -= 1
                        
                        if (temp13_1 == 1)
                            sub_45d050(eax_97, *(eax_97 + 0xc) + 0x10)
                
                int32_t var_8_27 = 0xffffffff
                var_8c_59.q = _mm_cvtps_pd(esi_1[0x18])
                var_94_54.q = _mm_cvtps_pd(esi_1[0x17])
                var_9c_1:4.d = "%g %g"
                char* var_18
                var_9c_1.d = &var_18
                int32_t ecx_152 = sub_44f980(var_9c_1, var_94_54, 0, var_8c_59, 0, eax_2)
                char* eax_98 = var_18
                
                if (eax_98 != 0)
                    ebx_1 = eax_98
                
                int32_t var_88_56 = 0
                char* const var_8c_60 = ebx_1
                int32_t var_90_61 = 0
                int32_t var_94_55 = ecx_152
                var_9c_1:4.d = "Anim Offset"
                sub_4cf800(eax_98, "Group", hWnd)
                int32_t var_8_28 = 0xe
                
                if (data_cdf414 != 0)
                    char* eax_99 = var_18
                    
                    if (eax_99 != 0 && *eax_99 != 0)
                        char* eax_100 = sub_44f000(&var_18)
                        int32_t temp14_1 = *(eax_100 + 4)
                        *(eax_100 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            sub_45d050(eax_100, *(eax_100 + 0xc) + 0x10)
                
                void* const eax_101 = &data_571e58
                int32_t ecx_156 = esi_1[0x19]
                
                while (true)
                    if (*eax_101 == ecx_156)
                        eax_17 = *(eax_101 + 4)
                        break
                    
                    eax_101 += 8
                    
                    if (*(eax_101 + 4) == 0)
                        eax_17 = &data_5559b1
                        break
                
                char const* const var_88_57 = "Ease In/Out"
                char* const var_8c_61 = eax_17
                int32_t var_90_62 = 1
                int32_t var_94_56 = ecx_156
                var_9c_1:4.d = "Anim Curve"
                sub_4cf800(eax_17, "Group", hWnd)
            case 8
                char* eax_16
                int32_t ecx_9
                eax_16, ecx_9 = sub_4cf840(esi_1[0x11])
                int32_t var_88_8 = 0
                char* var_24_1 = eax_16
                char const* const var_1c_1 = "particle"
                char const* const* var_8c_8 = &var_28
                int32_t var_90_7 = 6
                int32_t var_94_6 = ecx_9
                var_28 = "Choose Particle"
                char const* const var_20_1 = "Particle (*.particle)"
                var_9c_1:4.d = "Particle"
                sub_4cf800(&var_28, "Particle", hWnd)
        
        int32_t var_88_58 = 0
        int32_t var_8c_62 = 0
        int32_t var_90_63 = 0x401
        result = SendMessageA(hWnd, 0x401, 0, 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
