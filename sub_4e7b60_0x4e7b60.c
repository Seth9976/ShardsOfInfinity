// 函数名称: sub_4e7b60
// 虚拟地址: 0x4e7b60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4e7b60(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: uint32_t result = arg2
    uint32_t result = arg2
    
    if (result != 0)
        uint32_t ecx = zx.d(result.w)
        
        if (ecx u< *(arg1 + 0x3c))
            int32_t* esi_2 = ecx * 0x24c + *(arg1 + 0x38)
            
            if (esi_2[0x92] == result)
                if (*esi_2 != 1)
                    sub_44e4d0(result, &data_5559b1, "bufferData->mBufferType == DX11BUFFER_INDEX", 
                        "c:\ax2017\engine\windows\windowsdx11.cpp", 0x1d7, 
                        "Dx11GraphicsInterface::ReleaseIndexBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t* eax = esi_2[6]
                (*(*eax + 8))(eax)
                result = zx.d(esi_2[0x92].w)
                int32_t ecx_2 = *(arg1 + 0x44)
                *(arg1 + 0x44) = result
                esi_2[0x92] = ecx_2
                *(arg1 + 0x48) -= 1
    
    return result
}
