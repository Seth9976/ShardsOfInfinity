// 函数名称: sub_44cb60
// 虚拟地址: 0x44cb60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_44cb60(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: _memset(&data_dfd4c8, 0, 0x2178)
    _memset(&data_dfd4c8, 0, 0x2178)
    data_dfeec8 = arg1
    data_dff63c = *(arg1 + 0x108)
    int32_t eax_1 = *(arg1 + 0xf8)
    char const* const var_34_3
    int32_t var_30
    char const* const var_2c_2
    uint32_t eax_2
    char* ecx_11
    
    if (eax_1 == 0)
    label_44cbda:
        data_dfee9c = *(arg1 + 0xf0)
        data_dff62c = *(arg1 + 0xec)
        sub_445e10()
        int32_t* eax_7 = data_dff634
        uint32_t ecx
        ecx.b = *(data_dfeec8 + 0x11c) != 0
        data_dff630 = ecx
        
        if (eax_7 != 0)
            if (*eax_7 != 0)
                ecx = 1
            
            data_dff630 = ecx
        
        int32_t var_2c = 0xffffffff
        sub_447230(eax_7, 0, ecx, 1)
        void* eax_8 = data_dfeec8
        int32_t i = 0
        
        if (*(eax_8 + 0xec) s> 0)
            int32_t edi_1 = 0
            int32_t ecx_1 = 0
            int32_t var_8_1 = 0
            
            do
                void* eax_9 = eax_8 + ecx_1 + 0x10
                void** esi_2 = *(eax_9 + 0x1c) * 0x9c + 0xdff320
                *esi_2 = eax_9
                uint32_t edx = *(eax_9 + 0x1c)
                esi_2[1] = edx
                esi_2[2] = 0x32
                uint32_t eax_10 = *(eax_9 + 0x1c)
                esi_2[3] = eax_10
                int32_t ecx_3 = data_dff634
                
                if (ecx_3 != 0)
                    eax_10 = *(edi_1 + ecx_3 + 0xfe0)
                    esi_2[3] = eax_10
                
                sub_445a20(sub_445a20(eax_10, 2, &data_dfd4c8, edx, 0, eax_10, 0, 0), 1, &data_dfd4c8, 
                    esi_2[1], 0, esi_2[2], 0, 0)
                eax_8 = data_dfeec8
                i += 1
                ecx_1 = var_8_1 + 0x2c
                edi_1 += 0xfa4
                var_8_1 = ecx_1
            while (i s< *(eax_8 + 0xec))
        
        int32_t ecx_5 = sub_445a20(eax_8, 3, &data_dfd4c8, 0xffffffff, 0, 0, 0, 0)
        void* eax_12 = data_dfeec8
        int32_t i_1 = 0
        
        if (*(eax_12 + 0xec) s> 0)
            int32_t esi_3 = 0
            
            do
                ecx_5 = sub_446de0(ecx_5, *(esi_3 + eax_12 + 0x2c))
                eax_12 = data_dfeec8
                esi_3 += 0x2c
                i_1 += 1
            while (i_1 s< *(eax_12 + 0xec))
        
        uint32_t eax_13
        uint32_t ecx_6
        eax_13, ecx_6 = sub_446f00()
        int32_t var_2c_1 = 0xffffffff
        sub_447230(eax_13, 2, ecx_6, 2)
        sub_44ca80()
        int32_t i_5 = 0
        
        if (*(data_dfeec8 + 0xec) s> 0)
            int32_t ecx_7 = 0
            int32_t var_14_1 = 0
            int32_t i_2
            
            do
                int32_t* eax_17 = data_dfeec8 + 0x2c + ecx_7
                uint32_t ecx_8 = data_dff634
                int32_t* var_8_2 = eax_17
                uint32_t edi_2 = *eax_17
                void* ebx_1 = edi_2 * 0x9c
                int32_t edx_2
                
                if (ecx_8 != 0 && *ecx_8 != 0)
                    eax_17 = edi_2 * 0xfa4
                    edx_2 = *(eax_17 + ecx_8 + 0x360)
                
                if (ecx_8 != 0 && *ecx_8 != 0 && (edx_2 != 0 || *(eax_17 + ecx_8 + 0x680) != edx_2))
                    void* ebx_3 = ecx_8 + 0x360 + edi_2 * 0xfa4
                    
                    if (edx_2 != 0)
                        int32_t j = *(edi_2 * 0xfa4 + ecx_8 + 0x360)
                        
                        do
                            int32_t* eax_20 = sub_44c9f0(j)
                            int32_t* eax_21 = sub_445e10()
                            int32_t eax_24 = (eax_21 - 0xdfd4cc) s>> 5
                            int32_t esi_4 = eax_21[6]
                            int32_t esi_6
                            
                            if (esi_4 == 0)
                                esi_6 = eax_24
                            else
                                esi_6 = esi_4 << 0x10 | eax_24
                            
                            eax_21[4] = eax_20
                            *eax_21 = 8
                            eax_21[1] = edi_2
                            eax_21[2] = 0
                            sub_445a20(sub_4461a0(eax_20, esi_6, &data_dfd4c8, 8, edi_2), 0, 
                                &data_dfd4c8, edi_2, esi_6, 8, 0, 0)
                            j = *(ebx_3 + 4)
                            ebx_3 += 4
                        while (j != 0)
                else
                    int32_t var_2c_4 = *(ebx_1 + 0xdff324)
                    sub_447230(eax_17, 1, ecx_8, 8)
                
                int32_t* ecx_12 = data_dff634
                int32_t eax_28 = *var_8_2
                
                if (ecx_12 == 0)
                label_44ce93:
                    uint32_t edi_3 = *(ebx_1 + 0xdff324)
                    int32_t j_5 = 5
                    int32_t j_1
                    
                    do
                        sub_446fe0(&data_dfd4c8, edi_3)
                        j_1 = j_5
                        j_5 -= 1
                    while (j_1 != 1)
                else
                    int32_t j_2 = *ecx_12
                    
                    if (j_2 == 0)
                        goto label_44ce93
                    
                    if (eax_28 == 0)
                        if (sub_44c9c0(ecx_12, eax_28 + 3) != 0)
                            goto label_44ce93
                    else if (eax_28 == 1 && sub_44c9c0(ecx_12, eax_28 + 3) != 0)
                        goto label_44ce93
                    
                    int32_t eax_39 = 0
                    
                    do
                        if (j_2 == 5)
                            goto label_44ce93
                        
                        j_2 = ecx_12[eax_39 + 1]
                        eax_39 += 1
                    while (j_2 != 0)
                
                int32_t* ecx_13 = data_dff634
                int32_t* ebx_4 = var_8_2
                
                if (ecx_13 != 0 && *ecx_13 != 0)
                    uint32_t edi_4 = *ebx_4
                    int32_t edx_6 = ecx_13[edi_4 * 0x3e9 + 0x268]
                    
                    if (edx_6 != 0)
                        void* ebx_6 = &ecx_13[0x268 + edi_4 * 0x3e9]
                        
                        if (edx_6 != 0)
                            int32_t j_3 = ecx_13[edi_4 * 0x3e9 + 0x268]
                            
                            do
                                int32_t* eax_33 = sub_44c9f0(j_3)
                                int32_t* eax_34 = sub_445e10()
                                int32_t eax_37 = (eax_34 - 0xdfd4cc) s>> 5
                                int32_t esi_7 = eax_34[6]
                                int32_t esi_9
                                
                                if (esi_7 == 0)
                                    esi_9 = eax_37
                                else
                                    esi_9 = esi_7 << 0x10 | eax_37
                                
                                eax_34[4] = eax_33
                                *eax_34 = 0xa
                                eax_34[1] = edi_4
                                eax_34[2] = 0
                                sub_445a20(
                                    sub_445a20(sub_4461a0(eax_33, esi_9, &data_dfd4c8, 0xa, edi_4), 0, 
                                        &data_dfd4c8, edi_4, esi_9, 0xa, 0, 0), 
                                    0xa, &data_dfd4c8, edi_4, esi_9, 0, 0, 0)
                                j_3 = *(ebx_6 + 4)
                                ebx_6 += 4
                            while (j_3 != 0)
                        
                        ebx_4 = var_8_2
                
                int32_t* ecx_16 = data_dff634
                
                if (ecx_16 != 0 && *ecx_16 != 0)
                    uint32_t edi_5 = *ebx_4
                    int32_t edx_9 = ecx_16[edi_5 * 0x3e9 + 0x1a0]
                    
                    if (edx_9 != 0)
                        void* ebx_8 = &ecx_16[0x1a0 + edi_5 * 0x3e9]
                        
                        if (edx_9 != 0)
                            int32_t j_4 = ecx_16[edi_5 * 0x3e9 + 0x1a0]
                            
                            do
                                int32_t* eax_46 = sub_44c9f0(j_4)
                                int32_t* eax_47 = sub_445e10()
                                int32_t eax_50 = (eax_47 - 0xdfd4cc) s>> 5
                                int32_t esi_10 = eax_47[6]
                                int32_t esi_12
                                
                                if (esi_10 == 0)
                                    esi_12 = eax_50
                                else
                                    esi_12 = esi_10 << 0x10 | eax_50
                                
                                eax_47[4] = eax_46
                                *eax_47 = 9
                                eax_47[1] = edi_5
                                eax_47[2] = 0
                                sub_445a20(
                                    sub_445a20(sub_4461a0(eax_46, esi_12, &data_dfd4c8, 9, edi_5), 0, 
                                        &data_dfd4c8, edi_5, esi_12, 9, 0, 0), 
                                    0xc, &data_dfd4c8, edi_5, esi_12, 0, 0, 0)
                                j_4 = *(ebx_8 + 4)
                                ebx_8 += 4
                            while (j_4 != 0)
                
                i_2 = i_5 + 1
                ecx_7 = var_14_1 + 0x2c
                i_5 = i_2
                var_14_1 = ecx_7
            while (i_2 s< *(data_dfeec8 + 0xec))
        
        int32_t* edx_12 = data_dff634
        void* i_4
        
        if (edx_12 != 0)
            i_4 = *edx_12
        
        if (edx_12 == 0 || i_4 == 0)
        label_44d104:
            
            for (uint32_t i_3 = 0; i_3 s< 6; i_3 += 1)
                i_4 = sub_446c60(&data_dfd4c8, i_3)
        else
            int32_t ecx_20 = 0
            
            do
                if (i_4 == 6)
                    goto label_44d104
                
                i_4 = edx_12[ecx_20 + 1]
                ecx_20 += 1
            while (i_4 != 0)
        
        sub_445a20(i_4, 0x1a, &data_dfd4c8, 0, 0, 0, 0, 0)
        eax_2 = sub_448410(&data_dfd4c8, 0)
        
        if (data_dfeecc == 1)
            data_dfeecc = 0
            *arg2 = 0xdfeed0
            data_dff630 = 0
            return &data_dfd4c8
        
        var_2c_2 = "ShYieldPop"
        var_30 = 0x485
        var_34_3 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
        ecx_11 = "g.numYlds == 1"
    else
        eax_2 = eax_1 - 1
        
        if (eax_2 u<= 4)
            int32_t eax_3
            
            switch (eax_2)
                case 0
                    eax_3 = 0x56c6f8
                case 1
                    eax_3 = 0x567560
                case 2
                    eax_3 = 0x5623c8
                case 3
                    eax_3 = 0x55d230
                case 4
                    eax_3 = 0x558098
            
            data_dff634 = eax_3
            goto label_44cbda
        
        var_2c_2 = "GetCampaign"
        var_30 = 0x1fb
        var_34_3 = "c:\ax2017\jams\shards\code\shardstutorial.cpp"
        ecx_11 = "Halt"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx_11, var_34_3, var_30, var_2c_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
