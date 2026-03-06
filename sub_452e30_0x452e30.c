// 函数名称: sub_452e30
// 虚拟地址: 0x452e30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_452e30()
{
    // 第一条实际指令: int32_t performanceCount_1
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    void* eax = data_65ae00
    
    if (eax != 0)
        uint32_t eax_1 = GetFileAttributesA(*(eax + 4))
        char ecx_1 = data_5b2e40
        
        if (eax_1 != 0xffffffff)
            ecx_1 = 0
        
        data_5b2e40 = ecx_1
    
    sub_4a5ef0()
    char* eax_2 = sub_44ebe0()
    char* eax_3
    int32_t ecx_3
    int32_t edx
    eax_3, ecx_3, edx = sub_48c200(eax_2)
    char* var_4c_2 = eax_2
    sub_412bd0(eax_3, edx, ecx_3, &data_65acf8, "%slog.txt")
    GetFullPathNameA(&data_65acf8, 0x104, &data_65acf8, nullptr)
    SymInitialize(GetCurrentProcess(), nullptr, 1)
    SymSetOptions(0x10)
    SetUnhandledExceptionFilter(sub_44e060)
    uint32_t performanceCount_5 = sub_45cec0()
    char const* const var_54_1
    int32_t var_50_1
    char const* const var_4c_3
    char* ecx_4
    
    if (data_65ae04 == 0)
        int32_t* eax_5 = sub_45cfa0(0x30)
        eax_5[3] += 1
        int32_t* edi_1 = *eax_5
        
        if (edi_1 == 0)
            sub_45ce30(eax_5)
            edi_1 = *eax_5
        
        *eax_5 = *edi_1
        _memset(edi_1, 0, 0x30)
        data_65ae04 = edi_1
        uint32_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int32_t* ecx_6 = data_65ae04
        int32_t var_3c_1 = 0
        *ecx_6 = performanceCount
        int32_t var_34
        ecx_6[1] = var_34
        ecx_6[2] = performanceCount
        ecx_6[3] = var_34
        void* eax_11 = data_65ae00
        ecx_6[4] = 0
        int32_t xmm0_1
        
        if (*(eax_11 + 0x27) == 0)
            xmm0_1 = 0x3c23d70a
        else
            xmm0_1 = 0x3c5a740e
        
        data_5b1104 = xmm0_1
        data_ce19a4 = data_59dcd0
        sub_4a8920()
        int32_t* ecx_7 = data_ce19b4
        
        if (ecx_7 != 0)
            (**ecx_7)()
        
        int32_t* eax_13 = sub_45cfa0(0x74)
        eax_13[3] += 1
        int32_t* edi_2 = *eax_13
        
        if (edi_2 == 0)
            sub_45ce30(eax_13)
            edi_2 = *eax_13
        
        *eax_13 = *edi_2
        _memset(edi_2, 0, 0x74)
        data_cdf458 = edi_2
        
        if (data_cdf444 != 0)
            int32_t* eax_15 = sub_45cfa0(0x28)
            eax_15[3] += 1
            int32_t* esi_3 = *eax_15
            
            if (esi_3 == 0)
                sub_45ce30(eax_15)
                esi_3 = *eax_15
            
            *eax_15 = *esi_3
            esi_3[7] = 0
            esi_3[8] = 0
            esi_3[9] = 0
            __builtin_memset(esi_3, 0, 0x14)
            esi_3[5] = 1
            esi_3[6] = 0
            data_cdf448 = esi_3
            void* eax_17 = sub_45cd70(0x6400)
            int32_t* ecx_10 = data_cdf444
            *esi_3 = eax_17
            esi_3[2] = 0x100
            esi_3[6] = "SoundInstances"
            esi_3[5] = 0xd0f0
            void* eax_18 = data_cdf448
            *(eax_18 + 0x1c) = 0x3f59999a
            *(eax_18 + 0x20) = 0x3f59999a
            *(eax_18 + 0x24) = 0x3f800000
            (**ecx_10)()
        
        sub_4910d0()
        sub_494e00()
        int32_t i = 0
        
        if (data_ce1af8 s> 0)
            do
                sub_4bd290(*((i << 2) + &data_ce1b08))
                i += 1
            while (i s< data_ce1af8)
        
        void* eax_20 = sub_45cd70(0x20)
        data_cdf47c = eax_20
        __builtin_memset(eax_20, 0, 0x20)
        *(eax_20 + 0x18) = 0x400
        *(eax_20 + 0x1c) = 0
        sub_494310(eax_20 + 0x10)
        int32_t* ecx_13 = data_cdf47c
        *ecx_13 = 0
        ecx_13[1] = 0
        ecx_13[2] = 0x400
        ecx_13[3] = 0
        sub_494390(ecx_13)
        sub_48d080()
        int32_t* eax_21 = sub_45cfa0(4)
        eax_21[3] += 1
        int32_t* ecx_14 = *eax_21
        
        if (ecx_14 == 0)
            sub_45ce30(eax_21)
            ecx_14 = *eax_21
        
        bool cond:0_1 = data_5b2e40 != 0
        *eax_21 = *ecx_14
        *ecx_14 = &data_5559b1
        data_ce1794 = ecx_14
        
        if (not(cond:0_1) && data_65acf1 == 0)
            bool cond:1_1 = sub_484c40(*(data_65ae00 + 4)) != 0
            int32_t var_4c_5 = *(data_65ae00 + 4)
            char const* const var_50_2
            
            if (cond:1_1)
                var_50_2 = "Loaded xpack file: '%s'"
            else
                var_50_2 = "Can't load xpack file: '%s'"
            
            sub_44e450(var_50_2)
        
        int32_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        int32_t performanceCount_6 = performanceCount_2
        int32_t performanceCount_9 = performanceCount_1
        int32_t var_2c
        int32_t var_24
        performanceCount_5 = sub_44eab0(performanceCount_6 - performanceCount_9, 
            sbb.d(var_24, var_2c, performanceCount_6 u< performanceCount_9))
        void* ecx_19 = data_65ae00
        performanceCount = performanceCount_5
        
        if (*(ecx_19 + 0x27) != 0)
            performanceCount_5 = data_ce19c0
            
            if (performanceCount_5 == 1)
                int32_t* ecx_20 = data_ce19c8
                
                if (ecx_20 == 0)
                    data_ce19c0 = 0
                else if ((*(*ecx_20 + 0xc))() == 0)
                    (*(*data_ce19c8 + 8))()
                    int32_t* ecx_23 = data_ce19c8
                    
                    if (ecx_23 != 0)
                        (**ecx_23)(0)
                        int32_t eax_36 = data_ce19c8
                        
                        if (eax_36 != 0)
                            _aligned_free_base(eax_36)
                    
                    data_ce19c8 = 0
                    
                    if ((*(*nullptr + 0xc))() == 0)
                        (*(*data_ce19c8 + 8))()
                        int32_t* ecx_26 = data_ce19c8
                        
                        if (ecx_26 != 0)
                            (**ecx_26)(0)
                            int32_t eax_42 = data_ce19c8
                            
                            if (eax_42 != 0)
                                _aligned_free_base(eax_42)
                        
                        bool cond:3_1 = data_ce19c0 != 1
                        data_ce19c8 = 0
                        
                        if (not(cond:3_1))
                            data_ce19c0 = 0
                    else
                        data_ce19c0 = 5
                else
                    data_ce19c0 = 3
                
                goto label_45324c
            
            if (performanceCount_5 == 3 || performanceCount_5 == 5)
            label_45324c:
                data_ce1a34 = _mm_unpacklo_ps(0xbd03126f, 0x80000000)
                data_ce1a40 = _mm_unpacklo_ps(0x3d03126f, 0)
                int128_t xmm0_4 = data_5724f8
                data_ce1a3c = 0x80000000
                data_ce1a48 = 0
                __builtin_memcpy(&data_ce1a4c, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
                "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                    0x20)
                data_ce1acc = xmm0_4
            label_4532a8:
                int32_t performanceCount_3
                QueryPerformanceCounter(&performanceCount_3)
                int32_t performanceCount_7 = performanceCount_3
                int32_t var_14
                uint32_t var_54_4 = sub_44eab0(performanceCount_7 - performanceCount_9, 
                    sbb.d(var_14, var_2c, performanceCount_7 u< performanceCount_9)) - performanceCount
                sub_44e260("VRInitialize time %d ms")
                sub_4abc60()
                data_ce1adc = data_59dcd0
                performanceCount_5 = sub_4affb0()
                
                if (data_cdf45c == 0)
                    int32_t* eax_43 = sub_45cfa0(0xc)
                    eax_43[3] += 1
                    int32_t* ecx_27 = *eax_43
                    
                    if (ecx_27 == 0)
                        sub_45ce30(eax_43)
                        ecx_27 = *eax_43
                    
                    *eax_43 = *ecx_27
                    *ecx_27 = 0
                    ecx_27[1] = 0
                    ecx_27[2] = 0
                    data_cdf45c = ecx_27
                    uint32_t* eax_45 = sub_45cfa0(0x1c)
                    eax_45[3] += 1
                    uint32_t ecx_29 = *eax_45
                    
                    if (ecx_29 == 0)
                        sub_45ce30(eax_45)
                        ecx_29 = *eax_45
                    
                    performanceCount_5 = *ecx_29
                    *eax_45 = performanceCount_5
                    bool cond:2_1 = data_65adfc == 0
                    __builtin_memset(ecx_29, 0, 0x1c)
                    data_cdf450 = ecx_29
                    
                    if (cond:2_1)
                        goto label_4535a3
                    
                    int32_t* eax_46 = sub_45cfa0(0x5c)
                    eax_46[3] += 1
                    int32_t* esi_7 = *eax_46
                    
                    if (esi_7 == 0)
                        sub_45ce30(eax_46)
                        esi_7 = *eax_46
                    
                    *eax_46 = *esi_7
                    performanceCount_5 = _memset(esi_7, 0, 0x5c)
                    esi_7[5] = 1
                    esi_7[8] = 0
                    esi_7[9] = 0
                    esi_7[0xa] = 0
                    esi_7[0xb] = 0
                    esi_7[0xc] = 1
                    __builtin_memset(&esi_7[0xd], 0, 0x28)
                    bool cond:5_1 = esi_7[7] == 0
                    data_65acf4 = esi_7
                    
                    if (cond:5_1)
                        esi_7[7] = sub_45cd70(0x180)
                        esi_7[9] = 0x20
                        performanceCount_5 = 0xdb40
                        esi_7[0xd] = "NetListens"
                        esi_7[0xc] = 0xdb40
                        int32_t* esi_8 = data_65acf4
                        
                        if (*esi_8 == 0)
                            int32_t eax_49 = sub_45cd70(0x4b1c0)
                            int32_t* ecx_32 = data_65adfc
                            *esi_8 = eax_49
                            esi_8[2] = 0xfd0
                            esi_8[6] = "NetLocs"
                            esi_8[5] = 0xdb4c
                            performanceCount_5 = (**ecx_32)()
                        label_4535a3:
                            
                            if (data_654e9c == 0)
                                data_654e9c = sub_45cd70(0x700000)
                                data_654ea4 = 0x4000
                                performanceCount_5 = 0xdb14
                                data_654eb4 = "ui elements"
                                bool cond:4_1 = data_654eb8 == 0
                                data_654eb0 = 0xdb14
                                
                                if (cond:4_1)
                                    data_654eb8 = sub_45cd70(0x10e000)
                                    data_654ec0 = 0x400
                                    performanceCount_5 = 0xdb20
                                    data_654ed0 = "ui states"
                                    bool cond:6_1 = data_5c99a0 == 0
                                    data_654ecc = 0xdb20
                                    
                                    if (cond:6_1)
                                        data_5c99a0 = sub_45cd70(0x4020000)
                                        data_5c99a8 = 0x4000
                                        performanceCount_5 = 0xdc04
                                        data_5c99b8 = "ui2 elements"
                                        bool cond:7_1 = data_5c99bc == 0
                                        data_5c99b4 = 0xdc04
                                        
                                        if (cond:7_1)
                                            data_5c99bc = sub_45cd70(0x11a000)
                                            data_5c99c4 = 0x800
                                            performanceCount_5 = 0xdc14
                                            data_5c99d4 = "ui2 expressions"
                                            bool cond:8_1 = data_655ab8 != 0
                                            data_5c99d0 = 0xdc14
                                            
                                            if (not(cond:8_1))
                                                data_655ab8 = sub_45cd70(0x1340000)
                                                data_655ac0 = 0x4000
                                                data_655ad0 = &data_5559b1
                                                data_655acc = 0xd9b1
                                                int32_t* eax_56 = sub_45cfa0(0x280)
                                                eax_56[3] += 1
                                                int32_t* edi_6 = *eax_56
                                                
                                                if (edi_6 == 0)
                                                    sub_45ce30(eax_56)
                                                    edi_6 = *eax_56
                                                
                                                *eax_56 = *edi_6
                                                _memset(edi_6, 0, 0x280)
                                                char* (__fastcall* var_4c_12)(char** arg1) = sub_417870
                                                `eh vector constructor iterator'(edi_6, 0x4c, 8, 
                                                    sub_4177e0)
                                                data_cdf440 = edi_6
                                                InitializeCriticalSectionAndSpinCount(&edi_6[0x9a], 
                                                    0x400)
                                                void** eax_59 = data_65ae00
                                                void** ecx_34 = &data_5c675c
                                                
                                                if (eax_59 != 0)
                                                    ecx_34 = eax_59
                                                
                                                data_65ae00 = ecx_34
                                                (**ecx_34)()
                                                int32_t performanceCount_4
                                                QueryPerformanceCounter(&performanceCount_4)
                                                int32_t performanceCount_8 = performanceCount_4
                                                int32_t var_c
                                                uint32_t var_54_7 = sub_44eab0(
                                                    performanceCount_8 - performanceCount_1, 
                                                    sbb.d(var_c, var_2c, 
                                                        performanceCount_8 u< performanceCount_1))
                                                return sub_44e260("AppInitialize time %d ms")
                                            
                                            var_4c_3 = "DataArray<struct FabState>::DataArrayInitialize"
                                        else
                                            var_4c_3 =
                                                "DataArray<struct UI2ExprTreeRT>::DataArrayInitialize"
                                    else
                                        var_4c_3 = "DataArray<struct UI2>::DataArrayInitialize"
                                else
                                    var_4c_3 = "DataArray<struct UIState>::DataArrayInitialize"
                            else
                                var_4c_3 = "DataArray<struct UIStateElement>::DataArrayInitialize"
                        else
                            var_4c_3 = "DataArray<struct NetLoc>::DataArrayInitialize"
                    else
                        var_4c_3 = "DataArray<struct NetListen>::DataArrayInitialize"
                    
                    var_50_1 = 0xce
                    var_54_1 = "c:\ax2017\engine\dataarray.h"
                    ecx_4 = "mpBlock == NULL"
                else
                    var_4c_3 = "AssetUtilInitForApp"
                    var_50_1 = 0x28
                    var_54_1 = "c:\ax2017\engine\assetutils.cpp"
                    ecx_4 = "!gpAssetUtilData"
            else
                var_4c_3 = "VRInitForApp"
                var_50_1 = 0x68
                var_54_1 = "c:\ax2017\engine\vr.cpp"
                ecx_4 = "Halt"
        else
            if (data_ce19c0 == 0)
                goto label_4532a8
            
            var_4c_3 = "VRInitForApp"
            var_50_1 = 0x1e
            var_54_1 = "c:\ax2017\engine\vr.cpp"
            ecx_4 = "gGlobalVRAppType == VRAPP_NONE"
    else
        var_4c_3 = "AppInitialize"
        var_50_1 = 0x55
        var_54_1 = "c:\ax2017\engine\appcontroller.cpp"
        ecx_4 = "gpAppData == NULL"
    
    sub_44e4d0(performanceCount_5, &data_5559b1, ecx_4, var_54_1, var_50_1, var_4c_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
