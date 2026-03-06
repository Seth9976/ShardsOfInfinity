// 函数名称: sub_4e7c90
// 虚拟地址: 0x4e7c90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4e7c90(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_34 = arg2
    int32_t var_30 = arg3
    int32_t var_14 = 0
    int32_t var_2c = arg5
    int32_t var_28 = arg4
    int32_t eax_5 = sub_4e7c30(arg6)
    int32_t var_24 = eax_5
    int32_t var_20 = 1
    int32_t var_1c = 0
    int32_t var_18 = 0
    int32_t var_10 = 0
    char var_c = 0
    int32_t var_48
    char const* const ecx_1
    
    if (arg7 == 0)
        if (arg4 == 1)
            int32_t var_14_1 = 8
            
            if (*(data_65ae00 + 0x21) != 0 && arg5 == 1)
                int32_t var_14_2 = 0x28
                int32_t var_2c_1 = 0
                var_c = 1
            
            goto label_4e7dea
        
        char const* const var_44 = "Dx11GraphicsInterface::CreateTextureBuffer"
        var_48 = 0x226
        ecx_1 = "depth == 1"
    else if (arg7 == 1)
        eax_5 = arg3
        
        if (arg2 == eax_5)
            if (arg4 == 6)
                int32_t var_14_3 = 8
                var_c = 4
                goto label_4e7dea
            
            char const* const var_44_2 = "Dx11GraphicsInterface::CreateTextureBuffer"
            var_48 = 0x234
            ecx_1 = "depth == 6"
        else
            char const* const var_44_1 = "Dx11GraphicsInterface::CreateTextureBuffer"
            var_48 = 0x233
            ecx_1 = "width == height"
    else if (arg7 == 2)
        char const* const var_44_3 = "Dx11GraphicsInterface::CreateTextureBuffer"
        var_48 = 0x23b
        ecx_1 = "Halt"
    else if (arg7 != 3)
        if (arg7 == 4)
            goto label_4e7de0
        
        if (arg7 == 5)
            int32_t var_20_1 = *(arg1 + 0x60)
            int32_t var_14_5 = 0x20
            goto label_4e7dea
        
        if (arg7 == 6)
            int32_t var_20_2 = *(arg1 + 0x60)
        label_4e7de0:
            int32_t var_14_6 = 0x40
            goto label_4e7dea
        
        char const* const var_44_16 = "Dx11GraphicsInterface::CreateTextureBuffer"
        var_48 = 0x251
        ecx_1 = "Halt"
    else
        int32_t var_14_4 = 0x28
    label_4e7dea:
        uint32_t (* eax_9)[0x4] = sub_4ebea0(arg1 + 0x38)
        *eax_9 = 2
        int32_t* edx_1 = *(arg1 + 4)
        eax_5 = (*(*edx_1 + 0x14))(edx_1, &var_34, 0, &(*eax_9)[7])
        
        if (eax_5 s< 0)
            char const* const var_44_5 = "Dx11GraphicsInterface::CreateTextureBuffer"
            var_48 = 0x258
            ecx_1 = "SUCCEEDED(hr)"
        else if (arg7 == 4 || arg7 == 6)
            int32_t* ecx_8 = *(arg1 + 4)
            eax_5 = (*(*ecx_8 + 0x28))(ecx_8, (*eax_9)[7], 0, &(*eax_9)[9])
            
            if (eax_5 s>= 0)
            label_4e7edf:
                uint32_t result = (*eax_9)[0x92]
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            char const* const var_44_15 = "Dx11GraphicsInterface::CreateTextureBuffer"
            var_48 = 0x25d
            ecx_1 = "SUCCEEDED(hr)"
        else
            int32_t* edx_2 = *(arg1 + 4)
            int32_t ecx_4 = *edx_2
            
            if (arg7 != 3)
                uint32_t ebx_1 = (*eax_9)[7]
                
                if (arg7 != 5)
                    eax_5 = (*(ecx_4 + 0x1c))(edx_2, ebx_1, 0, &eax_9[2])
                    
                    if (eax_5 s>= 0)
                        if ((var_c & 1) != 0)
                            *(eax_9 + 6) = 1
                        
                        goto label_4e7edf
                    
                    char const* const var_44_13 = "Dx11GraphicsInterface::CreateTextureBuffer"
                    var_48 = 0x26f
                    ecx_1 = "SUCCEEDED(hr)"
                else
                    eax_5 = (*(ecx_4 + 0x24))(edx_2, ebx_1, 0, &eax_9[3])
                    
                    if (eax_5 s>= 0)
                        goto label_4e7edf
                    
                    char const* const var_44_11 = "Dx11GraphicsInterface::CreateTextureBuffer"
                    var_48 = 0x26a
                    ecx_1 = "SUCCEEDED(hr)"
            else
                eax_5 = (*(ecx_4 + 0x24))(edx_2, (*eax_9)[7], 0, &eax_9[3])
                
                if (eax_5 s>= 0)
                    int32_t* ecx_5 = *(arg1 + 4)
                    eax_5 = (*(*ecx_5 + 0x1c))(ecx_5, (*eax_9)[7], 0, &eax_9[2])
                    
                    if (eax_5 s>= 0)
                        goto label_4e7edf
                    
                    char const* const var_44_9 = "Dx11GraphicsInterface::CreateTextureBuffer"
                    var_48 = 0x265
                    ecx_1 = "SUCCEEDED(hr)"
                else
                    char const* const var_44_7 = "Dx11GraphicsInterface::CreateTextureBuffer"
                    var_48 = 0x262
                    ecx_1 = "SUCCEEDED(hr)"
    
    sub_44e4d0(eax_5, &data_5559b1, ecx_1, "c:\ax2017\engine\windows\windowsdx11.cpp", var_48, 
        "Dx11GraphicsInterface::CreateTextureBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
