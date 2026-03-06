// 函数名称: sub_429140
// 虚拟地址: 0x429140
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_429140(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebx = arg2
    int32_t ebx = arg2
    int32_t* edi = arg3
    int32_t var_20 = ebx
    int32_t* var_14 = edi
    int32_t eax_2 = (ebx - edi) s>> 2
    int32_t var_10
    
    if (eax_2 s<= 0x20)
    label_4291e8:
        
        if (eax_2 s>= 2 && edi != ebx)
            eax_2 = &edi[1]
            int32_t esi_1 = eax_2
            var_10 = eax_2
            
            while (esi_1 != ebx)
                int32_t eax_10 = *esi_1
                int32_t* var_18_1 = esi_1
                
                if (arg5(eax_10, *edi) == 0)
                    int32_t* esi_2 = esi_1 - 4
                    
                    if (arg5(eax_10, *(esi_1 - 4)) != 0)
                        int32_t* edi_1 = var_18_1
                        char i
                        
                        do
                            *edi_1 = *esi_2
                            edi_1 = esi_2
                            int32_t var_34_8 = esi_2[-1]
                            esi_2 -= 4
                            i = arg5(eax_10, var_34_8)
                        while (i != 0)
                        ebx = var_20
                        var_18_1 = edi_1
                        edi = var_14
                    
                    eax_2 = eax_10
                    esi_1 = var_10
                    *var_18_1 = eax_2
                else
                    sub_51dd40(&edi[1], edi, esi_1 - edi)
                    eax_2 = eax_10
                    *edi = eax_2
                
                esi_1 += 4
                var_10 = esi_1
    else
        while (arg4 s> 0)
            sub_429350(eax_2, edi, &var_10, ebx, arg5)
            int32_t edx_3 = (arg4 s>> 1) + (arg4 s>> 2)
            arg4 = edx_3
            int32_t* var_c
            
            if (((var_10 - edi) & 0xfffffffc) s>= ((ebx - var_c) & 0xfffffffc))
                sub_429140(edx_3, arg5)
                ebx = var_10
                var_20 = ebx
            else
                sub_429140(edx_3, arg5)
                edi = var_c
                var_14 = edi
            
            eax_2 = (ebx - edi) s>> 2
            
            if (eax_2 s<= 0x20)
                goto label_4291e8
        
        if (eax_2 s<= 0x20)
            goto label_4291e8
        
        void* ebx_1 = ebx - edi
        int32_t i_3 = ebx_1 s>> 2
        
        for (void* i_1 = i_3 s>> 1; i_1 s> 0; i_1 -= 1)
            var_10 = edi[i_1 - 1]
            eax_2 = sub_4296f0(&var_10, i_1 - 1, edi, i_3, &var_10, arg5)
        
        if (i_3 s>= 2)
            int32_t i_2
            
            do
                if (i_3 s>= 2)
                    var_10 = *(edi + ebx_1 - 4)
                    *(edi + ebx_1 - 4) = *edi
                    int32_t eax_20 = (ebx_1 - 4) s>> 2
                    sub_4296f0(eax_20, nullptr, edi, eax_20, &var_10, arg5)
                
                ebx_1 -= 4
                i_2 = ebx_1 s>> 2
                i_3 = i_2
            while (i_2 s>= 2)
            
            return i_2
    return eax_2
}
