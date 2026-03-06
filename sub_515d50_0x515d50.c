// 函数名称: sub_515d50
// 虚拟地址: 0x515d50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_515d50(int32_t arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t* ecx = __alloca_probe(0x1430)
    int32_t* ecx = __alloca_probe(0x1430)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    char var_1401 = 0
    int32_t* esi = *ecx
    uint32_t var_1410 = 0
    uint32_t var_1430 = 0
    int32_t var_141c = 0
    ecx[2] = 0
    ecx[1] = 0
    ecx[3] = 0
    char var_1402 = 0
    int32_t var_1428 = 0
    uint32_t var_142c = 0
    uint32_t var_1424 = 0
    int32_t var_1418 = 1
    
    if (sub_514b00(esi) != 0)
        while (true)
            uint32_t ebx_3 = (sub_50ecf0(esi) << 0x10) + sub_50ecf0(esi)
            uint32_t eax_6 = sub_50ecf0(esi)
            uint32_t ecx_6 = sub_50ecf0(esi) + (eax_6 << 0x10)
            char var_1420
            char var_418[0x3f4]
            var_417
            var_416
            var_415
            void* var_14
            
            if (ecx_6 == 0x504c5445)
                if (var_1418 != 0)
                    break
                
                if (ebx_3 u> 0x300)
                    break
                
                uint32_t ecx_52 = ebx_3 u/ 3
                var_1424 = ecx_52
                
                if (ecx_52 * 3 != ebx_3)
                    break
                
                int32_t edi_17 = 0
                
                if (ecx_52 != 0)
                    char* eax_55 = esi[0x2a]
                    
                    do
                        int32_t ecx_54 = esi[0x2b]
                        int32_t edx_13
                        
                        if (eax_55 u< ecx_54)
                            edx_13.b = *eax_55
                            eax_55 = &eax_55[1]
                            esi[0x2a] = eax_55
                        else if (esi[8] == 0)
                            edx_13.b = 0
                        else
                            sub_50ebb0(esi)
                            char* eax_56 = esi[0x2a]
                            ecx_54 = esi[0x2b]
                            edx_13.b = *eax_56
                            eax_55 = &eax_56[1]
                            esi[0x2a] = eax_55
                        
                        var_418[edi_17 << 2] = edx_13.b
                        
                        if (eax_55 u< ecx_54)
                            edx_13.b = *eax_55
                            eax_55 = &eax_55[1]
                            esi[0x2a] = eax_55
                        else if (esi[8] == 0)
                            edx_13.b = 0
                        else
                            sub_50ebb0(esi)
                            char* eax_57 = esi[0x2a]
                            ecx_54 = esi[0x2b]
                            edx_13.b = *eax_57
                            eax_55 = &eax_57[1]
                            esi[0x2a] = eax_55
                        
                        *(&var_417 + (edi_17 << 2)) = edx_13.b
                        
                        if (eax_55 u< ecx_54)
                            ecx_54.b = *eax_55
                            eax_55 = &eax_55[1]
                            esi[0x2a] = eax_55
                        else if (esi[8] == 0)
                            ecx_54.b = 0
                        else
                            ecx_54, edx_13 = sub_50ebb0(esi)
                            char* eax_58 = esi[0x2a]
                            ecx_54.b = *eax_58
                            eax_55 = &eax_58[1]
                            esi[0x2a] = eax_55
                        
                        *(&var_416 + (edi_17 << 2)) = ecx_54.b
                        *(&var_415 + (edi_17 << 2)) = 0xff
                        edi_17 += 1
                    while (edi_17 u< ecx_52)
                
            label_5164c7:
                sub_50ecf0(esi)
                sub_50ecf0(esi)
                continue
            else if (ecx_6 == 0x74524e53)
                if (var_1418 != 0)
                    break
                
                if (ecx[1] != 0)
                    break
                
                if (var_1401 == 0)
                    int32_t ecx_42 = esi[2]
                    
                    if ((ecx_42.b & 1) == 0)
                        break
                    
                    if (ebx_3 != ecx_42 * 2)
                        break
                    
                    int32_t i = 0
                    var_1402 = 1
                    
                    if (ecx[4] != 0x10)
                        if (ecx_42 s> 0)
                            do
                                (&var_1420)[i] = sub_50ecf0(esi) * *(ecx[4] + 0x572dbc)
                                i += 1
                            while (i s< esi[2])
                            
                            sub_50ecf0(esi)
                            sub_50ecf0(esi)
                            continue
                    else if (ecx_42 s> 0)
                        do
                            *(&var_14 + (i << 1)) = sub_50ecf0(esi)
                            i += 1
                        while (i s< esi[2])
                        
                        sub_50ecf0(esi)
                        sub_50ecf0(esi)
                        continue
                else
                    if (var_1424 == 0)
                        break
                    
                    if (ebx_3 u> var_1424)
                        break
                    
                    int32_t edi_16 = 0
                    var_1401 = 4
                    
                    if (ebx_3 != 0)
                        do
                            char* eax_44 = esi[0x2a]
                            
                            if (eax_44 u< esi[0x2b])
                                ecx_6.b = *eax_44
                                esi[0x2a] = &eax_44[1]
                            else if (esi[8] == 0)
                                ecx_6.b = 0
                            else
                                sub_50ebb0(esi)
                                char* eax_46 = esi[0x2a]
                                ecx_6.b = *eax_46
                                esi[0x2a] = &eax_46[1]
                            
                            *(&var_415 + (edi_16 << 2)) = ecx_6.b
                            edi_16 += 1
                        while (edi_16 u< ebx_3)
                        
                        sub_50ecf0(esi)
                        sub_50ecf0(esi)
                        continue
                
                goto label_5164c7
            
            if (ecx_6 == 0x49484452)
                if (var_1418 == 0)
                    break
                
                var_1418 = 0
                
                if (ebx_3 != 0xd)
                    break
                
                uint32_t eax_21 = sub_50ecf0(esi)
                uint32_t eax_23 = sub_50ecf0(esi) + (eax_21 << 0x10)
                *esi = eax_23
                
                if (eax_23 u> 0x1000000)
                    break
                
                uint32_t eax_24 = sub_50ecf0(esi)
                uint32_t eax_26 = sub_50ecf0(esi) + (eax_24 << 0x10)
                esi[1] = eax_26
                
                if (eax_26 u> 0x1000000)
                    break
                
                char* eax_27 = esi[0x2a]
                char ecx_20
                
                if (eax_27 u< esi[0x2b])
                    ecx_20 = *eax_27
                    esi[0x2a] = &eax_27[1]
                else if (esi[8] == 0)
                    ecx_20 = 0
                else
                    sub_50ebb0(esi)
                    char* eax_29 = esi[0x2a]
                    ecx_20 = *eax_29
                    esi[0x2a] = &eax_29[1]
                
                uint32_t eax_31 = zx.d(ecx_20)
                ecx[4] = eax_31
                
                if (eax_31 != 1 && eax_31 != 2 && eax_31 != 4 && eax_31 != 8 && eax_31 != 0x10)
                    break
                
                char* eax_32 = esi[0x2a]
                
                if (eax_32 u< esi[0x2b])
                    ecx_20 = *eax_32
                    eax_32 = &eax_32[1]
                    esi[0x2a] = eax_32
                else if (esi[8] == 0)
                    ecx_20 = 0
                else
                    sub_50ebb0(esi)
                    char* eax_33 = esi[0x2a]
                    ecx_20 = *eax_33
                    eax_32 = &eax_33[1]
                    esi[0x2a] = eax_32
                
                uint32_t ecx_24 = zx.d(ecx_20)
                var_1430 = ecx_24
                
                if (ecx_24 u> 6)
                    break
                
                int32_t* ebx_5
                
                if (ecx_24 != 3)
                    if ((ecx_24.b & 1) != 0)
                        break
                    
                    ebx_5.b = var_1401
                else
                    if (ecx[4] == 0x10)
                        break
                    
                    ebx_5.b = ecx_24.b
                    var_1401 = ebx_5.b
                
                if (eax_32 u< esi[0x2b])
                    goto label_516126
                
                if (esi[8] != 0)
                    sub_50ebb0(esi)
                    eax_32 = esi[0x2a]
                label_516126:
                    ecx_24.b = *eax_32
                    eax_32 = &eax_32[1]
                    esi[0x2a] = eax_32
                    
                    if (ecx_24.b != 0)
                        break
                
                if (eax_32 u< esi[0x2b])
                    goto label_516152
                
                if (esi[8] != 0)
                    sub_50ebb0(esi)
                    eax_32 = esi[0x2a]
                label_516152:
                    ecx_24.b = *eax_32
                    eax_32 = &eax_32[1]
                    esi[0x2a] = eax_32
                    
                    if (ecx_24.b != 0)
                        break
                
                if (eax_32 u< esi[0x2b])
                    ecx_24.b = *eax_32
                    esi[0x2a] = &eax_32[1]
                else if (esi[8] == 0)
                    ecx_24.b = 0
                else
                    sub_50ebb0(esi)
                    char* eax_35 = esi[0x2a]
                    ecx_24.b = *eax_35
                    esi[0x2a] = &eax_35[1]
                
                uint32_t eax_37 = zx.d(ecx_24.b)
                var_1410 = eax_37
                
                if (eax_37 u> 1)
                    break
                
                int32_t ecx_27 = *esi
                
                if (ecx_27 == 0)
                    break
                
                int32_t edi_15 = esi[1]
                
                if (edi_15 == 0)
                    break
                
                uint32_t temp0_1 = divu.dp.d(0:0x40000000, ecx_27)
                
                if (ebx_5.b != 0)
                    esi[2] = 1
                    
                    if (temp0_1 u>> 2 u< edi_15)
                        break
                    
                    sub_50ecf0(esi)
                    sub_50ecf0(esi)
                    continue
                else
                    int32_t ecx_31 = ((var_1430 & 2) | 1) + (var_1430 u>> 2 & 1)
                    esi[2] = ecx_31
                    
                    if (divu.dp.d(0:temp0_1, ecx_31) u< edi_15)
                        break
                    
                    sub_50ecf0(esi)
                    sub_50ecf0(esi)
                    continue
            else if (ecx_6 == 0x43674249)
                var_141c = 1
                sub_50ec00(esi, ebx_3)
                sub_50ecf0(esi)
                sub_50ecf0(esi)
                continue
            else if (ecx_6 == 0x49444154)
                if (var_1418 != 0)
                    break
                
                if (var_1401 != 0 && var_1424 == 0)
                    break
                
                int32_t edi_10 = ebx_3 + var_1428
                
                if (edi_10 s< var_1428)
                    break
                
                uint32_t eax_16 = var_142c
                
                if (edi_10 u> eax_16)
                    if (eax_16 == 0)
                        eax_16 = 0x1000
                        
                        if (ebx_3 u> 0x1000)
                            eax_16 = ebx_3
                        
                        var_142c = eax_16
                    
                    if (edi_10 u> eax_16)
                        do
                            eax_16 *= 2
                        while (edi_10 u> eax_16)
                        
                        var_142c = eax_16
                    
                    var_14 = eax_16
                    int32_t var_18_1 = ecx[1]
                    int32_t eax_18 = sub_52383b()
                    
                    if (eax_18 == 0)
                        break
                    
                    ecx[1] = eax_18
                
                var_14 = ebx_3
                
                if (sub_50ec50(ecx, ecx[1] + var_1428, esi, var_14) == 0)
                    break
                
                var_1428 = edi_10
                sub_50ecf0(esi)
                sub_50ecf0(esi)
                continue
            else if (ecx_6 == 0x49454e44)
                if (var_1418 == 0)
                    int32_t ebx_4 = ecx[1]
                    
                    if (ebx_4 != 0)
                        void* edi_8 = (((*esi * ecx[4] + 7) u>> 3) * esi[2] + 1) * esi[1]
                        var_14 = edi_8
                        void* eax_9 = _malloc()
                        void* eax_14
                        
                        if (eax_9 == 0)
                            eax_14 = nullptr
                        else
                            int32_t var_13fc_1 = var_1428 + ebx_4
                            uint32_t edx_1
                            edx_1.b = var_141c == 0
                            int32_t var_1400 = ebx_4
                            void* var_13e8_1 = eax_9 + edi_8
                            int32_t var_13e4_1 = 1
                            
                            if (sub_514980(&var_1400, edx_1) == 0)
                                var_14 = eax_9
                                _free(var_14)
                                eax_14 = nullptr
                            else
                                eax_14 = eax_9
                                edi_8 = eax_9 - eax_14
                        
                        int32_t* ebx_8 = ecx
                        ebx_8[2] = eax_14
                        
                        if (eax_14 != 0)
                            var_14 = ebx_8[1]
                            _free(var_14)
                            ebx_8[1] = 0
                            void* ecx_59 = esi[2]
                            void* eax_59 = ecx_59 + 1
                            
                            if ((eax_59 != 0 || var_1401 != eax_59.b) && var_1402 == 0)
                                eax_59 = ecx_59
                            
                            var_14 = var_1410
                            esi[3] = eax_59
                            int32_t* eax_60
                            void* ecx_63
                            eax_60, ecx_63 = sub_515a30(eax_59, ebx_8[2], ebx_8, edi_8, eax_59, 
                                ebx_8[4], var_1430, var_14)
                            
                            if (eax_60 != 0)
                                if (var_1402 != 0)
                                    eax_60 = *ebx_8
                                    ecx_63 = ebx_8[3]
                                    int32_t i_8 = eax_60[1] * *eax_60
                                    
                                    if (ebx_8[4] != 0x10)
                                        if (i_8 != 0)
                                            if (esi[3] != 2)
                                                char var_141e
                                                eax_60.b = var_141e
                                                char var_141f
                                                ebx_8.b = var_141f
                                                eax_60:1.b = var_1420
                                                int32_t i_1
                                                
                                                do
                                                    if (*ecx_63 == eax_60:1.b
                                                            && *(ecx_63 + 1) == ebx_8.b
                                                            && *(ecx_63 + 2) == eax_60.b)
                                                        *(ecx_63 + 3) = 0
                                                    
                                                    ecx_63 += 4
                                                    i_1 = i_8
                                                    i_8 -= 1
                                                while (i_1 != 1)
                                            else
                                                ebx_8.b = var_1420
                                                int32_t i_2
                                                
                                                do
                                                    eax_60.b = *ecx_63 == ebx_8.b
                                                    eax_60.b -= 1
                                                    *(ecx_63 + 1) = eax_60.b
                                                    ecx_63 += 2
                                                    i_2 = i_8
                                                    i_8 -= 1
                                                while (i_2 != 1)
                                            
                                            ebx_8 = ecx
                                    else if (i_8 != 0)
                                        if (esi[3] != 2)
                                            eax_60.w = arg2.w
                                            int16_t edi_18 = var_14.w
                                            ebx_8.w = var_14.w
                                            int32_t i_3
                                            
                                            do
                                                if (*ecx_63 == ebx_8.w && *(ecx_63 + 2) == edi_18
                                                        && *(ecx_63 + 4) == eax_60.w)
                                                    *(ecx_63 + 6) = 0
                                                
                                                ecx_63 += 8
                                                i_3 = i_8
                                                i_8 -= 1
                                            while (i_3 != 1)
                                            ebx_8 = ecx
                                        else
                                            edi_8.w = var_14.w
                                            int32_t i_4
                                            
                                            do
                                                eax_60 = 0xffff
                                                
                                                if (*ecx_63 == edi_8.w)
                                                    eax_60 = nullptr
                                                
                                                *(ecx_63 + 2) = eax_60.w
                                                ecx_63 += 4
                                                i_4 = i_8
                                                i_8 -= 1
                                            while (i_4 != 1)
                                
                                int32_t* edi_19
                                
                                if (var_141c == 0 || data_ce26fc == 0)
                                    edi_19 = ecx
                                else
                                    edi_19 = ecx
                                    
                                    if (esi[3] s> 2)
                                        eax_60 = *ebx_8
                                        char* edx_16 = edi_19[3]
                                        char* var_141c_1 = edx_16
                                        int32_t i_9 = eax_60[1] * *eax_60
                                        int32_t i_10 = i_9
                                        
                                        if (i_9 != 0)
                                            if (eax_60[3] == 3)
                                                int32_t i_5
                                                
                                                do
                                                    ecx_63.b = *edx_16
                                                    edx_16 = &edx_16[3]
                                                    eax_60.b = edx_16[0xffffffff]
                                                    edx_16[0xfffffffd] = eax_60.b
                                                    edx_16[0xffffffff] = ecx_63.b
                                                    i_5 = i_9
                                                    i_9 -= 1
                                                while (i_5 != 1)
                                            else if (data_ce279c == 0)
                                                int32_t i_6
                                                
                                                do
                                                    ecx_63.b = *edx_16
                                                    edx_16 = &edx_16[4]
                                                    eax_60.b = edx_16[0xfffffffe]
                                                    edx_16[0xfffffffc] = eax_60.b
                                                    edx_16[0xfffffffe] = ecx_63.b
                                                    i_6 = i_9
                                                    i_9 -= 1
                                                while (i_6 != 1)
                                            else
                                                int32_t i_7
                                                
                                                do
                                                    eax_60:1.b = edx_16[3]
                                                    eax_60.b = *edx_16
                                                    ecx_63.b = edx_16[2]
                                                    char var_1409_1 = eax_60.b
                                                    char var_1411_1 = ecx_63.b
                                                    
                                                    if (eax_60:1.b != 0)
                                                        uint32_t ebx_10 = zx.d(eax_60:1.b)
                                                        uint32_t edi_21 = ebx_10 u>> 1
                                                        var_141c_1[1] = (divu.dp.d(
                                                            0:(zx.d(edx_16[1]) * 0xff + edi_21), 
                                                            ebx_10)).b
                                                        edx_16 = var_141c_1
                                                        i_9 = i_10
                                                        ecx_63.b = divu.dp.d(
                                                            0:(zx.d(var_1411_1) * 0xff + edi_21), 
                                                            ebx_10).b
                                                        eax_60.b = (divu.dp.d(
                                                            0:(zx.d(var_1409_1) * 0xff + edi_21), 
                                                            ebx_10)).b
                                                    
                                                    *edx_16 = ecx_63.b
                                                    edx_16[2] = eax_60.b
                                                    edx_16 = &edx_16[4]
                                                    i_7 = i_9
                                                    i_9 -= 1
                                                    var_141c_1 = edx_16
                                                    i_10 = i_9
                                                while (i_7 != 1)
                                                edi_19 = ecx
                                
                                eax_60.b = var_1401
                                
                                if (eax_60.b == 0)
                                    if (var_1402 != 0)
                                        esi[2] += 1
                                    
                                    goto label_51686f
                                
                                uint32_t ecx_65 = zx.d(eax_60.b)
                                esi[2] = ecx_65
                                esi[3] = ecx_65
                                int32_t* eax_71 = *edi_19
                                int32_t edi_23 = eax_71[1] * *eax_71
                                int32_t ebx_11 = ecx[3]
                                
                                if (edi_23 s>= 0
                                        && (ecx_65 == 0 || edi_23 s<= divu.dp.d(0:0x7fffffff, ecx_65)))
                                    var_14 = edi_23 * ecx_65
                                    void* eax_77 = _malloc()
                                    void* var_1410_1 = eax_77
                                    
                                    if (eax_77 != 0)
                                        void* esi_1 = nullptr
                                        
                                        if (ecx_65 != 3)
                                            if (edi_23 != 0)
                                                void* edx_23 = eax_77 + 2
                                                
                                                do
                                                    uint32_t ecx_67 = zx.d(*(esi_1 + ebx_11))
                                                    edx_23 += 4
                                                    esi_1 += 1
                                                    eax_77.b = var_418[ecx_67 << 2]
                                                    *(edx_23 - 6) = eax_77.b
                                                    eax_77.b = *(&var_417 + (ecx_67 << 2))
                                                    *(edx_23 - 5) = eax_77.b
                                                    eax_77.b = *(&var_416 + (ecx_67 << 2))
                                                    *(edx_23 - 4) = eax_77.b
                                                    eax_77.b = *(&var_415 + (ecx_67 << 2))
                                                    *(edx_23 - 3) = eax_77.b
                                                while (esi_1 u< edi_23)
                                        else if (edi_23 != 0)
                                            void* edx_22 = eax_77 + 2
                                            
                                            do
                                                uint32_t ecx_66 = zx.d(*(esi_1 + ebx_11))
                                                edx_22 += 3
                                                esi_1 += 1
                                                eax_77.b = var_418[ecx_66 << 2]
                                                *(edx_22 - 5) = eax_77.b
                                                eax_77.b = *(&var_417 + (ecx_66 << 2))
                                                *(edx_22 - 4) = eax_77.b
                                                eax_77.b = *(&var_416 + (ecx_66 << 2))
                                                *(edx_22 - 3) = eax_77.b
                                            while (esi_1 u< edi_23)
                                        
                                        edi_19 = ecx
                                        var_14 = edi_19[3]
                                        _free(var_14)
                                        edi_19[3] = var_1410_1
                                    label_51686f:
                                        var_14 = edi_19[2]
                                        _free(var_14)
                                        edi_19[2] = 0
                                        @__security_check_cookie@4(arg1 ^ &__saved_ebp)
                                        return 1
                
                break
            
            if (var_1418 != 0)
                break
            
            if ((ecx_6 & 0x20000000) == 0)
                (*"X PNG chunk not known")[0] = ecx_6.b
                (*"XXXX PNG chunk not known")[0] = (ecx_6 u>> 0x18).b
                (*"XXX PNG chunk not known")[0] = (ecx_6 u>> 0x10).b
                (*"XX PNG chunk not known")[0] = (ecx_6 u>> 8).b
                break
            
            sub_50ec00(esi, ebx_3)
            sub_50ecf0(esi)
            sub_50ecf0(esi)
    
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return 0
}
