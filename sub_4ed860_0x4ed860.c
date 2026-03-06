// 函数名称: sub_4ed860
// 虚拟地址: 0x4ed860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4ed860(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* i = *arg2
    int32_t* i = *arg2
    
    while (i != 0)
        int32_t* i_9 = i
        i = i[4]
        sub_45d050(i_9, 0x18)
    
    arg2[2] = 0
    *arg2 = 0
    arg2[1] = 0
    int128_t* i_1 = *arg1
    
    while (i_1 != 0)
        int128_t* i_6 = i_1
        i_1 = i_1[1].d
        int32_t* eax_1 = sub_45cfa0(0x18)
        eax_1[3] += 1
        int32_t* ecx = *eax_1
        
        if (ecx == 0)
            sub_45ce30(eax_1)
            ecx = *eax_1
        
        *eax_1 = *ecx
        __builtin_memset(ecx, 0, 0x18)
        *ecx = *i_6
        ecx[5] = arg2[1]
        void* eax_5 = arg2[1]
        
        if (eax_5 == 0)
            *arg2 = ecx
        else
            *(eax_5 + 0x10) = ecx
        
        arg2[2] += 1
        arg2[1] = ecx
    
    int32_t* i_2 = arg2[3]
    
    while (i_2 != 0)
        int32_t* i_10 = i_2
        i_2 = i_2[2]
        sub_45d050(i_10, 0x10)
    
    arg2[5] = 0
    arg2[3] = 0
    arg2[4] = 0
    int32_t* i_3 = arg1[3]
    
    while (i_3 != 0)
        int32_t* i_7 = i_3
        i_3 = i_3[2]
        int32_t* eax_6 = sub_45cfa0(0x10)
        eax_6[3] += 1
        int32_t* ecx_2 = *eax_6
        
        if (ecx_2 == 0)
            sub_45ce30(eax_6)
            ecx_2 = *eax_6
        
        *eax_6 = *ecx_2
        *ecx_2 = zx.o(0)
        *ecx_2 = *i_7
        ecx_2[1] = i_7[1]
        ecx_2[3] = arg2[4]
        void* eax_11 = arg2[4]
        
        if (eax_11 == 0)
            arg2[3] = ecx_2
        else
            *(eax_11 + 8) = ecx_2
        
        arg2[5] += 1
        arg2[4] = ecx_2
    
    int32_t* i_4 = arg2[6]
    
    while (i_4 != 0)
        int32_t* i_11 = i_4
        i_4 = i_4[5]
        sub_45d050(i_11, 0x1c)
    
    int32_t* ecx_6 = arg1
    arg2[8] = 0
    arg2[6] = 0
    arg2[7] = 0
    int128_t* i_5 = ecx_6[6]
    
    if (i_5 != 0)
        do
            int128_t* i_8 = i_5
            i_5 = *(i_5 + 0x14)
            int32_t* eax_12 = sub_45cfa0(0x1c)
            eax_12[3] += 1
            int32_t* ecx_4 = *eax_12
            
            if (ecx_4 == 0)
                sub_45ce30(eax_12)
                ecx_4 = *eax_12
            
            *eax_12 = *ecx_4
            __builtin_memset(ecx_4, 0, 0x1c)
            *ecx_4 = *i_8
            ecx_4[4] = i_8[1].d
            ecx_4[6] = arg2[7]
            void* eax_17 = arg2[7]
            
            if (eax_17 == 0)
                arg2[6] = ecx_4
            else
                *(eax_17 + 0x14) = ecx_4
            
            arg2[8] += 1
            arg2[7] = ecx_4
        while (i_5 != 0)
        
        ecx_6 = arg1
    
    *(arg2 + 0x24) = *(ecx_6 + 0x24)
    arg2[0xb] = ecx_6[0xb]
    arg2[0xc] = ecx_6[0xc]
    arg2[0xd] = ecx_6[0xd]
    arg2[0xe] = ecx_6[0xe]
    arg2[0xf] = ecx_6[0xf]
    arg2[0x10] = ecx_6[0x10]
    arg2[0x11] = ecx_6[0x11]
    arg2[0x12] = ecx_6[0x12]
    arg2[0x13] = ecx_6[0x13]
    int32_t result = ecx_6[0x14]
    arg2[0x14] = result
    return result
}
