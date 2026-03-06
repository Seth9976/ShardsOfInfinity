// 函数名称: sub_472650
// 虚拟地址: 0x472650
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_472650()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_542cb6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_4dc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = *fsbase->ThreadLocalStoragePointer
    
    if (data_e49950 s> *(esi + 4))
        __Init_thread_header(&data_e49950)
        
        if (data_e49950 == 0xffffffff)
            int32_t var_14_1 = 0
            data_e49954 = sub_48d5b0("sys/editor/ui2/editor_styles.ui2", 0x22)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_e49950)
    
    bool cond:0 = data_5cd9f8 == 0
    char* result_1 = data_5c99e4
    int32_t eax_6 = data_e49954
    data_5c99e4 = eax_6
    
    if (cond:0)
        sub_44e4d0(eax_6, &data_5559b1, "gUI2Editor.asset", "c:\ax2017\engine\ui2.cpp", 0x280f, 
            "UI2EditorUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    float xmm0_1 = data_5b0f3c * 1000f
    float xmm0_2
    
    if (0 f<= xmm0_1)
        xmm0_2 = xmm0_1 + 0.5f
    else
        xmm0_2 = xmm0_1 - 0.5f
    
    data_5cda00 += int.d(xmm0_2)
    bool cond:1 = data_64f848 != 0
    data_5cda08 = data_5c7c20
    data_5cda0c = data_5c7c24
    data_5cda10 = data_5c7c28
    data_5cda14 = data_5c7c2c
    float var_4b0
    BOOL eax_19
    
    if (cond:1)
        eax_19 = sub_46bab0()
    else
        if (sub_44edc0(&var_4b0) != 0)
            struct InputHitResult::UI2HitResult::VTable* var_4d0
            struct InputHitResult::UI2HitResult::VTable** eax_14 =
                sub_463570(&var_4b0, data_5cda18, &var_4d0, &var_4b0)
            data_5cda08 = eax_14[1]
            data_5cda0c = eax_14[2]
            data_5cda10 = eax_14[3]
            data_5cda14 = eax_14[4]
        
        void* eax_17
        
        if ((*(data_cdf450 + 0xc) & 1) != 0)
            eax_17.b = *(data_65ae04 + 0x18)
        
        char edx_1
        
        if ((*(data_cdf450 + 0xc) & 1) == 0 || eax_17.b == 0)
            edx_1 = 0
        else
            edx_1 = 1
        
        eax_19 =
            sub_48cd30(&var_4b0, edx_1, 0x65388c, 0, data_5cda00, &data_5cda04, &var_4b0, &data_5718d4)
    
    uint32_t eax_20 = sub_479b90(eax_19, data_5cda08, 0x65388c, 0xffffffff)
    int32_t xmm0_3 = data_5b0f3c
    int32_t* ecx_6 = data_5cd9f8
    int32_t* var_4a0 = data_5cda20
    char* const var_49c = data_5cda24
    float xmm0_6 = data_5cda1c
    data_5c99e4 = result_1
    bool cond:2 = ecx_6[1] != 0x22
    float var_4a8 = xmm0_6
    
    if (cond:2)
        sub_44e4d0(eax_20, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI2", 
            "c:\ax2017\engine\ui2.cpp", 0x623, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_21 = sub_4459f0(ecx_6)
    float xmm5 = var_4a8
    float xmm1_1 = xmm5 * (var_4a0 ^ (data_59e5c0.o).d)
    float xmm3_2 = xmm5 * 0f + 0f
    float xmm2_3 = xmm5 * (var_49c ^ (data_59e5c0.o).d)
    float var_4b8 = xmm3_2 + xmm1_1
    float var_4b4 = xmm3_2 + xmm2_3
    var_4b0 = (*(eax_21 + 8) - 0f) * xmm5 + 0f + xmm1_1
    int32_t* var_4f4 = data_5cd9f8
    char* var_4ac = (*(eax_21 + 0xc) - 0f) * xmm5 + 0f + xmm2_3
    int128_t var_4cc = var_4b8.o
    char eax_23 =
        sub_462b10(&var_4cc, &data_5cd9fc, "editor asset", var_4f4, &var_4cc, &var_4cc, 0, nullptr, 1)
    data_64f84b = eax_23
    
    if (eax_23 != 0)
        sub_44e260("reloaded ui asset")
    
    int32_t var_4e0_2 = 0xffffffff
    sub_469930(data_5cd9fc)
    sub_46a100()
    sub_466e80(data_5cd9fc, xmm0_3)
    data_5c99e4 = data_e49954
    
    if (data_e49958 s> *(esi + 4))
        __Init_thread_header(&data_e49958)
        
        if (data_e49958 == 0xffffffff)
            int32_t var_14_3 = 1
            data_e4995c = sub_48d5b0("sys/editor/ui2/editor_main.ui2", 0x22)
            int32_t var_14_4 = 0xffffffff
            __Init_thread_footer(&data_e49958)
    
    void* eax_27 = data_65ae00
    uint128_t xmm1_3 = zx.o(*(eax_27 + 0x18))
    float xmm0_21 = _mm_cvtepi32_ps(zx.o(*(eax_27 + 0x14)))
    var_4b8 = 0f
    int32_t var_4b4_1 = 0
    var_4cc.d = 0
    int32_t* var_4f4_1 = data_e4995c
    char* xmm1_4 = _mm_cvtepi32_ps(xmm1_3)
    var_4cc:4.d = 0
    var_4b0 = xmm0_21
    var_4ac = xmm1_4
    var_4cc:8.d = xmm0_21
    var_4cc:0xc.d = xmm1_4
    sub_462b10(&var_4cc, &data_5cda18, "editor ui", var_4f4_1, &var_4cc, &var_4b8, 0x61a8, nullptr, 1)
    sub_472550(data_5cda18, sub_470ee0)
    void* i_7 = sub_4725d0(data_5cda18, sub_46ff80)
    char* const var_498
    char* var_494
    char* i_5
    
    if (data_5cea2c s> 0 && data_5cd9f0 s> 0)
        char* eax_29 = sub_469160(data_5cda2c)
        bool cond:3_1 = data_5cea36 == 0
        char* edi = eax_29
        var_494 = edi
        
        if (not(cond:3_1))
            int32_t ecx_12 = *(edi + 0x1004)
            
            if (ecx_12 == 0)
                sub_44e4d0(eax_29, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 
                    0x6c, "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            uint32_t edx_5 = zx.d(ecx_12.w)
            int32_t esi_1
            
            if (edx_5 u< data_5c99a4)
                esi_1 = data_5c99a0
                eax_29 = edx_5 * 0x1008
            
            if (edx_5 u>= data_5c99a4 || *(eax_29 + esi_1 + 0x1004) != ecx_12)
                sub_44e4d0(eax_29, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                    "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* ecx_14 = edx_5 * 0x1008 + esi_1
            *(*(ecx_14 + 0x63c) * 0x208 + ecx_14 + 0x210) = sub_4684c0
            eax_29 = *(ecx_14 + 0x640) * 0x208
            *(eax_29 + ecx_14 + 0x210) = sub_4684c0
        
        void var_428
        char* eax_31 = sub_46d960(eax_29, &var_428, edi, nullptr)
        int32_t ecx_16 = data_5cda18
        var_49c = eax_31
        i_7 = sub_469bf0(eax_31, &data_5c8eb4, ecx_16, eax_31, 0xffffffff)
        int32_t esi_2 = 0
        
        if (var_49c s> 0)
            void var_420
            i_7 = &var_420
            void* i_12 = &var_420
            
            while (true)
                int32_t var_4e4_3 = *(i_7 - 4)
                data_5c99e4 = result_1
                sub_46db00(i_7, edi, &i_5, var_4e4_3, esi_2)
                int32_t var_14_5 = 2
                int32_t eax_32 = data_e49954
                data_5c99e4 = eax_32
                char* edx_9 = *i_12
                
                if (edx_9 == 0)
                    sub_44e4d0(eax_32, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
                        "XString::XString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                sub_44f240(&var_498, edx_9)
                var_14_5.b = 3
                sub_469cf0(&var_498, &data_5c906c, data_5cda18, &var_498, esi_2)
                var_14_5.b = 4
                
                if (data_cdf414 != 0)
                    char* eax_34 = var_498
                    
                    if (eax_34 != 0 && *eax_34 != 0)
                        char* eax_35 = sub_44f000(&var_498)
                        int32_t temp2_1 = *(eax_35 + 4)
                        *(eax_35 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                            var_498 = &data_5559b1
                
                var_14_5.b = 2
                sub_469cf0(&i_5, &data_5c992c, data_5cda18, &i_5, esi_2)
                *(edi + 0x1004)
                int32_t i = sub_46e9d0()
                *(var_494 + 0x1004)
                
                if (sub_4709a0() == 3)
                    int32_t var_4e0_6 = esi_2
                    sub_469930(data_5cda18)
                    var_4a0 = sub_46d840(var_494, *(i_12 - 4))
                    int32_t eax_42 = sub_4b8c10(&data_5b1d6c, *(i_12 - 4))
                    int32_t ecx_29 = data_dff654
                    int32_t* edx_17 = var_4a0
                    int32_t var_4e0_7 = *(i_12 - 4)
                    
                    if (eax_42 != ecx_29)
                        int32_t* eax_45 = sub_4b8ac0(i_12, edx_17, &data_5b1d6c, data_dff714, var_4e0_7)
                        void var_488
                        int32_t* eax_46 = sub_45e620(eax_45, eax_45, &var_488, esi_2, nullptr, 0)
                        var_14_5.b = 5
                        int32_t var_484
                        
                        if (var_484 != 0)
                            sub_44e4d0(eax_46, &data_5559b1, "expr.evalType == UISTATE_VALUE", 
                                "c:\ax2017\engine\ui2.cpp", 0x6b5, "ResultAsColor")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        float eax_47
                        int32_t edx_20
                        eax_47, edx_20 = sub_45d410(&var_488, 0)
                        int32_t ecx_33 = data_5cda18
                        var_4a8 = eax_47
                        sub_4699b0(&var_4a8, edx_20, ecx_33, &var_4a8, esi_2)
                        var_14_5.b = 6
                        void var_478
                        `eh vector vbase constructor iterator'(&var_478, 4, 4, sub_44f380)
                        var_14_5.b = 2
                    else
                        int32_t* eax_44
                        int32_t edx_18
                        eax_44, edx_18 = sub_4b8ac0(i_12, edx_17, &data_5b1d6c, ecx_29, var_4e0_7)
                        sub_4699b0(eax_44, edx_18, data_5cda18, eax_44, esi_2)
                
                if (i - 0x64 u> 0xc)
                    goto label_472d8d
                
                switch (i)
                    case 0x65, 0x67, 0x68, 0x69, 0x6a, 0x6c
                        goto label_472d8d
                    case 0x6d, 0x6e, 0x6f, 0x70
                        i = 0x6c
                    label_472d8d:
                        void* eax_51 = sub_46af30(var_494)
                        int32_t* eax_52
                        
                        if (eax_51 == 0)
                            int32_t* eax_53 = sub_45d320(var_494)
                            int32_t ecx_37 = 0
                            int32_t edx_22 = *eax_53
                            
                            if (edx_22 s<= 0)
                            label_472dd2:
                                eax_52 = nullptr
                            else
                                eax_52 = eax_53[1]
                                
                                while (*eax_52 != i)
                                    ecx_37 += 1
                                    eax_52 = &eax_52[2]
                                    
                                    if (ecx_37 s>= edx_22)
                                        goto label_472dd2_1
                        else
                            int32_t edx_21 = *(eax_51 + 4)
                            int32_t ecx_35 = 0
                            
                            if (edx_21 s<= 0)
                            label_472dd2_1:
                                eax_52 = nullptr
                            else
                                eax_52 = *(eax_51 + 8)
                                
                                while (*eax_52 != i)
                                    ecx_35 += 1
                                    eax_52 = &eax_52[2]
                                    
                                    if (ecx_35 s>= edx_21)
                                        goto label_472dd2_1
                        
                        eax_52.b = eax_52 == 0
                        
                        if (eax_52.b != 0)
                            int32_t var_4e0_9 = esi_2
                            sub_469930(data_5cda18)
                
                int32_t var_14_6 = 7
                
                if (data_cdf414 != 0)
                    char* i_8 = i_5
                    
                    if (i_8 != 0 && *i_8 != 0)
                        char* eax_54 = sub_44f000(&i_5)
                        int32_t temp4_1 = *(eax_54 + 4)
                        *(eax_54 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_45d050(eax_54, *(eax_54 + 0xc) + 0x10)
                            i_5 = &data_5559b1
                
                esi_2 += 1
                i_7 = i_12 + 0x10
                int32_t var_14_7 = 0xffffffff
                i_12 = i_7
                
                if (esi_2 s>= var_49c)
                    break
                
                edi = var_494
    
    int32_t edi_1 = data_5cea38
    
    if (edi_1 != 0xffffffff && data_5cd9f0 s> 0)
        int32_t var_4e0_10 = edi_1
        sub_469930(data_5cda18)
        char* i_9 = sub_469160(data_5cda2c)
        i_5 = i_9
        *(i_9 + 0x1004)
        int32_t i_1 = sub_46e9d0()
        *(i_5 + 0x1004)
        int32_t eax_56 = sub_4709a0()
        
        if (eax_56 u> 5)
            sub_44e4d0(eax_56, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x2881, 
                "UI2EditorUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        switch (eax_56)
            case 4
                int32_t var_4e0_11 = edi_1
                sub_469930(data_5cda18)
        
        if (i_1 - 0x64 u> 0xc)
        label_472f1a:
            void* eax_58 = sub_46af30(i_5)
            
            if (eax_58 != 0)
                int32_t edx_33 = *(eax_58 + 4)
                int32_t ecx_48 = 0
                
                if (edx_33 s<= 0)
                label_472f7c:
                    i_7 = nullptr
                label_472f80:
                    i_7.b = i_7 != 0
                    
                    if (i_7.b != 0)
                        int32_t var_4e0_12 = edi_1
                        i_7 = sub_469930(data_5cda18)
                    
                    goto label_472f9b
                
                i_7 = *(eax_58 + 8)
                
                while (*i_7 != i_1)
                    ecx_48 += 1
                    i_7 += 8
                    
                    if (ecx_48 s>= edx_33)
                        goto label_472f7c
                
                goto label_472f80
            
            i_7 = i_5
            
            if (i_1 != 0x71)
            label_472f5a:
                int32_t* eax_59 = sub_45d320(i_7)
                int32_t ecx_51 = 0
                int32_t edx_34 = *eax_59
                
                if (edx_34 s<= 0)
                    goto label_472f7c
                
                i_7 = eax_59[1]
                
                while (*i_7 != i_1)
                    ecx_51 += 1
                    i_7 += 8
                    
                    if (ecx_51 s>= edx_34)
                        goto label_472f7c
                
                goto label_472f80
            
            char* ecx_49 = *(i_7 + 0x6a0)
            
            if (ecx_49 != 0 && *ecx_49 != 0)
                goto label_472f5a
        else
            i_7 = zx.d(*(i_1 + 0x473c6c))
            
            switch (i_7)
                case nullptr
                label_472f9b:
                    
                    if (i_1 == 0x6b || i_1 == 0x6c)
                        int32_t var_4e0_13 = edi_1
                        sub_469930(data_5cda18)
                        int32_t var_4e0_14 = edi_1
                        i_7 = sub_469930(data_5cda18)
                case 1
                    goto label_472f1a
    
    int32_t esi_4 = data_5cea3c
    
    if (esi_4 != 0xffffffff)
        int32_t var_4e0_15 = esi_4
        sub_469930(data_5cda18)
        void* eax_60 = sub_469160(data_5cda2c)
        *(eax_60 + 0x1004)
        i_7 = sub_4709a0()
        char* i_2
        int32_t edi_3
        
        if (i_7 == 2)
            data_5cea3c
            *(eax_60 + 0x1004)
            edi_3 = 0
            int32_t* esi_5 = sub_46ee40() + 4
            
            for (i_2 = *esi_5; i_2 != 0; i_2 = *esi_5)
                sub_44f240(&i_5, i_2)
                int32_t var_14_8 = 8
                sub_469cf0(&i_5, &data_653ca8, data_5cda18, &i_5, edi_3)
                int32_t var_14_9 = 9
                
                if (data_cdf414 != 0)
                    char* i_10 = i_5
                    
                    if (i_10 != 0 && *i_10 != 0)
                        char* eax_63 = sub_44f000(&i_5)
                        int32_t temp0_1 = *(eax_63 + 4)
                        *(eax_63 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_45d050(eax_63, *(eax_63 + 0xc) + 0x10)
                            i_5 = &data_5559b1
                
                esi_5 = &esi_5[2]
                int32_t var_14_10 = 0xffffffff
                edi_3 += 1
            
            i_7 = sub_469bf0(i_2, &data_653cbc, data_5cda18, edi_3, data_5cea38)
        else if (i_7 == 5)
            data_5cea3c
            data_5c99e4 = result_1
            i_2 = sub_46eb00(*(eax_60 + 0x1004))
            char* i_6 = i_2
            data_5c99e4 = data_e49954
            edi_3 = 0
            
            for (char* i_3 = *i_6; i_3 != 0; i_3 = *i_6)
                sub_44f240(&i_5, i_3)
                int32_t var_14_11 = 0xa
                i_2 = sub_469cf0(&i_5, &data_653ca8, data_5cda18, &i_5, edi_3)
                int32_t var_14_12 = 0xb
                
                if (data_cdf414 != 0)
                    i_2 = i_5
                    
                    if (i_2 != 0 && *i_2 != 0)
                        i_2 = sub_44f000(&i_5)
                        int32_t temp1_1 = *(i_2 + 4)
                        *(i_2 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            i_2 = sub_45d050(i_2, *(i_2 + 0xc) + 0x10)
                            i_5 = &data_5559b1
                
                i_6 = &i_6[4]
                int32_t var_14_13 = 0xffffffff
                edi_3 += 1
            
            i_7 = sub_469bf0(i_2, &data_653cbc, data_5cda18, edi_3, data_5cea38)
    
    sub_469bf0(i_7, &data_653cd0, data_5cda18, data_5cd9f4, 0xffffffff)
    int32_t eax_66 = data_5cd9f0
    float edx_48 = 0f
    int32_t var_490_1 = 0
    var_4a8 = 0f
    
    if (eax_66 s> 0)
        void* ecx_71 = &data_5c99f4
        var_494 = &data_5c99f4
        
        do
            if (*(ecx_71 + 8) != 2)
                void* edi_4 = *(ecx_71 - 4)
                void* var_4a4_1 = edi_4
                sub_44f240(&var_4a0, &data_5559b1)
                int32_t var_14_14 = 0xc
                int32_t i_4 = 0
                char* eax_67 = var_494
                
                if (*eax_67 s> 0)
                    do
                        sub_44f620(&var_4a0, &data_583aa8)
                        i_4 += 1
                    while (i_4 s< *eax_67)
                    
                    edi_4 = var_4a4_1
                
                char* eax_68 = *(edi_4 + 0x698)
                char* const ecx_74 = &data_5559b1
                int32_t* esi_6 = var_4a0
                
                if (eax_68 != 0)
                    ecx_74 = eax_68
                
                char* const var_4e0_19 = ecx_74
                int32_t* eax_69 = &data_5559b1
                
                if (esi_6 != 0)
                    eax_69 = esi_6
                
                int32_t* var_4e4_13 = eax_69
                sub_44f980(&var_49c, "%s%s")
                var_14_14.b = 0xd
                sub_469cf0(&var_49c, &data_653ce4, data_5cda18, &var_49c, var_490_1)
                int32_t edx_49 = data_5cea2c
                int32_t eax_71 = 0
                
                if (edx_49 s> 0)
                    do
                        if (*(edi_4 + 0x6a8) == (&data_5cda2c)[eax_71])
                            int32_t edx_50 = data_5cda18
                            
                            if (edx_50 == 0)
                                sub_44e4d0(eax_71, &data_5559b1, "id != DATAID_NULL", 
                                    "c:\ax2017\engine\dataarray.h", 0x6c, 
                                    "DataArray<struct UI2>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            uint32_t eax_72 = zx.d(edx_50.w)
                            void* ecx_78
                            
                            if (eax_72 u< data_5c99a4)
                                ecx_78 = eax_72 * 0x1008 + data_5c99a0
                            
                            if (eax_72 u< data_5c99a4 && *(ecx_78 + 0x1004) == edx_50)
                                sub_469800(eax_72, &data_653cf8, ecx_78, 0x3f800000, var_490_1)
                                break
                            
                            sub_44e4d0(eax_72, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                                "c:\ax2017\engine\dataarray.h", 0x6d, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        eax_71 += 1
                    while (eax_71 s< edx_49)
                
                if (*(sub_45d320(edi_4) + 8) s> 0 || *(edi_4 + 0x69c) == 6)
                    char* eax_74 = var_494
                    int32_t edx_51 = data_5cda18
                    uint32_t eax_75
                    void* ecx_81
                    void** edx_52
                    
                    if (*(eax_74 + 8) != 0)
                        if (edx_51 == 0)
                            sub_44e4d0(eax_74, &data_5559b1, "id != DATAID_NULL", 
                                "c:\ax2017\engine\dataarray.h", 0x6c, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        eax_75 = zx.d(edx_51.w)
                        
                        if (eax_75 u< data_5c99a4)
                            ecx_81 = eax_75 * 0x1008 + data_5c99a0
                        
                        if (eax_75 u>= data_5c99a4 || *(ecx_81 + 0x1004) != edx_51)
                            sub_44e4d0(eax_75, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                                "c:\ax2017\engine\dataarray.h", 0x6d, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        edx_52 = &data_653d70
                    else
                        if (edx_51 == 0)
                            sub_44e4d0(eax_74, &data_5559b1, "id != DATAID_NULL", 
                                "c:\ax2017\engine\dataarray.h", 0x6c, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        eax_75 = zx.d(edx_51.w)
                        
                        if (eax_75 u< data_5c99a4)
                            ecx_81 = eax_75 * 0x1008 + data_5c99a0
                        
                        if (eax_75 u>= data_5c99a4 || *(ecx_81 + 0x1004) != edx_51)
                            sub_44e4d0(eax_75, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                                "c:\ax2017\engine\dataarray.h", 0x6d, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        edx_52 = &data_653d5c
                    
                    sub_469800(eax_75, edx_52, ecx_81, 0x3f800000, var_490_1)
                
                char* edi_6
                
                if (*(edi_4 + 0x784) != 0)
                    int32_t* eax_76 = sub_45d320(edi_4)
                    edi_6 = sub_4b8a40(eax_76, eax_76, &data_5b1d6c, 0x6b)
                else
                    edi_6 = nullptr
                
                char* i_11 = sub_46ae50(var_4a4_1, &var_4ac)
                char* eax_80
                
                if (i_11 != 2)
                    eax_80 = sub_46ae50(var_4a4_1, &var_4ac)
                    
                    if (eax_80 == 1)
                        int32_t var_4e0_24 = var_490_1
                        eax_80 = sub_469930(data_5cda18)
                    else if (*edi_6 != 0)
                        sub_44f240(&var_498, edi_6)
                        var_14_14.b = 0x10
                        eax_80 = sub_469cf0(&var_498, &data_653d84, data_5cda18, &var_498, var_490_1)
                        var_14_14.b = 0x11
                        
                        if (data_cdf414 != 0)
                            eax_80 = var_498
                            
                            if (eax_80 != 0 && *eax_80 != 0)
                                eax_80 = sub_44f000(&var_498)
                                int32_t temp6_1 = *(eax_80 + 4)
                                *(eax_80 + 4) -= 1
                                
                                if (temp6_1 == 1)
                                    eax_80 = sub_45d050(eax_80, *(eax_80 + 0xc) + 0x10)
                                    var_498 = &data_5559b1
                        
                        var_14_14.b = 0xd
                else
                    int32_t edi_7
                    
                    if (*edi_6 == 0)
                        edi_7 = var_490_1
                    else
                        sub_44f240(&i_5, edi_6)
                        edi_7 = var_490_1
                        var_14_14.b = 0xe
                        i_11 = sub_469cf0(&i_5, &data_653d84, data_5cda18, &i_5, edi_7)
                        var_14_14.b = 0xf
                        
                        if (data_cdf414 != 0)
                            i_11 = i_5
                            
                            if (i_11 != 0 && *i_11 != 0)
                                i_11 = sub_44f000(&i_5)
                                int32_t temp5_1 = *(i_11 + 4)
                                *(i_11 + 4) -= 1
                                
                                if (temp5_1 == 1)
                                    i_11 = sub_45d050(i_11, *(i_11 + 0xc) + 0x10)
                                    i_5 = &data_5559b1
                        
                        var_14_14.b = 0xd
                    
                    int32_t edx_58 = data_5cda18
                    
                    if (edx_58 == 0)
                        sub_44e4d0(i_11, &data_5559b1, "id != DATAID_NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    uint32_t eax_79 = zx.d(edx_58.w)
                    void* ecx_90
                    
                    if (eax_79 u< data_5c99a4)
                        ecx_90 = eax_79 * 0x1008 + data_5c99a0
                    
                    if (eax_79 u>= data_5c99a4 || *(ecx_90 + 0x1004) != edx_58)
                        sub_44e4d0(eax_79, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    eax_80 = sub_469800(eax_79, &data_653d34, ecx_90, 0x3f800000, edi_7)
                
                if (*(var_4a4_1 + 0xa) != 0)
                    int32_t edx_64 = data_5cda18
                    
                    if (edx_64 == 0)
                        sub_44e4d0(eax_80, &data_5559b1, "id != DATAID_NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    uint32_t eax_82 = zx.d(edx_64.w)
                    void* ecx_98
                    
                    if (eax_82 u< data_5c99a4)
                        ecx_98 = eax_82 * 0x1008 + data_5c99a0
                    
                    if (eax_82 u>= data_5c99a4 || *(ecx_98 + 0x1004) != edx_64)
                        sub_44e4d0(eax_82, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    eax_80 = sub_469800(eax_82, &data_653d0c, ecx_98, 0x3f800000, var_490_1)
                
                int32_t edi_9
                
                if (*(var_4a4_1 + 0xb) == 0)
                    edi_9 = var_490_1
                else
                    int32_t edx_65 = data_5cda18
                    
                    if (edx_65 == 0)
                        sub_44e4d0(eax_80, &data_5559b1, "id != DATAID_NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    uint32_t eax_83 = zx.d(edx_65.w)
                    void* ecx_100
                    
                    if (eax_83 u< data_5c99a4)
                        ecx_100 = eax_83 * 0x1008 + data_5c99a0
                    
                    if (eax_83 u>= data_5c99a4 || *(ecx_100 + 0x1004) != edx_65)
                        sub_44e4d0(eax_83, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    edi_9 = var_490_1
                    sub_469800(eax_83, &data_653d20, ecx_100, 0x3f800000, edi_9)
                
                var_490_1 = edi_9 + 1
                var_14_14.b = 0x12
                
                if (data_cdf414 != 0)
                    char* eax_84 = var_49c
                    
                    if (eax_84 != 0 && *eax_84 != 0)
                        char* eax_85 = sub_44f000(&var_49c)
                        int32_t temp7_1 = *(eax_85 + 4)
                        *(eax_85 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_45d050(eax_85, *(eax_85 + 0xc) + 0x10)
                            var_49c = &data_5559b1
                
                int32_t var_14_15 = 0x13
                
                if (data_cdf414 != 0 && esi_6 != 0 && *esi_6 != 0)
                    char* eax_86 = sub_44f000(&var_4a0)
                    int32_t temp8_1 = *(eax_86 + 4)
                    *(eax_86 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_45d050(eax_86, *(eax_86 + 0xc) + 0x10)
                        var_4a0 = &data_5559b1
                
                int32_t var_14_16 = 0xffffffff
                eax_66 = data_5cd9f0
                ecx_71 = var_494
                edx_48 = var_4a8
            
            edx_48 += 1
            ecx_71 += 0x10
            var_4a8 = edx_48
            var_494 = ecx_71
        while (edx_48 s< eax_66)
    
    char* esi_8 = *(data_5cd9f8 + 0x20)
    var_494 = esi_8
    
    if (esi_8 != 0 && *esi_8 != 0)
        char* eax_87 = sub_44f000(&var_494)
        *(eax_87 + 4) += 1
    
    int32_t var_14_17 = 0x14
    
    if (data_ce1cbc != 0)
        sub_44f620(&var_494, U"*")
        esi_8 = var_494
    
    sub_469cf0(&var_494, &data_653d98, data_5cda18, &var_494, 0xffffffff)
    sub_466e80(data_5cda18, data_5b0f3c)
    int32_t ecx_110
    
    if (data_5cd9f0 == 0)
        ecx_110 = 1
    else if (data_5cea34.b != 0 || data_5cea36 != 0)
        sub_44edc0(&var_4b0)
        int32_t eax_90 = sub_46cc20(var_4b0, var_4ac)
        
        if (eax_90 == 0xffffffff)
            ecx_110 = 1
        else
            if (eax_90 u> 7)
                sub_44e4d0(eax_90, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x2922, 
                    "UI2EditorUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            switch (eax_90)
                case 0, 7
                    ecx_110 = 5
                case 1, 6
                    ecx_110 = 3
                case 2, 5
                    ecx_110 = 6
                case 3, 4
                    ecx_110 = 4
    else if (data_5cea34:1.b == 0)
        ecx_110 = 1
    else
        sub_44edc0(&var_4b0)
        int32_t eax_89 = sub_46d300(var_4b0, var_4ac)
        
        if (eax_89 == 0xffffffff)
            ecx_110 = 1
        else
            if (eax_89 u> 7)
                sub_44e4d0(eax_89, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x2948, 
                    "UI2EditorUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            switch (eax_89)
                case 0, 7
                    ecx_110 = 5
                case 1, 6
                    ecx_110 = 3
                case 2, 5
                    ecx_110 = 6
                case 3, 4
                    ecx_110 = 4
    
    sub_44eca0(ecx_110)
    char* result = result_1
    data_5c99e4 = result
    data_64f849 = 0
    int32_t var_14_18 = 0x15
    
    if (data_cdf414 != 0 && esi_8 != 0 && *esi_8 != 0)
        result = sub_44f000(&var_494)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
