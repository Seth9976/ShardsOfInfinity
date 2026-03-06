// 函数名称: sub_4e79b0
// 虚拟地址: 0x4e79b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4e79b0(void* arg1, int32_t arg2, int32_t arg3, char arg4, char arg5)
{
    // 第一条实际指令: uint32_t var_34
    uint32_t var_34
    int32_t eax_1 = __security_cookie ^ &var_34
    int32_t eax_2 = arg3
    int32_t ebx
    ebx.b = arg5
    int32_t var_20 = 0
    int64_t var_14 = 0
    int32_t var_24 = eax_2
    int32_t var_1c = 2
    int32_t var_18 = 0
    int32_t var_48
    char const* const ecx
    
    if (ebx.b == 0)
        if (arg2 != 0)
            int32_t var_20_2 = 0
            goto label_4e7a2a
        
        char const* const var_44 = "Dx11GraphicsInterface::CreateIndexBuffer"
        var_48 = 0x1a2
        ecx = "pIndices"
    else
        int32_t var_20_1 = 2
        int32_t var_18_1 = 0x10000
    label_4e7a2a:
        int32_t* esi_1 = nullptr
        
        if (arg2 != 0)
            int64_t var_2c_1 = 0
            int32_t var_30
            esi_1 = &var_30
            var_30 = arg2
        
        int32_t* eax_3 = *(arg1 + 4)
        eax_2 = (*(*eax_3 + 0xc))(eax_3, &var_24, esi_1, &var_34)
        
        if (eax_2 s>= 0)
            uint32_t (* eax_4)[0x4] = sub_4ebea0(arg1 + 0x38)
            (*eax_4)[6] = var_34
            uint32_t ecx_3
            ecx_3.b = arg4
            *(eax_4 + 5) = ecx_3.b
            (*eax_4)[1].b = ebx.b
            *eax_4 = 1
            uint32_t result = (*eax_4)[0x92]
            @__security_check_cookie@4(eax_1 ^ &var_34)
            return result
        
        char const* const var_44_2 = "Dx11GraphicsInterface::CreateIndexBuffer"
        var_48 = 0x1b3
        ecx = "SUCCEEDED(hr)"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx, "c:\ax2017\engine\windows\windowsdx11.cpp", var_48, 
        "Dx11GraphicsInterface::CreateIndexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
