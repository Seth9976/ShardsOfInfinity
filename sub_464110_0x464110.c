// 函数名称: sub_464110
// 虚拟地址: 0x464110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_464110(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* esi = arg3
    int32_t* esi = arg3
    int32_t var_c = 0
    int32_t* var_10 = esi
    
    if (arg4 s<= 0)
        return 
    
    void* ebx_1 = arg2 + 0x14
    
    do
        int32_t edx = esi[1]
        int32_t ecx = 0
        int32_t* edi_1 = *esi
        int32_t* var_8_1 = edi_1
        
        if (edx s<= 0)
            goto label_464163
        
        arg1 = *(ebx_1 - 0x10)
        
        while (true)
            if (edi_1[1] == arg1)
                arg1 = *edi_1
                
                if (arg1 == *(ebx_1 - 0x14))
                    break
                
                arg1 = *(ebx_1 - 0x10)
            
            ecx += 1
            edi_1 = &edi_1[6]
            
            if (ecx s>= edx)
                goto label_464160
        
        if (edi_1 == 0)
        label_464160:
            edi_1 = var_8_1
        label_464163:
            
            if (edx s>= esi[2])
                sub_44e4d0(arg1, &data_5559b1, "mSize < mSizeReserved", "c:\ax2017\engine\xarray.h", 
                    0xa1, "XArray<struct UI2State>::Alloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t eax = edx * 3
            edi_1[eax * 2 + 1] = 0
            edi_1[eax * 2 + 3] = &data_5559b1
            esi[1] += 1
            edi_1 = *esi + ((esi[1] * 3 - 3) << 3)
        
        *edi_1 = *(ebx_1 - 0x14)
        edi_1[1] = *(ebx_1 - 0x10)
        edi_1[2] = *(ebx_1 - 0xc)
        sub_44f510(&edi_1[3], ebx_1 - 8)
        esi = var_10
        edi_1[4] = *(ebx_1 - 4)
        edi_1[5] = *ebx_1
        edi_1[5] = *ebx_1
        edi_1[5] = *ebx_1
        int32_t eax_10 = *ebx_1
        ebx_1 += 0x18
        edi_1[5] = eax_10
        arg1 = var_c + 1
        var_c = arg1
    while (arg1 s< arg4)
}
