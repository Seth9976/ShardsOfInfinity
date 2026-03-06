// 函数名称: sub_4dbf40
// 虚拟地址: 0x4dbf40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4dbf40(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax = sub_4dd530(arg1 + 0x4240, arg2)
    int32_t* eax = sub_4dd530(arg1 + 0x4240, arg2)
    int32_t* esi = eax
    int32_t var_14
    char* ecx_2
    
    if (arg3 s< 0 || arg3 s> esi[2])
        char const* const var_10_5 = "OpenGLInterface::UnlockVertexBuffer"
        var_14 = 0x13bf
        ecx_2 = "bytesUsed >= 0 && bytesUsed <= bufferData->mBufferSize"
    else
        void* ecx_1 = data_ce26e8
        int32_t eax_1 = *esi
        
        if (*(ecx_1 + 0x4090) != eax_1)
            *(ecx_1 + 0x4090) = eax_1
            (*__glewBindBuffer)(0x8892, eax_1)
            void* eax_3 = data_ce19c4
            *(eax_3 + 0x10) += 1
        
        eax = esi[0x36]
        
        if (eax != 0)
            int32_t result = (*__glewBufferSubData)(0x8892, 0, arg3, eax)
            
            if (esi[3].b == 0)
                result = esi[0x36]
                
                if (result != 0)
                    result = _aligned_free_base(result)
                
                esi[0x36] = 0
            
            return result
        
        char const* const var_10_2 = "OpenGLInterface::UnlockVertexBuffer"
        var_14 = 0x13d5
        ecx_2 = "bufferData->mBufferPtr"
    
    sub_44e4d0(eax, &data_5559b1, ecx_2, "c:\ax2017\engine\openglgraphics.cpp", var_14, 
        "OpenGLInterface::UnlockVertexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
