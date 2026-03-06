// 函数名称: sub_469590
// 虚拟地址: 0x469590
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_469590()
{
    // 第一条实际指令: if (data_5cea2c != 1)
    if (data_5cea2c != 1)
        return 
    
    HWND eax
    
    if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_65ae04 + 0x18) != 0)
        eax = GetFocus()
        
        if (eax != data_ce1790 && eax != 0)
            goto label_4695e3
        
        return 
    
    label_4695e3:
    
    if ((0x8000 & GetKeyState(0x12)) != 0 && *(data_65ae04 + 0x18) != 0)
        eax = GetFocus()
        
        if (eax != data_ce1790 && eax != 0)
            goto label_46960e
        
        return 
    
    label_46960e:
    int32_t var_c
    sub_44edc0(&var_c)
    int32_t edi_1 = data_5cda2c
    int32_t edi_2 = edi_1 - 1
    int32_t var_14 = var_c
    HWND var_8
    eax = var_8
    HWND var_10_1 = eax
    
    if (edi_1 - 1 s>= 0)
        int32_t temp1_1
        
        do
            eax = sub_4694c0(eax, data_5cd9fc, data_5cd9f8, edi_2)
            HWND esi_1 = eax
            
            if (esi_1->__offset(0xa).b == 0 && esi_1->__offset(0xb).b == 0)
                void* ecx_3 = esi_1
                
                if (ecx_3 != 0)
                    eax = sub_469560(ecx_3)
                
                if (ecx_3 == 0 || eax.b != 0)
                    eax = sub_4144c0(&esi_1[0x1b3], &var_14)
                    
                    if (eax.b != 0)
                        int32_t ecx_5 = esi_1
                        
                        if (ecx_5 == 0)
                            goto label_46967d
                        
                        uint32_t edx_3 = zx.d(ecx_5.w)
                        int32_t esi_2
                        
                        if (edx_3 u< data_5c99a4)
                            esi_2 = data_5c99a0
                            eax = edx_3 * 0x1008
                        
                        if (edx_3 u< data_5c99a4 && *(eax + esi_2 + 0x1004) == ecx_5)
                            data_5cda2c = *(edx_3 * 0x1008 + esi_2 + 0x6a8)
                            goto label_4696b3
                        
                        sub_44e4d0(eax, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
            
            temp1_1 = edi_2
            edi_2 -= 1
        while (temp1_1 - 1 s>= 0)
    
    label_46967d:
    
    if (data_5cea34.b != 0 || data_5cea36 != 0)
        return 
    
    data_5cea2c = 0
    label_4696b3:
    sub_51d5b0(&(&data_5cda24)[data_64f840 * 0x407], &data_5cda28, 0x1018)
}
