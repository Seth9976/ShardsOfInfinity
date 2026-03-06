// 函数名称: sub_4e82b0
// 虚拟地址: 0x4e82b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4e82b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_4ebf60(arg1 + 0x38, arg2)
    int32_t* eax = sub_4ebf60(arg1 + 0x38, arg2)
    
    if (*eax == 2)
        int32_t* eax_1 = *(arg1 + 8)
        return (*(*eax_1 + 0xd8))(eax_1, eax[8])
    
    sub_44e4d0(eax, &data_5559b1, "bufferData->mBufferType == DX11BUFFER_TEXTURE", 
        "c:\ax2017\engine\windows\windowsdx11.cpp", 0x301, 
        "Dx11GraphicsInterface::TextureBufferCreateMipmaps")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
