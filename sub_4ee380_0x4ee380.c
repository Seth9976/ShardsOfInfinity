// 函数名称: sub_4ee380
// 虚拟地址: 0x4ee380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4ee380(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_546310
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_6c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg1
    int32_t* var_44 = edi
    int32_t result = edi[1]
    int32_t ecx = 0
    int32_t var_30 = 0
    
    if (result s> 0)
        while (true)
            if (ecx s< 0 || ecx s>= result)
                sub_44e4d0(result, &data_5559b1, "index >= 0 && index < mSize", 
                    "c:\ax2017\engine\xarray.h", 0xc3, "XArray<struct XAsset *>::operator []")
                
                if (IsDebuggerPresent() != 1)
                    sub_44e680()
                    noreturn
                
                breakpoint
            
            int32_t* edi_1 = *(*edi + (ecx << 2))
            int32_t eax_4 = edi_1[1]
            int128_t var_58
            
            if (eax_4 == 3)
                int32_t eax_15 = arg2[1]
                int32_t var_5c_2 = 0xffffffff
                var_58 = zx.o(0)
                
                if (eax_15 s>= arg2[2])
                    sub_44e4d0(eax_15, &data_5559b1, "mSize < mSizeReserved", 
                        "c:\ax2017\engine\xarray.h", 0x96, "XArray<struct PackAsset>::Append")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t ecx_9 = eax_15 * 7
                int32_t eax_16 = *arg2
                *(eax_16 + (ecx_9 << 2)) = edi_1.o
                *(eax_16 + (ecx_9 << 2) + 0x10) = 0
                *(eax_16 + (ecx_9 << 2) + 0x18) = 0
                arg2[1] += 1
            else
                if (eax_4 != 0x12)
                    sub_44e4d0(eax_4, &data_5559b1, "Halt", "c:\ax2017\engine\editor\atlasmaker.cpp", 
                        0x44d, "AtlasMakerCalcImages")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* var_34
                int32_t* var_70_1 = &var_34
                int32_t* var_28
                sub_42ce10(&var_28, edi_1, 0x12)
                int32_t var_14_1 = 0
                void* eax_5 = var_34
                
                if (*(eax_5 + 0x14) == 0)
                    sub_44e4d0(eax_5, &data_5559b1, "pDefFont->layerCount", 
                        "c:\ax2017\engine\editor\atlasmaker.cpp", 0x405, "GlyphCount")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t eax_7 = *(*(eax_5 + 0x18) + 0x10)
                int32_t var_14_2 = 0xffffffff
                int32_t* eax_8 = var_28
                
                if (eax_8 != 0)
                    eax_8[7] -= 1
                    var_28 = nullptr
                
                void* var_38
                int32_t* var_70_2 = &var_38
                int32_t* var_2c
                sub_42ce10(&var_2c, edi_1, 0x12)
                int32_t var_14_3 = 1
                void* eax_9 = var_38
                int32_t ecx_3 = *(eax_9 + 0x14)
                int32_t var_40_1 = ecx_3
                
                if (ecx_3 == 0)
                    sub_44e4d0(eax_9, &data_5559b1, "pDefFont->layerCount", 
                        "c:\ax2017\engine\editor\atlasmaker.cpp", 0x40d, "GlyphLayerCount")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t var_14_4 = 0xffffffff
                int32_t* eax_10 = var_2c
                
                if (eax_10 != 0)
                    eax_10[7] -= 1
                    var_2c = nullptr
                
                int32_t edi_2 = 0
                
                if (ecx_3 s> 0)
                    int32_t eax_11 = eax_7
                    
                    do
                        int32_t edx = 0
                        
                        if (eax_11 s> 0)
                            int32_t eax_12 = arg2[1]
                            
                            do
                                int32_t var_5c_1 = edi_2
                                var_58.d = edx
                                
                                if (eax_12 s>= arg2[2])
                                    sub_44e4d0(eax_12, &data_5559b1, "mSize < mSizeReserved", 
                                        "c:\ax2017\engine\xarray.h", 0x96, 
                                        "XArray<struct PackAsset>::Append")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                edx += 1
                                int32_t ecx_6 = eax_12 * 7
                                int32_t eax_13 = *arg2
                                *(eax_13 + (ecx_6 << 2)) = edi_1.o
                                void* ecx_7 = eax_13 + (ecx_6 << 2)
                                *(ecx_7 + 0x10) = zx.o(0):8.q
                                int32_t var_48
                                *(ecx_7 + 0x18) = var_48
                                arg2[1] += 1
                                eax_12 = arg2[1]
                            while (edx s< eax_7)
                            
                            eax_11 = eax_7
                            ecx_3 = var_40_1
                        
                        edi_2 += 1
                    while (edi_2 s< ecx_3)
            edi = var_44
            ecx = var_30 + 1
            var_30 = ecx
            result = edi[1]
            
            if (ecx s>= result)
                break
            
            continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
