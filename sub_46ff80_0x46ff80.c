// 函数名称: sub_46ff80
// 虚拟地址: 0x46ff80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_46ff80(int32_t arg1 @ esi, char* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_542af6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    __alloca_probe(0x1058)
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_24 = eax_2
    int32_t var_2c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_22 = arg2
    char* result_6 = sub_46f400(*arg2)
    int32_t result_3
    sub_44f240(&result_3, "stateValue")
    char* result_9 = result_3
    char* const result_28 = &data_5559b1
    char* const result_16 = &data_5559b1
    char* result = result_6
    
    if (result_9 != 0)
        result_16 = result_9
    
    char* result_1
    
    while (true)
        result_9.b = *result_16
        char temp0_1 = *result
        bool c_1 = result_9.b u< temp0_1
        bool z_1 = result_9.b == temp0_1
        char var_1055_1 = result_9.b
        result_9 = result_3
        
        if (z_1)
            if (var_1055_1 == 0)
                result_1 = nullptr
                break
            
            result_9.b = result_16[1]
            char temp1_1 = result[1]
            c_1 = result_9.b u< temp1_1
            bool z_2 = result_9.b == temp1_1
            char var_1055_2 = result_9.b
            result_9 = result_3
            
            if (z_2)
                result_16 = &result_16[2]
                result = &result[2]
                
                if (var_1055_2 != 0)
                    continue
                
                result_1 = nullptr
                break
        
        result = sbb.d(result, result, c_1) | 1
        result_1 = result
        break
    
    int32_t var_14_1 = 0
    
    if (data_cdf414 != 0 && result_9 != 0 && *result_9 != 0)
        result = sub_44f000(&result_3)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
            result_3 = &data_5559b1
    
    int32_t var_14_2 = 0xffffffff
    
    if (result_1 != 0)
        sub_44f240(&result_3, "propValue")
        result = result_3
        char* const result_5 = &data_5559b1
        
        if (result != 0)
            result_5 = result
        
        int32_t esi_1
        
        while (true)
            char edx_2 = *result_5
            char temp3_1 = *result_6
            bool c_2 = edx_2 u< temp3_1
            
            if (edx_2 == temp3_1)
                if (edx_2 == 0)
                    esi_1 = 0
                    break
                
                edx_2 = result_5[1]
                char temp4_1 = result_6[1]
                c_2 = edx_2 u< temp4_1
                
                if (edx_2 == temp4_1)
                    result_5 = &result_5[2]
                    result_6 = &result_6[2]
                    
                    if (edx_2 != 0)
                        continue
                    
                    esi_1 = 0
                    break
            
            esi_1 = sbb.d(result_6, result_6, c_2) | 1
            break
        
        int32_t var_14_3 = 1
        
        if (data_cdf414 != 0 && result != 0 && *result != 0)
            result = sub_44f000(&result_3)
            int32_t temp5_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp5_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
                result_3 = &data_5559b1
        
        int32_t var_14_4 = 0xffffffff
        
        if (esi_1 == 0)
            char* result_26 = result_22
            
            if (data_5cea2c s<= 0)
                sub_44e4d0(result, &data_5559b1, "gUI2Editor.s.activeSetCount > 0", 
                    "c:\ax2017\engine\ui2.cpp", 0x254c, "UI2EditorCommit")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char* eax_6 = sub_469160(data_5cda2c)
            data_5cea38
            char* var_1050 = eax_6
            *(eax_6 + 0x1004)
            int32_t result_8 = sub_46e9d0()
            char* ecx_9 = var_1050
            result_3 = result_8
            *(ecx_9 + 0x64c) = 0
            result = sub_46b120(ecx_9, result_8)
            int32_t result_10 = result_3
            char* result_2 = result
            
            if (result_10 - 0x64 u<= 0x8e)
                uint32_t ecx_11 = zx.d(*(result_10 + 0x4708ac))
                uint32_t result_7
                uint32_t result_13
                int128_t var_1038
                char* result_4
                int32_t* ecx_16
                int32_t result_11
                
                switch (ecx_11)
                    case 0
                        result_22 = &data_5559b1
                        int32_t var_14_5 = 2
                        char* const ecx_13 = &data_5559b1
                        char* eax_7 = *(result_26 + 8)
                        
                        if (eax_7 != 0)
                            ecx_13 = eax_7
                        
                        char** eax_8 = sub_44f590(&result_22, ecx_13)
                        char* result_27 = result_22
                        
                        if (result_27 != 0)
                            result_28 = result_27
                        
                        sub_4b8610(eax_8, result_2, &data_5b1d6c, result_3, result_28)
                        result = sub_469210(1)
                        int32_t var_14_6 = 3
                        
                        if (data_cdf414 != 0 && result_27 != 0 && *result_27 != 0)
                            ecx_16 = &result_22
                        label_47087a:
                            result = sub_44f000(ecx_16)
                            int32_t temp8_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp8_1 == 1)
                                result = sub_45d050(result, *(result + 0xc) + 0x10)
                    case 1
                        char* result_35 = *(result_26 + 8)
                        var_1038:0xc.d = 0
                        
                        if (result_35 != 0)
                            result_28 = result_35
                        
                        var_1038:8.d = result_28
                        sub_4b8610(&var_1038:8, result_2, &data_5b1d6c, result_10, &var_1038:8)
                        result = sub_469210(1)
                    case 2
                        char* eax_20 = *(result_26 + 8)
                        char* const ecx_29 = &data_5559b1
                        
                        if (eax_20 != 0)
                            ecx_29 = eax_20
                        
                        char* const eax_21 = &data_5559b1
                        
                        while (true)
                            result_10.b = *ecx_29
                            char temp6_1 = *eax_21
                            bool c_3 = result_10.b u< temp6_1
                            
                            if (result_10.b == temp6_1)
                                if (result_10.b == 0)
                                    result = nullptr
                                    break
                                
                                result_10.b = ecx_29[1]
                                char temp7_1 = eax_21[1]
                                c_3 = result_10.b u< temp7_1
                                
                                if (result_10.b == temp7_1)
                                    ecx_29 = &ecx_29[2]
                                    eax_21 = &eax_21[2]
                                    
                                    if (result_10.b != 0)
                                        continue
                                    
                                    result = nullptr
                                    break
                            
                            result = sbb.d(eax_21, eax_21, c_3) | 1
                            break
                        
                        if (result != 0)
                            char* esi_2 = var_1050
                            result = sub_46af30(esi_2)
                            
                            if (result != 0)
                                int32_t var_30_13 = sub_44f2d0(&result_3, *result)
                                int32_t var_14_7 = 4
                                int32_t var_1028[0x3f9]
                                uint32_t result_18 = sub_46fcf0(esi_2, &var_1028)
                                result_13 = result_18
                                int32_t esi_3 = 0
                                
                                if (result_18 s> 0)
                                    do
                                        void* ecx_34 = var_1028[esi_3]
                                        var_1038:0xc.d = ecx_34
                                        
                                        if (sub_46ad40(ecx_34, &result_22[8]) == 0)
                                            void* eax_24 = sub_46ad40(var_1038:0xc.d, &result_3)
                                            var_1038:0xc.d = eax_24
                                            
                                            if (eax_24 != 0)
                                                char* edx_21 = &data_5559b1
                                                char* ecx_37 = *(result_22 + 8)
                                                
                                                if (ecx_37 != 0)
                                                    edx_21 = ecx_37
                                                
                                                sub_48b620(eax_24, edx_21)
                                        
                                        esi_3 += 1
                                    while (esi_3 s< result_13)
                                
                                sub_46fd80(var_1050, &result_22[8])
                                result = sub_469210(1)
                                int32_t var_14_8 = 5
                                
                                if (data_cdf414 != 0)
                                    result = result_3
                                    
                                    if (result != 0 && *result != 0)
                                        ecx_16 = &result_3
                                        goto label_47087a
                    case 3
                        char* result_38 = *(result_26 + 8)
                        
                        if (result_38 != 0)
                            result_28 = result_38
                        
                        char* const result_29 = result_28
                        result = sub_46fe20(result, result, var_1050, result_10, data_5cea38)
                    case 4
                        char* result_34 = *(result_26 + 8)
                        var_1038 = zx.o(0)
                        
                        if (result_34 != 0)
                            result_28 = result_34
                        
                        void* var_30_9 = &var_1038:0xc
                        void* var_34_11 = &var_1038:8
                        void* var_38_6 = &var_1038:4
                        int128_t* var_3c_2 = &var_1038
                        result = sub_4529c0(&var_1038, result_10, ecx_11, result_28, " %f %f %f %f")
                        
                        if (result == 4)
                            result_11 = result_3
                            
                            if (result_11 != 0x79)
                                goto label_470564
                            
                            char* ecx_21 = var_1050
                            void var_1078
                            int32_t* var_30_10 = &var_1078
                            float var_1048[0x4] = *(*(ecx_21 + 0x63c) * 0x208 + ecx_21 + 0x14)
                            var_1038 = *sub_47bd20(&var_1078, &var_1048, &var_1038, var_30_10)
                            result = sub_414540(&var_1038, &data_571cf8)
                            
                            if (result.b == 0)
                                float xmm1_2 = var_1048[0]
                                float xmm3_2 = var_1048[2] - xmm1_2
                                float xmm2_1 = var_1048[1]
                                float xmm4_2 = var_1048[3] - xmm2_1
                                var_1038.d = (var_1038.d - xmm1_2) / xmm3_2
                                var_1038:4.d = (var_1038:4.d - xmm2_1) / xmm4_2
                                var_1038:8.d = (var_1038:8.d - xmm1_2) / xmm3_2
                                var_1038:0xc.d = (var_1038:0xc.d - xmm2_1) / xmm4_2
                            label_470564:
                                result = &var_1038
                                result_4 = &var_1038
                                goto label_4702a2
                    case 5
                        char* result_31 = *(result_26 + 8)
                        
                        if (result_31 != 0)
                            result_28 = result_31
                        
                        char** var_30_4 = &result_22
                        result = sub_4529c0(&result_22, result_10, ecx_11, result_28, &data_585a90)
                        
                        if (result == 1)
                            uint32_t result_21 = sub_414bc0(result_22, (zx.o(0)).d, 0x3f800000)
                            int32_t result_12 = result_3
                            result_13 = result_21
                            uint32_t result_17 = result_13
                            result_22 = result_21
                            sub_4b8610(result, result_2, &data_5b1d6c, result_12, result_17)
                            result = sub_469210(1)
                    case 6
                        char* result_32 = *(result_26 + 8)
                        result_22 = nullptr
                        
                        if (result_32 != 0)
                            result_28 = result_32
                        
                        char** var_30_5 = &result_22
                        result = sub_4529c0(&result_22, result_10, ecx_11, result_28, &data_585ac8)
                        
                        if (result == 1)
                            sub_4b8610(result, result_2, &data_5b1d6c, result_3, result_22)
                            result = sub_469210(1)
                    case 7
                        char* result_30 = *(result_26 + 8)
                        
                        if (result_30 != 0)
                            result_28 = result_30
                        
                        uint32_t* var_30_3 = &result_13
                        result = sub_4529c0(&result_13, result_10, ecx_11, result_28, &data_585a90)
                        
                        if (result == 1)
                            result_7 = result_13
                            result_4 = result_7
                        label_47029c:
                            result_11 = result_3
                        label_4702a2:
                            sub_4b8610(result, result_2, &data_5b1d6c, result_11, result_4)
                            result = sub_469210(1)
                    case 8
                        char* result_37 = *(result_26 + 8)
                        
                        if (result_37 != 0)
                            result_28 = result_37
                        
                        result = sub_495050(result_28)
                        
                        if (result != 0)
                            result = sub_48d5b0(result_28, result)
                            result_4 = result
                            goto label_47029c
                    case 9
                        char* result_33 = *(result_26 + 8)
                        
                        if (result_33 != 0)
                            result_28 = result_33
                        
                        var_1038:8.d = 0
                        void* var_30_7 = &var_1038:0xc
                        var_1038:0xc.d = 0
                        void* var_34_9 = &var_1038:8
                        result = sub_4529c0(&var_1038:8, result_10, ecx_11, result_28, " %f %f")
                        
                        if (result == 2)
                            sub_4b8610(&var_1038:8, result_2, &data_5b1d6c, result_3, &var_1038:8)
                            result = sub_469210(1)
                        else if (result == 1)
                            int32_t xmm0_3 = var_1038:8.d
                            var_1038:8.d = xmm0_3
                            var_1038:0xc.d = xmm0_3
                            sub_4b8610(&var_1038:8, result_2, &data_5b1d6c, result_3, &var_1038:8)
                            result = sub_469210(1)
                    case 0xa
                        char* result_36 = *(result_26 + 8)
                        
                        if (result_36 != 0)
                            result_28 = result_36
                        
                        char eax_18
                        int32_t ecx_25
                        int32_t edx_15
                        eax_18, ecx_25, edx_15 = sub_46f180(result_28, &var_1050)
                        
                        if (eax_18 != 0)
                        label_470721:
                            result = &var_1050
                            result_4 = &var_1050
                            goto label_47029c
                        
                        void* var_30_11 = &var_1038:0xc
                        uint32_t* var_34_12 = &result_13
                        uint32_t* var_38_7 = &result_7
                        char** var_3c_3 = &result_22
                        result = sub_4529c0(&result_22, edx_15, ecx_25, result_28, " %d %d %d %d")
                        
                        if (result == 4)
                            char* result_24 = result_22
                            
                            if (result_24 s< 0)
                                result_24 = nullptr
                            else if (result_24 s> 0xff)
                                result_24 = 0xff
                            
                            var_1050.b = result_24.b
                            uint32_t result_14 = result_7
                            
                            if (result_14 s< 0)
                                result_14 = 0
                            else if (result_14 s> 0xff)
                                result_14 = 0xff
                            
                            var_1050:1.b = result_14.b
                            uint32_t result_19 = result_13
                            
                            if (result_19 s< 0)
                                result_19 = 0
                            else if (result_19 s> 0xff)
                                result_19 = 0xff
                            
                            var_1050:2.b = result_19.b
                            int32_t ecx_26 = var_1038:0xc.d
                            
                            if (ecx_26 s>= 0)
                                if (ecx_26 s> 0xff)
                                    ecx_26 = 0xff
                                
                                result = &var_1050
                                var_1050:3.b = ecx_26.b
                                result_4 = &var_1050
                            else
                                result = &var_1050
                                var_1050:3.b = 0
                                result_4 = &var_1050
                            
                            goto label_47029c
                        
                        if (result == 3)
                            char* result_25 = result_22
                            
                            if (result_25 s< 0)
                                result_25 = nullptr
                            else if (result_25 s> 0xff)
                                result_25 = 0xff
                            
                            var_1050.b = result_25.b
                            uint32_t result_15 = result_7
                            
                            if (result_15 s< 0)
                                result_15 = 0
                            else if (result_15 s> 0xff)
                                result_15 = 0xff
                            
                            var_1050:1.b = result_15.b
                            uint32_t result_20 = result_13
                            
                            if (result_20 s>= 0)
                                var_1050:3.b = 0xff
                                
                                if (result_20 s> 0xff)
                                    result_20 = 0xff
                                
                                result = &var_1050
                                var_1050:2.b = result_20.b
                                result_4 = &var_1050
                            else
                                var_1050:3.b = 0xff
                                result = &var_1050
                                var_1050:2.b = 0
                                result_4 = &var_1050
                            
                            goto label_47029c
                        
                        if (result == 1)
                            char* result_23 = result_22
                            
                            if (result_23 s< 0)
                                result_23 = nullptr
                            else if (result_23 s> 0xff)
                                result_23 = 0xff
                            
                            var_1050.b = result_23.b
                            var_1050:1.b = result_23.b
                            var_1050:2.b = result_23.b
                            var_1050:3.b = 0xff
                            goto label_470721
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
