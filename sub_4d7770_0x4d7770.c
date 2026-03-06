// 函数名称: sub_4d7770
// 虚拟地址: 0x4d7770
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_4d7770(void* arg1, int32_t* arg2, uint32_t arg3, uint32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541c78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_4dd530(arg1 + 0x4240, arg3)
    
    if (eax_3[4] != 0)
        sub_44e4d0(eax_3, &data_5559b1, "bufferData->mIsLoading == 0", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x5a4, "OpenGLInterface::UnlockTextureBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t texture_1 = *eax_3
    (*__glewUnmapBuffer)(0x88ec)
    int32_t* var_14
    int32_t* var_30_1 = &var_14
    int32_t* result_1
    sub_42ce10(&result_1, arg2, 3)
    int32_t var_8_1 = 0
    int32_t* eax_5 = var_14
    int32_t* edi = *eax_5
    int32_t ecx_4 = edi[3] * arg5 + arg4
    
    if (ecx_4 s>= edi[0xd])
        sub_44e4d0(eax_5, &data_5559b1, "imageIndex < pTextureData->imageCount", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x5b3, "OpenGLInterface::UnlockTextureBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi_1 = eax_3[0x51]
    var_14 = edi[0xf] + (ecx_4 << 3)
    uint32_t width = divu.dp.d(0:(*edi), esi_1) u>> arg4.b
    
    if (width u< 1)
        width = 1
    
    uint32_t eax_12 = divu.dp.d(0:(edi[1]), esi_1) u>> arg4.b
    
    if (eax_12 u< 1)
        eax_12 = 1
    
    arg2 = eax_12
    void* eax_13 = sub_4d7530(edi[5])
    int32_t eax_14 = edi[6]
    
    if (eax_14 != 0)
        if (eax_14 != 1)
            sub_44e4d0(eax_14, &data_5559b1, "Halt", "c:\ax2017\engine\openglgraphics.cpp", 0x5df, 
                "OpenGLInterface::UnlockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_4d6a30(texture_1, 0)
        glTexImage2D(*((arg5 << 2) + &data_572bd8), arg4, *(eax_13 + 4), width, arg2, 0, *(eax_13 + 8), 
            *(eax_13 + 0xc), nullptr)
    else
        void* eax_15 = data_ce26e8
        uint32_t texture = texture_1
        
        if (*(eax_15 + 0x409c) != texture)
            *(eax_15 + 0x409c) = texture
            
            if (*(eax_15 + 0x4098) != 0)
                *(eax_15 + 0x4098) = 0
                (*__glewActiveTexture)(0x84c0)
                texture = texture_1
            
            glBindTexture(0xde1, texture)
        
        int32_t eax_17 = edi[5]
        
        if (eax_17 s< 0xd || (eax_17 s> 0x12 && eax_17 != 0x15))
            glTexImage2D(0xde1, arg4, *(eax_13 + 4), width, arg2, 0, *(eax_13 + 8), *(eax_13 + 0xc), 
                nullptr)
        else
            (*__glewCompressedTexImage2D)(0xde1, arg4, *(eax_13 + 4), width, arg2, 0, *var_14, 0)
        
        if (*(data_65ae00 + 0x21) != 0 && edi[5] s< 0x6f)
            (*__glewGenerateMipmap)(0xde1)
    
    (*__glewBindBuffer)(0x88ec, 0)
    eax_3[0x36] = 0
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
