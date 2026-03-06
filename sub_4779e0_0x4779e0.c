// 函数名称: sub_4779e0
// 虚拟地址: 0x4779e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4779e0(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_542d81
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    char** ecx = __alloca_probe(0x1070)
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_24 = eax_2
    int32_t var_2c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_1051
    char* result
    
    if (sub_476940(ecx, &var_1051).b == 0)
        result = *ecx
        
        if (result == 9)
            data_5cda1c = data_5cda1c * (_mm_cvtepi32_ps(zx.o(ecx[3])) * 0.00200000009f + 1f)
            result = *ecx
        
        char* var_105c
        bool cond:7_1
        
        if (result == 1)
            if (data_5cea34.b == 0 && data_5cea36 == 0)
                if (data_5cea34:1.b == 0 || ecx[1] != 0xd)
                    goto label_477ab9
                
                goto label_477aa4
            
            if (ecx[1] != 0xd)
            label_477ab9:
                result = ecx[1]
                
                if (result != 0x27)
                    int32_t xmm1_5
                    
                    if (result != 0x25)
                        if (result == 0x26)
                            if (data_5cea2c s> 0)
                                xmm1_5 = 0xbf800000
                                int32_t var_1050_5 = 0
                                int32_t var_104c_4 = 0xbf800000
                                
                                if ((ecx[2].b & 1) == 0)
                                    goto label_477bae
                                
                                int32_t var_1050_6 = 0
                                goto label_477ba0
                            
                        labelid_2:
                            result.b = 1
                        else if (result == 0x28)
                            if (data_5cea2c s> 0)
                                int32_t var_1050_7 = 0
                                int32_t var_104c_6 = 0x3f800000
                                
                                if ((ecx[2].b & 1) != 0)
                                    int32_t var_1050_8 = 0
                                    float var_104c_7 = 1f * 10f
                                
                                sub_46b290(ecx)
                                sub_469210(1)
                            
                        labelid_2:
                            result.b = 1
                        else if (result == 0x21)
                            sub_476aa0(&result[0xffffffe0])
                        labelid_2:
                            result.b = 1
                        else if (result == 0x22)
                            sub_476aa0(0xffffffff)
                        labelid_2:
                            result.b = 1
                        else if (result != 0x53)
                        label_477c64:
                            char eax_5
                            char* ecx_6
                            
                            if (ecx[1] == 0x53)
                                eax_5, ecx_6 = sub_468df0()
                            
                            if (ecx[1] != 0x53 || eax_5 == 0)
                                if (ecx[1] == 0x54)
                                    result = sub_468df0()
                                
                                if (ecx[1] != 0x54 || result.b == 0)
                                    char eax_6
                                    
                                    if (ecx[1] == 8)
                                        eax_6 = sub_468df0()
                                    
                                    if (ecx[1] != 8 || eax_6 == 0)
                                        if (ecx[1] == 9)
                                            char eax_7 = sub_468df0()
                                            char eax_8
                                            
                                            if (eax_7 != 0)
                                                eax_8 = sub_468d70()
                                            
                                            if (eax_7 != 0 && eax_8 != 0)
                                                result = sub_4d51d0()
                                                goto label_477d65
                                            
                                            if (ecx[1] != 9)
                                                goto label_477cff
                                            
                                            if (sub_468df0() == 0)
                                                goto label_477cff
                                            
                                            result = sub_4d5230()
                                            goto label_477d65
                                        
                                    label_477cff:
                                        
                                        if (ecx[1] == 0x4f)
                                            result = sub_468df0()
                                        
                                        if (ecx[1] != 0x4f || result.b == 0)
                                            uint32_t esi_1
                                            
                                            if (ecx[1] != 0xdb)
                                            label_477e35:
                                                
                                                if (ecx[1] != 0xdd)
                                                label_477ebc:
                                                    
                                                    if (ecx[1] == 0xdb)
                                                        result = sub_468df0()
                                                    
                                                    if (ecx[1] != 0xdb || result.b == 0)
                                                        if (ecx[1] == 0xdd)
                                                            result = sub_468df0()
                                                        
                                                        if (ecx[1] != 0xdd || result.b == 0)
                                                            if (ecx[1] == 0x43)
                                                                result = sub_468df0()
                                                            
                                                            if (ecx[1] != 0x43 || result.b != 0)
                                                                char eax_30
                                                                
                                                                if (ecx[1] == 0x47)
                                                                    eax_30 = sub_468df0()
                                                                
                                                                if (ecx[1] != 0x47 || eax_30 == 0)
                                                                    char eax_31
                                                                    
                                                                    if (ecx[1] == 0x52)
                                                                        eax_31 = sub_468df0()
                                                                    
                                                                    if (ecx[1] != 0x52 || eax_31 == 0)
                                                                        if (ecx[1] == 0x4a)
                                                                            result = sub_468df0()
                                                                        
                                                                        if (ecx[1] != 0x4a || result.b == 0)
                                                                            int32_t eax_32 = ecx[1]
                                                                            
                                                                            if (eax_32 != 0x42)
                                                                                if (eax_32 == 0xbb)
                                                                                    result = sub_468df0()
                                                                                
                                                                                if (eax_32 != 0xbb || result.b == 0)
                                                                                    if (ecx[1] == 0xbd)
                                                                                        result = sub_468df0()
                                                                                    
                                                                                    if (ecx[1] != 0xbd || result.b == 0)
                                                                                        char* ecx_33
                                                                                        
                                                                                        if (ecx[1] == 0x5a)
                                                                                            result, ecx_33 = sub_468df0()
                                                                                        
                                                                                        int32_t eax_36
                                                                                        
                                                                                        if (ecx[1] != 0x5a || result.b == 0)
                                                                                            char eax_37
                                                                                            char* ecx_34
                                                                                            
                                                                                            if (ecx[1] == 0x59)
                                                                                                eax_37, ecx_34 = sub_468df0()
                                                                                            
                                                                                            if (ecx[1] != 0x59 || eax_37 == 0)
                                                                                                result = ecx[1]
                                                                                                
                                                                                                if (result == 0x2e)
                                                                                                    int32_t var_30_5 = data_5cea2c
                                                                                                    int32_t ecx_37 = data_5cd9fc
                                                                                                    int32_t* var_34_3 = &data_5cda2c
                                                                                                    char** var_38_3 = &var_105c
                                                                                                    var_105c = nullptr
                                                                                                    int32_t var_1028[0x3f6]
                                                                                                    sub_46ab50(&var_105c, &var_1028, 
                                                                                                        ecx_37, var_38_3, var_34_3, var_30_5)
                                                                                                    char* edi_5 = var_105c
                                                                                                    int32_t eax_41 = edi_5 << 2 s>> 2
                                                                                                    int32_t eax_42 = sub_429140(eax_41, 
                                                                                                        &var_1028[edi_5], &var_1028, eax_41, 
                                                                                                        sub_46ac60)
                                                                                                    int32_t esi_4 = 0
                                                                                                    
                                                                                                    if (edi_5 s> 0)
                                                                                                        while (true)
                                                                                                            int32_t edx_12 = var_1028[esi_4]
                                                                                                            
                                                                                                            if (edx_12 == 0)
                                                                                                                sub_44e4d0(eax_42, &data_5559b1, 
                                                                                                                    "id != DATAID_NULL", 
                                                                                                                    "c:\ax2017\engine\dataarray.h", 0x6c, 
                                                                                                                    "DataArray<struct UI2>::DataArrayGet")
                                                                                                                
                                                                                                                if (IsDebuggerPresent() == 1)
                                                                                                                    breakpoint
                                                                                                                
                                                                                                                sub_44e680()
                                                                                                                noreturn
                                                                                                            
                                                                                                            uint32_t eax_43 = zx.d(edx_12.w)
                                                                                                            
                                                                                                            if (eax_43 u< data_5c99a4)
                                                                                                                void* ecx_42 =
                                                                                                                    eax_43 * 0x1008 + data_5c99a0
                                                                                                                
                                                                                                                if (*(ecx_42 + 0x1004) == edx_12)
                                                                                                                    edx_12.b = 0
                                                                                                                    eax_42 = sub_46a6c0(ecx_42, edx_12.b)
                                                                                                                    esi_4 += 1
                                                                                                                    
                                                                                                                    if (esi_4 s>= edi_5)
                                                                                                                        break
                                                                                                                    
                                                                                                                    continue
                                                                                                            
                                                                                                            sub_44e4d0(eax_43, &data_5559b1, 
                                                                                                                "DataArrayTryToGet(id) != NULL", 
                                                                                                                "c:\ax2017\engine\dataarray.h", 0x6d, 
                                                                                                                "DataArray<struct UI2>::DataArrayGet")
                                                                                                            
                                                                                                            if (IsDebuggerPresent() == 1)
                                                                                                                breakpoint
                                                                                                            
                                                                                                            sub_44e680()
                                                                                                            noreturn
                                                                                                    
                                                                                                    data_5cea2c = 0
                                                                                                    sub_469210(1)
                                                                                                labelid_2:
                                                                                                    result.b = 1
                                                                                                else if (result != 0x41)
                                                                                                label_478365:
                                                                                                    
                                                                                                    if (ecx[1] != 0x44)
                                                                                                    labelid_2:
                                                                                                        result.b = 1
                                                                                                    else
                                                                                                        if (sub_468df0().b != 0)
                                                                                                            cond:7_1 = data_5cea34.b != 0
                                                                                                            goto label_478383
                                                                                                        
                                                                                                    labelid_2:
                                                                                                        result.b = 1
                                                                                                else
                                                                                                    if (sub_468df0().b == 0
                                                                                                            || data_5cea34.b != 0)
                                                                                                        goto label_478365
                                                                                                    
                                                                                                    int32_t i_1 = data_5cd9f0
                                                                                                    int32_t edx_13 = 0
                                                                                                    
                                                                                                    if (i_1 s> 0)
                                                                                                        char** esi_5 = &data_5c99f0
                                                                                                        int32_t i
                                                                                                        
                                                                                                        do
                                                                                                            result = *esi_5
                                                                                                            int32_t ecx_43 = edx_13 + 1
                                                                                                            esi_5 = &esi_5[4]
                                                                                                            
                                                                                                            if (result[0xb] != 0)
                                                                                                                ecx_43 = edx_13
                                                                                                            
                                                                                                            edx_13 = ecx_43
                                                                                                            i = i_1
                                                                                                            i_1 -= 1
                                                                                                        while (i != 1)
                                                                                                        i_1 = data_5cd9f0
                                                                                                    
                                                                                                    int32_t ecx_44 = data_5cea2c
                                                                                                    
                                                                                                    if (ecx_44 == edx_13)
                                                                                                        goto label_478389
                                                                                                    
                                                                                                    int32_t edx_14 = 0
                                                                                                    
                                                                                                    if (i_1 s> 0)
                                                                                                        char** esi_6 = &data_5c99f0
                                                                                                        
                                                                                                        do
                                                                                                            result = *esi_6
                                                                                                            
                                                                                                            if (result[0xb] == 0)
                                                                                                                (&data_5cda2c)[ecx_44] =
                                                                                                                    *(result + 0x6a8)
                                                                                                                i_1 = data_5cd9f0
                                                                                                                ecx_44 = data_5cea2c + 1
                                                                                                                data_5cea2c = ecx_44
                                                                                                            
                                                                                                            edx_14 += 1
                                                                                                            esi_6 = &esi_6[4]
                                                                                                        while (edx_14 s< i_1)
                                                                                                    
                                                                                                labelid_2:
                                                                                                    result.b = 1
                                                                                            else
                                                                                                if (data_64f840 s< data_64f844)
                                                                                                    data_64f84a = 1
                                                                                                    sub_4c68c0(ecx_34)
                                                                                                    eax_36 = data_64f840 + 1
                                                                                                    goto label_4781d6
                                                                                                
                                                                                            labelid_2:
                                                                                                result.b = 1
                                                                                        else if (data_64f840 s<= 1)
                                                                                        labelid_2:
                                                                                            result.b = 1
                                                                                        else
                                                                                            data_64f84a = 1
                                                                                            sub_4c68c0(ecx_33)
                                                                                            eax_36 = data_64f840 - 1
                                                                                        label_4781d6:
                                                                                            data_64f840 = eax_36
                                                                                            sub_46a380(
                                                                                                &(&data_5cda24)[eax_36 * 0x407])
                                                                                            sub_45e9a0(&data_5cd9fc)
                                                                                            data_64f84a = 0
                                                                                        labelid_2:
                                                                                            result.b = 1
                                                                                    else
                                                                                        data_5cda1c = data_5cda1c / 1.29999995f
                                                                                    labelid_2:
                                                                                        result.b = 1
                                                                                else
                                                                                    data_5cda1c = data_5cda1c * 1.29999995f
                                                                                labelid_2:
                                                                                    result.b = 1
                                                                            else
                                                                                data_64f840
                                                                                void* var_30_4 = 0x1018
                                                                                char* var_34_2 = &data_5cda28
                                                                                data_5cea2c = 0
                                                                                sub_51d5b0(
                                                                                    &(&data_5cda24)[data_64f840 * 0x407], 
                                                                                    var_34_2, var_30_4)
                                                                                data_5cea34:1.w = 1
                                                                                data_5cea34.b = 0
                                                                            labelid_2:
                                                                                result.b = 1
                                                                        else
                                                                            if (data_5cea2c != 0)
                                                                                int32_t var_30_3 = data_5c99b0
                                                                                sub_44e260("total uis before after %d")
                                                                                sub_474df0()
                                                                                int32_t var_38_1 = data_5c99b0
                                                                                sub_44e260("total uis between %d")
                                                                                int32_t var_40_1 = data_5c99b0
                                                                                sub_44e260("total uis after %d")
                                                                                sub_469210(1)
                                                                            
                                                                        labelid_2:
                                                                            result.b = 1
                                                                    else
                                                                        sub_47a860()
                                                                    labelid_2:
                                                                        result.b = 1
                                                                else
                                                                    sub_4777e0()
                                                                labelid_2:
                                                                    result.b = 1
                                                            else
                                                                bool cond:9_1 = data_5cea2c != 1
                                                                data_5cea34 = 0
                                                                
                                                                if (not(cond:9_1))
                                                                    data_5cea36 = 1
                                                                
                                                            labelid_2:
                                                                result.b = 1
                                                        else
                                                            if (data_5cea2c != 0)
                                                                uint32_t eax_27 = sub_476650()
                                                                uint32_t eax_28 = sub_476260(eax_27)
                                                                esi_1 = eax_28
                                                                
                                                                if (esi_1 == 0)
                                                                    sub_44e4d0(eax_28, &data_5559b1, 
                                                                        "elParent", "c:\ax2017\engine\ui2.cpp", 
                                                                        0x2f8f, "UI2MoveDownOne")
                                                                    
                                                                    if (IsDebuggerPresent() == 1)
                                                                        breakpoint
                                                                    
                                                                    sub_44e680()
                                                                    noreturn
                                                                
                                                                void* eax_29 = sub_476520(eax_27)
                                                                
                                                                if (eax_29 != 0)
                                                                    *(eax_29 + 0x69c) == 6
                                                                        && *(eax_29 + 0xc) == 0
                                                                    goto label_477fd9
                                                                
                                                                if (*(esi_1 + 0x784) != eax_29)
                                                                    goto label_477fd9
                                                                
                                                                sub_476480()
                                                                goto label_477feb
                                                            
                                                        labelid_2:
                                                            result.b = 1
                                                    else
                                                        if (data_5cea2c != 0)
                                                            uint32_t eax_24 = sub_4766f0()
                                                            void* eax_25 = sub_476260(eax_24)
                                                            
                                                            if (eax_25 == 0)
                                                                sub_44e4d0(eax_25, &data_5559b1, 
                                                                    "elParent", "c:\ax2017\engine\ui2.cpp", 
                                                                    0x2f13, "UI2MoveUpOne")
                                                                
                                                                if (IsDebuggerPresent() == 1)
                                                                    breakpoint
                                                                
                                                                sub_44e680()
                                                                noreturn
                                                            
                                                            void* eax_26 = sub_4762f0(eax_24)
                                                            
                                                            if (eax_26 != 0)
                                                                if (*(eax_26 + 0x69c) != 6
                                                                        || *(eax_26 + 0xc) != 0)
                                                                    sub_4763e0(eax_26)
                                                                else
                                                                    sub_476790(eax_26)
                                                            else if (*(eax_25 + 0x784) != eax_26)
                                                                sub_4763e0(eax_25)
                                                            else
                                                                sub_475a20(eax_25, &data_571d90)
                                                            
                                                            sub_45e9a0(&data_5cd9fc)
                                                            data_5cd9fc = 0
                                                            sub_469210(1)
                                                        
                                                    labelid_2:
                                                        result.b = 1
                                                else
                                                    if (sub_468df0() == 0)
                                                        goto label_477ebc
                                                    
                                                    result = sub_468d70()
                                                    
                                                    if (result.b == 0)
                                                        goto label_477ebc
                                                    
                                                    if (data_5cea2c != 0)
                                                        uint32_t eax_20 = sub_476650()
                                                        void* eax_21 = sub_476260(eax_20)
                                                        void* eax_22 = sub_476520(eax_20)
                                                        
                                                        if (eax_21 != 0)
                                                            if (eax_22 != 0)
                                                                sub_476790(eax_21)
                                                            else
                                                                void* eax_23 = sub_476260(eax_21)
                                                                
                                                                if (eax_23 == 0)
                                                                    sub_476480()
                                                                else
                                                                    sub_476790(eax_23)
                                                        else
                                                            sub_476480()
                                                        
                                                        sub_45e9a0(&data_5cd9fc)
                                                        data_5cd9fc = 0
                                                        sub_469210(1)
                                                    
                                                labelid_2:
                                                    result.b = 1
                                            else
                                                if (sub_468df0() == 0)
                                                    goto label_477e35
                                                
                                                result = sub_468d70()
                                                
                                                if (result.b == 0)
                                                    goto label_477e35
                                                
                                                if (data_5cea2c == 0)
                                                labelid_2:
                                                    result.b = 1
                                                else
                                                    esi_1 = sub_476650()
                                                    void* eax_16 = sub_476260(esi_1)
                                                    int32_t* const var_30_1
                                                    
                                                    if (eax_16 != 0 && sub_4762f0(esi_1) == 0)
                                                        var_30_1 = &data_571d90
                                                        sub_476260(eax_16)
                                                    else
                                                    label_477fd9:
                                                        var_30_1 = &data_571d90
                                                    
                                                    sub_475a20(esi_1, var_30_1)
                                                label_477feb:
                                                    sub_45e9a0(&data_5cd9fc)
                                                    data_5cd9fc = 0
                                                    sub_469210(1)
                                                labelid_2:
                                                    result.b = 1
                                        else if (data_5cea2c != 1)
                                        labelid_2:
                                            result.b = 1
                                        else
                                            void* eax_10 = sub_469160(data_5cda2c)
                                            int32_t eax_11 = *(eax_10 + 0x69c)
                                            char* ecx_9
                                            
                                            if (eax_11 == 1)
                                                ecx_9 = *(*(eax_10 + 0x63c) * 0x208 + eax_10 + 0x104)
                                                
                                                if (ecx_9 != 0 && *(ecx_9 + 4) == 0x1d)
                                                label_477d60:
                                                    result = sub_4d52a0(ecx_9, 0)
                                                    goto label_477d65
                                                
                                            labelid_2:
                                                result.b = 1
                                            else if (eax_11 == 2)
                                                ecx_9 = *(*(eax_10 + 0x63c) * 0x208 + eax_10 + 0x19c)
                                            label_477d56:
                                                
                                                if (ecx_9 != 0)
                                                    goto label_477d60
                                                
                                            labelid_2:
                                                result.b = 1
                                            else
                                                if (eax_11 == 9)
                                                    ecx_9 = *(*(eax_10 + 0x63c) * 0x208 + eax_10 + 0xe4)
                                                    goto label_477d56
                                                
                                            labelid_2:
                                                result.b = 1
                                    else
                                        result = sub_4d51d0()
                                    label_477d65:
                                        
                                        if (result.b == 0)
                                        labelid_2:
                                            result.b = 1
                                        else
                                            sub_45e9a0(&data_5cd9fc)
                                        labelid_2:
                                            result.b = 1
                                else
                                    data_5cea34:1.w = 0
                                    
                                    if (data_5cea2c s> 0)
                                        data_5cea34.b = 1
                                    
                                labelid_2:
                                    result.b = 1
                            else
                                sub_4d18b0(ecx_6)
                            labelid_2:
                                result.b = 1
                        else
                            if (sub_468df0() == 0)
                                goto label_477c64
                            
                            char eax_4
                            char* ecx_5
                            eax_4, ecx_5 = sub_468d70()
                            
                            if (eax_4 == 0)
                                goto label_477c64
                            
                            sub_4d1c00(ecx_5)
                        labelid_2:
                            result.b = 1
                    else if (data_5cea2c s<= 0)
                    labelid_2:
                        result.b = 1
                    else
                        xmm1_5 = (zx.o(0)).d
                        int32_t var_1050_3 = 0xbf800000
                        int32_t var_104c_3 = 0
                        
                        if ((ecx[2].b & 1) == 0)
                            goto label_477bae
                        
                        int32_t var_1050_4 = 0xc1200000
                    label_477ba0:
                        float var_104c_5 = xmm1_5 f* 10f
                    label_477bae:
                        sub_46b290(ecx)
                        sub_469210(1)
                    labelid_2:
                        result.b = 1
                else if (data_5cea2c s<= 0)
                labelid_2:
                    result.b = 1
                else
                    int32_t var_1050_1 = 0x3f800000
                    int32_t var_104c_1 = 0
                    
                    if ((ecx[2].b & 1) == 0)
                        goto label_477bae
                    
                    int32_t var_1050_2 = 0x41200000
                    float var_104c_2 = 0f * 10f
                    sub_46b290(ecx)
                    sub_469210(1)
                labelid_2:
                    result.b = 1
            else
            label_477aa4:
                data_5cea34 = 0
                data_5cea36 = 0
            labelid_2:
                result.b = 1
        else if (result == 7)
            sub_476d60()
        labelid_2:
            result.b = 1
        else
            void var_1080
            float var_1068
            int128_t var_1038
            
            if (result == 0x19)
                char* eax_46 = ecx[6]
                char* edx_15 = &data_5559b1
                
                if (eax_46 != 0)
                    edx_15 = eax_46
                
                char* result_1
                sub_4a8d30(&result_1, edx_15)
                int32_t var_14_1 = 0
                char* result_5 = &data_5559b1
                char* result_3 = result_1
                
                if (result_3 != 0)
                    result_5 = result_3
                
                int32_t* eax_47 = sub_4d26e0(result_5)
                char* result_2
                sub_4767d0(&result_2, &ecx[6])
                var_14_1.b = 1
                result = sub_45d2e0(data_5cd9f8)
                
                if (eax_47[1] != 3)
                    var_14_1.b = 6
                    
                    if (data_cdf414 != 0)
                        result = result_2
                        
                        if (result != 0 && *result != 0)
                            result = sub_44f000(&result_2)
                            int32_t temp0_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_45d050(result, *(result + 0xc) + 0x10)
                                result_2 = &data_5559b1
                    
                    int32_t var_14_3 = 7
                    
                    if (data_cdf414 != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_44f000(&result_1)
                            int32_t temp2_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_45d050(result, *(result + 0xc) + 0x10)
                    
                    result.b = 0
                else
                    int32_t edi_7
                    
                    if (data_5cea2c != 0)
                        void* eax_49 = sub_45d320(sub_469160((&data_5cda2c)[data_5cda2c]))
                        *(eax_49 + 8) += 1
                        edi_7 = data_5cda2c + 1
                    else
                        edi_7 = *(result + 4)
                    
                    char* result_4 = result_2
                    char* result_6 = &data_5559b1
                    
                    if (result_4 != 0)
                        result_6 = result_4
                    
                    char* result_7 = result_6
                    sub_44f980(&var_105c, "img_%s")
                    var_14_1.b = 2
                    float eax_50
                    int32_t edx_17
                    eax_50, edx_17 = sub_432570(eax_47)
                    float var_1030_1 = eax_50
                    int32_t var_102c_1 = edx_17
                    sub_44edc0(&var_1068)
                    float xmm2_2 = 1f f/ data_5cda1c
                    int32_t* edx_18 = &var_1038:8
                    void var_1090
                    int128_t* var_30_8 = &var_1090
                    float var_1064
                    float xmm0_10 = var_1064 * xmm2_2 f+ data_5cda24
                    var_1068 = var_1068 * xmm2_2 f+ data_5cda20
                    float var_1064_1 = xmm0_10
                    int128_t* var_30_9 = &var_1080
                    var_1038 = *sub_45c380(&var_1090, edx_18, &var_1068, var_30_8)
                    int128_t* eax_54 = sub_47bc00(&var_1080, edx_18, &var_1038, var_30_9)
                    void* ecx_56 = data_e470e0
                    int32_t var_30_10 = 1
                    int128_t var_1048 = *eax_54
                    int32_t* eax_55 = sub_48c3c0(ecx_56, 0)
                    sub_4d2c20(eax_55, eax_55, result, edi_7, var_30_10)
                    int32_t* esi_8 = *result + edi_7 * 0xc
                    char* eax_57 = var_105c
                    char* ecx_59 = &data_5559b1
                    
                    if (eax_57 != 0)
                        ecx_59 = eax_57
                    
                    sub_4b8610(
                        sub_4b8610(sub_4b8610(eax_57, esi_8, &data_5b1d6c, 0x64, ecx_59), esi_8, 
                            &data_5b1d6c, 0x66, 1), 
                        esi_8, &data_5b1d6c, 0x80, eax_47)
                    sub_46b0a0(&var_1048, 0x71, esi_8, &var_1048)
                    var_14_1.b = 3
                    
                    if (data_cdf414 != 0)
                        char* eax_61 = var_105c
                        
                        if (eax_61 != 0 && *eax_61 != 0)
                            char* eax_62 = sub_44f000(&var_105c)
                            int32_t temp3_1 = *(eax_62 + 4)
                            *(eax_62 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_45d050(eax_62, *(eax_62 + 0xc) + 0x10)
                    
                    var_14_1.b = 1
                    data_5cda2c = edi_7
                    data_5cea2c = 1
                    sub_45e9a0(&data_5cd9fc)
                    sub_469210(1)
                    var_14_1.b = 8
                    
                    if (data_cdf414 != 0)
                        result = result_2
                        
                        if (result != 0 && *result != 0)
                            result = sub_44f000(&result_2)
                            int32_t temp4_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_45d050(result, *(result + 0xc) + 0x10)
                                result_2 = &data_5559b1
                    
                    int32_t var_14_2 = 9
                    
                    if (data_cdf414 != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_44f000(&result_1)
                            int32_t temp5_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_45d050(result, *(result + 0xc) + 0x10)
                    
                labelid_2:
                    result.b = 1
            else if (result != 3)
            labelid_2:
                result.b = 1
            else
                if (sub_44edc0(&var_1068) != 0)
                    struct InputHitResult::UI2HitResult::VTable** eax_65 =
                        sub_463570(&var_1068, data_5cda18, &var_1080, &var_1068)
                    data_5cda08 = eax_65[1]
                    data_5cda0c = eax_65[2]
                    data_5cda10 = eax_65[3]
                    data_5cda14 = eax_65[4]
                
                if (sub_414c10(&data_5cda04, &data_5c7c1c).b == 0)
                labelid_2:
                    result.b = 1
                else
                    data_5cea38 = 0xffffffff
                    data_5cea3c = 0xffffffff
                    int32_t var_1030
                    int32_t var_102c
                    
                    if (sub_46ba70() != 0)
                        data_64f848 = 1
                        data_64f84c = 1
                        sub_44edc0(&var_1038:8)
                        data_64f850 = var_1030
                        data_64f854 = var_102c
                        data_64f860 = 0
                        data_64f858 = var_1030
                        data_64f85c = var_102c
                    labelid_2:
                        result.b = 1
                    else if (data_5cea34.b != 0 || data_5cea36 != 0)
                    label_478a20:
                        sub_4754a0()
                    label_478a25:
                        result.b = 1
                    else
                        int32_t edi_9
                        int32_t edi_10
                        
                        if (data_5cd9fc != 0)
                            sub_44edc0(&var_1038:8)
                            edi_9 = data_5cd9f0
                            edi_10 = edi_9 - 1
                        
                        if (data_5cd9fc != 0 && edi_9 - 1 s>= 0)
                            void* esi_11 = (edi_10 << 4) + &data_5c99f0
                            
                            while (true)
                                void* edx_34 = *esi_11
                                int32_t var_104c_9 = edi_10
                                
                                if (*(edx_34 + 0xa) == 0 && *(edx_34 + 0xb) == 0)
                                    void* ecx_79 = *(edx_34 + 0x784)
                                    char eax_68
                                    
                                    if (ecx_79 != 0)
                                        eax_68 = sub_469560(ecx_79)
                                    
                                    if (ecx_79 == 0 || eax_68 != 0)
                                        int32_t eax_69 = *(edx_34 + 0x63c) * 0x208
                                        float xmm3_1 = *(edx_34 + 0x6cc)
                                        float xmm2_3 = *(edx_34 + 0x6d0)
                                        float xmm1_12 = *(edx_34 + 0x6d4) - xmm3_1
                                        float xmm0_15 = *(edx_34 + 0x6d8) - xmm2_3
                                        float xmm5_3 = *(eax_69 + edx_34 + 0xcc) * xmm1_12 + xmm3_1
                                        float xmm6_3 = *(eax_69 + edx_34 + 0xd4) * xmm1_12 + xmm3_1
                                        float xmm4_3 = *(eax_69 + edx_34 + 0xd0) * xmm0_15 + xmm2_3
                                        float xmm1_15 = *(eax_69 + edx_34 + 0xd8) * xmm0_15 + xmm2_3
                                        
                                        if (xmm6_3 < xmm5_3 || xmm1_15 < xmm4_3)
                                            sub_44e4d0(eax_69, &data_5559b1, "RectIsNormalized(r)", 
                                                "c:\ax2017\engine\rect.cpp", 0xa4, "RectContains")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        
                                        if (not(var_1030 f< xmm5_3) && not(var_102c f< xmm4_3)
                                                && not(xmm6_3 f< var_1030) && not(xmm1_15 f< var_102c))
                                            float xmm0_17 = *(edx_34 + 0x750)
                                            xmm0_17 f- 0
                                            eax_69:1.b = (xmm0_17 == 0f ? 1 : 0) << 6
                                                | (is_unordered.d(xmm0_17, 0f) ? 1 : 0) << 2
                                                | (xmm0_17 < 0f ? 1 : 0)
                                            bool p_2 = unimplemented  {test ah, 0x44}
                                            
                                            if (p_2)
                                                int32_t esi_12 = *(edx_34 + 0x1004)
                                                result = sub_468df0()
                                                int32_t edi_13
                                                
                                                if (result.b == 0)
                                                    int32_t edx_35 = 0
                                                    
                                                    if (data_5cea2c s<= 0)
                                                    label_4789f6:
                                                        
                                                        if (sub_468db0() != 0 && data_5cea2c s> 0)
                                                            break
                                                        
                                                        sub_46e810(esi_12)
                                                        edi_13 = data_5cea2c
                                                        data_64f869 = 1
                                                    else
                                                        while (true)
                                                            if (esi_12 == 0)
                                                                sub_44e4d0(result, &data_5559b1, 
                                                                    "id != DATAID_NULL", 
                                                                    "c:\ax2017\engine\dataarray.h", 0x6c, 
                                                                    "DataArray<struct UI2>::DataArrayGet")
                                                                
                                                                if (IsDebuggerPresent() == 1)
                                                                    breakpoint
                                                                
                                                                sub_44e680()
                                                                noreturn
                                                            
                                                            uint32_t ecx_81 = zx.d(esi_12.w)
                                                            
                                                            if (ecx_81 u< data_5c99a4)
                                                                result = ecx_81 * 0x1008 + data_5c99a0
                                                                
                                                                if (*(result + 0x1004) == esi_12)
                                                                    result = (&data_5cda2c)[edx_35]
                                                                    edi_13 = data_5cea2c
                                                                    
                                                                    if (result == *
                                                                            (ecx_81 * 0x1008 + data_5c99a0 + 0x6a8))
                                                                        data_64f869 = 0
                                                                        break
                                                                    
                                                                    edx_35 += 1
                                                                    
                                                                    if (edx_35 s>= edi_13)
                                                                        goto label_4789f6
                                                                    
                                                                    continue
                                                            
                                                            sub_44e4d0(result, &data_5559b1, 
                                                                "DataArrayTryToGet(id) != NULL", 
                                                                "c:\ax2017\engine\dataarray.h", 0x6d, 
                                                                "DataArray<struct UI2>::DataArrayGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_44e680()
                                                            noreturn
                                                else
                                                    sub_46f040(esi_12)
                                                    edi_13 = data_5cea2c
                                                    data_64f869 = 1
                                                
                                                if (edi_13 s<= 0)
                                                    goto label_478a25_2
                                                
                                                break
                                
                                edi_10 -= 1
                                esi_11 -= 0x10
                                
                                if (var_104c_9 s<= 0)
                                    goto label_478972
                            
                            goto label_478a20
                        
                    label_478972:
                        cond:7_1 = sub_468df0().b != 0
                    label_478383:
                        
                        if (cond:7_1)
                        label_478a25_1:
                            result.b = 1
                        else
                        label_478389:
                            data_64f840
                            void* var_30_7 = 0x1018
                            char* var_34_5 = &data_5cda28
                            data_5cea2c = 0
                            sub_51d5b0(&(&data_5cda24)[data_64f840 * 0x407], var_34_5, var_30_7)
                        label_478a25_2:
                            result.b = 1
    else
        result.b = var_1051
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
