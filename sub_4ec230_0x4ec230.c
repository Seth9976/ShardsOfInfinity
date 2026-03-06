// 函数名称: sub_4ec230
// 虚拟地址: 0x4ec230
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4ec230(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int16_t* i_2 = arg3[6]
    int16_t* i_2 = arg3[6]
    int32_t edi_1 = arg2 - 1 + arg3[2]
    uint32_t ebx = 0x40000000
    int32_t var_14 = 0x40000000
    int32_t* i_5 = edi_1 - mods.dp.d(sx.q(edi_1), arg3[2])
    void* var_24 = &arg3[6]
    int32_t* i_1 = i_5
    void* edi_2 = &arg3[6]
    uint32_t var_c = 0x40000000
    void* var_8 = nullptr
    int16_t* i_3 = i_2
    int32_t i = *arg3
    uint32_t ecx_2 = zx.d(*i_2)
    int32_t var_28
    uint32_t j_1
    
    if (i_1 + ecx_2 s> i)
        j_1 = 0
    else
        int32_t eax_5 = arg3[4]
        uint32_t eax_11
        
        do
            int32_t* var_3c_1 = &var_28
            uint32_t eax_6 = zx.d(ecx_2.w)
            uint32_t eax_7 = sub_4ec150(eax_6, i_2, ecx_2, eax_6, i_1)
            
            if (eax_5 != 0)
                if (arg5 + eax_7 s<= arg3[1])
                    int32_t eax_10 = var_28
                    
                    if (eax_7 s< ebx)
                    label_4ec2ce:
                        var_14 = eax_10
                        var_8 = edi_2
                        ebx = eax_7
                    else if (eax_7 == ebx && eax_10 s< var_14)
                        goto label_4ec2ce
            else if (eax_7 s< ebx)
                var_8 = edi_2
                ebx = eax_7
            
            i_1 = i_5
            edi_2 = &i_2[2]
            i_2 = *edi_2
            eax_11 = zx.d(*i_2)
            ecx_2 = eax_11
        while (eax_11 + i_1 s<= i)
        i_2 = i_3
        var_c = ebx
        
        if (var_8 == 0)
            j_1 = 0
        else
            j_1 = zx.d(**var_8)
    
    if (arg3[4] == 1)
        int16_t* i_4 = i_2
        int16_t* i_6 = i_4
        
        if (zx.d(*i_2) s< i_1)
            do
                i_2 = *(i_2 + 4)
            while (zx.d(*i_2) s< i_1)
            
            i_3 = i_2
        
        void* edi_3 = &i_4[2]
        int16_t* i_7 = *edi_3
        var_28 = arg3[1]
        uint32_t eax_19 = zx.d(*i_7)
        
        do
            uint32_t j = zx.d(*i_2) - i_1
            
            if (eax_19 s<= j)
                do
                    i_4 = i_7
                    var_24 = edi_3
                    i_7 = *(i_4 + 4)
                    i_6 = i_4
                    edi_3 = &i_4[2]
                while (zx.d(*i_7) s<= j)
            
            int32_t var_2c
            int32_t* var_3c_2 = &var_2c
            uint32_t eax_22 = sub_4ec150(&var_2c, i_4, i_4, j, i_1)
            
            if (arg5 + eax_22 s< var_28 && eax_22 s<= var_c)
                int32_t ecx_6 = var_2c
                
                if (eax_22 s< var_c || ecx_6 s< var_14)
                label_4ec395:
                    var_c = eax_22
                    j_1 = j
                    var_14 = ecx_6
                    var_8 = var_24
                else if (ecx_6 == var_14 && j s< j_1)
                    goto label_4ec395
            
            eax_19 = zx.d(*i_7)
            i_4 = i_6
            i_1 = i_5
            i_2 = *(i_3 + 4)
            i_3 = i_2
        while (i_2 != 0)
    
    arg4[2] = var_8
    *arg4 = j_1
    arg4[1] = var_c
    return arg4
}
