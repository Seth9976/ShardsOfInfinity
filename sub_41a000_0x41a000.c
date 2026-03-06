// 函数名称: sub_41a000
// 虚拟地址: 0x41a000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_41a000(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = data_e472fc
    int32_t eax = data_e472fc
    int32_t* edx = data_cdf448
    int32_t ecx_3
    
    if (eax == 0)
        ecx_3 = 0
    else
        uint32_t ecx = zx.d(eax.w)
        
        if (ecx u>= edx[1])
            ecx_3 = 0
        else
            int32_t* ecx_2 = ecx * 0x64 + *edx
            
            if (ecx_2[0x18] != eax)
                ecx_3 = 0
            else
                ecx_3 = *ecx_2
    
    if (ecx_3 != arg1)
        if (eax != 0)
            uint32_t ecx_4 = zx.d(eax.w)
            
            if (ecx_4 u< edx[1])
                void* ecx_6 = ecx_4 * 0x64 + *edx
                
                if (*(ecx_6 + 0x60) == eax)
                    *(ecx_6 + 0x2c) = *(data_cdf428 + 0x28)
                    int32_t eax_3 = *(ecx_6 + 0x3c)
                    *(ecx_6 + 0x30) = 0x3e99999a
                    *(ecx_6 + 0x34) = eax_3
                    *(ecx_6 + 0x38) = 0
                    *(ecx_6 + 0x28) = 1
        
        if (arg1 != 0)
            int32_t eax_4 = sub_482380(0x3e4ccccd)
            edx = data_cdf448
            data_e472fc = eax_4
    
    int32_t result = data_e472f8
    
    if (result != 0)
        int32_t esi_1 = edx[1]
        uint32_t ecx_8 = zx.d(result.w)
        
        if (ecx_8 u< esi_1)
            int32_t edi_1 = *edx
            int32_t* edx_1 = ecx_8 * 0x64
            
            if (*(edx_1 + edi_1 + 0x60) == result && *(edx_1 + edi_1) != 0 && ecx_8 u< esi_1)
                void* ecx_10 = ecx_8 * 0x64 + edi_1
                
                if (*(edx_1 + edi_1 + 0x60) == result)
                    *(ecx_10 + 0x2c) = *(data_cdf428 + 0x28)
                    result = *(ecx_10 + 0x3c)
                    *(ecx_10 + 0x30) = 0x3e99999a
                    *(ecx_10 + 0x34) = result
                    *(ecx_10 + 0x38) = 0
                    *(ecx_10 + 0x28) = 1
    
    return result
}
