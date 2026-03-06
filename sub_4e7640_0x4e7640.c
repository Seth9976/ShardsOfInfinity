// 函数名称: sub_4e7640
// 虚拟地址: 0x4e7640
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4e7640(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_4ebf60(arg1 + 0x38, arg2)
    int32_t* eax = sub_4ebf60(arg1 + 0x38, arg2)
    int32_t* esi = eax
    int32_t var_20
    char* ecx_1
    
    if (*esi != 0)
        char const* const var_1c_1 = "Dx11GraphicsInterface::LockAppendVertexBuffer"
        var_20 = 0x12e
        ecx_1 = "bufferData->mBufferType == DX11BUFFER_VERTEX"
    else if (esi[1].b != 0)
        int32_t* eax_1 = *(arg1 + 8)
        int32_t var_8_1 = 0
        int64_t var_10 = 0
        eax = (*(*eax_1 + 0x38))(eax_1, esi[6], 0, 5, 0, &var_10)
        
        if (eax s>= 0)
            return esi[3] + var_10.d
        
        char const* const var_1c_4 = "Dx11GraphicsInterface::LockAppendVertexBuffer"
        var_20 = 0x133
        ecx_1 = "SUCCEEDED(hr)"
    else
        char const* const var_1c_2 = "Dx11GraphicsInterface::LockAppendVertexBuffer"
        var_20 = 0x12f
        ecx_1 = "bufferData->mDynamic"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\engine\windows\windowsdx11.cpp", var_20, 
        "Dx11GraphicsInterface::LockAppendVertexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
