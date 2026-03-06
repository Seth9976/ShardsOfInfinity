// 函数名称: sub_4e76f0
// 虚拟地址: 0x4e76f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4e76f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_4ebf60(arg1 + 0x38, arg2)
    int32_t* eax = sub_4ebf60(arg1 + 0x38, arg2)
    int32_t var_1c
    char* ecx_1
    
    if (*eax != 1)
        char const* const var_18_1 = "Dx11GraphicsInterface::LockIndexBuffer"
        var_1c = 0x13b
        ecx_1 = "bufferData->mBufferType == DX11BUFFER_INDEX"
    else if (eax[1].b != 0)
        int32_t* eax_1 = *(arg1 + 8)
        int64_t var_10 = 0
        int32_t var_8_1 = 0
        eax = (*(*eax_1 + 0x38))(eax_1, eax[6], 0, 4, 0, &var_10)
        
        if (eax s>= 0)
            return var_10.d
        
        char const* const var_18_4 = "Dx11GraphicsInterface::LockIndexBuffer"
        var_1c = 0x140
        ecx_1 = "SUCCEEDED(hr)"
    else
        char const* const var_18_2 = "Dx11GraphicsInterface::LockIndexBuffer"
        var_1c = 0x13c
        ecx_1 = "bufferData->mDynamic"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\engine\windows\windowsdx11.cpp", var_1c, 
        "Dx11GraphicsInterface::LockIndexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
