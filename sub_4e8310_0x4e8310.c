// 函数名称: sub_4e8310
// 虚拟地址: 0x4e8310
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4e8310(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: uint32_t result = arg2
    uint32_t result = arg2
    
    if (result != 0)
        uint32_t ecx = zx.d(result.w)
        
        if (ecx u< *(arg1 + 0x3c))
            int32_t* esi_2 = ecx * 0x24c + *(arg1 + 0x38)
            
            if (esi_2[0x92] == result)
                int32_t var_14
                char const* const ecx_1
                
                if (*esi_2 != 2)
                    char const* const var_10_1 = "Dx11GraphicsInterface::ReleaseTextureBuffer"
                    var_14 = 0x30e
                    ecx_1 = "bufferData->mBufferType == DX11BUFFER_TEXTURE"
                label_4e83c0:
                    sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\engine\windows\windowsdx11.cpp", 
                        var_14, "Dx11GraphicsInterface::ReleaseTextureBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (esi_2[2] != 0)
                    char const* const var_10_6 = "Dx11GraphicsInterface::ReleaseTextureBuffer"
                    var_14 = 0x30f
                    ecx_1 = "bufferData->mBufferPtr == NULL"
                    goto label_4e83c0
                
                int32_t* ecx_2 = esi_2[8]
                
                if (ecx_2 != 0)
                    (*(*ecx_2 + 8))(ecx_2)
                
                int32_t* ecx_3 = esi_2[0xc]
                
                if (ecx_3 != 0)
                    (*(*ecx_3 + 8))(ecx_3)
                
                int32_t* ecx_4 = esi_2[9]
                
                if (ecx_4 != 0)
                    (*(*ecx_4 + 8))(ecx_4)
                
                int32_t* ecx_5 = esi_2[7]
                
                if (ecx_5 != 0)
                    (*(*ecx_5 + 8))(ecx_5)
                
                result = zx.d(esi_2[0x92].w)
                int32_t ecx_6 = *(arg1 + 0x44)
                *(arg1 + 0x44) = result
                esi_2[0x92] = ecx_6
                *(arg1 + 0x48) -= 1
    
    return result
}
