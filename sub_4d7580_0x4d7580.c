// 函数名称: sub_4d7580
// 虚拟地址: 0x4d7580
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4d7580(void* arg1, int32_t* arg2, int32_t arg3, char arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541c78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18
    int32_t* var_30 = &var_18
    int32_t* var_1c
    sub_42ce10(&var_1c, arg2, 3)
    int32_t var_8_1 = 0
    int32_t* edi = *var_18
    int32_t* eax_4 = sub_4dd530(arg1 + 0x4240, arg3)
    
    if (eax_4[0x36] != 0)
        sub_44e4d0(eax_4, &data_5559b1, "bufferData->mBufferPtr == 0", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x576, "OpenGLInterface::LockTextureBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (eax_4[4] != 0)
        sub_44e4d0(eax_4, &data_5559b1, "bufferData->mIsLoading == 0", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x577, "OpenGLInterface::LockTextureBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi_1 = eax_4[0x51]
    *arg6 = esi_1
    uint32_t edi_2 = divu.dp.d(0:(*edi), esi_1) u>> arg4
    
    if (edi_2 u< 1)
        edi_2 = 1
    
    uint32_t eax_11 = divu.dp.d(0:(edi[1]), esi_1) u>> arg4
    
    if (eax_11 u< 1)
        eax_11 = 1
    
    int32_t eax_12 = sub_4dd7f0(eax_11, eax_11, edi_2, edi[5])
    int32_t var_14
    (*__glewGenBuffers)(1, &var_14)
    (*__glewBindBuffer)(0x88ec, var_14)
    (*__glewBufferData)(0x88ec, eax_12, 0, 0x88e4)
    glPixelStorei(0xcf5, 1)
    eax_4[0x36] = (*__glewMapBuffer)(0x88ec, 0x88b9)
    eax_4[0x35] = var_14
    int32_t edx_5 = edi[5]
    
    if (edx_5 s< 0xd || (edx_5 s> 0x12 && edx_5 != 0x15))
        uint32_t eax_21 = *edi u>> arg4
        
        if (eax_21 u< 1)
            eax_21 = 1
        
        *arg5 = sub_4dd730(eax_21, edx_5)
    else
        *arg5 = 0
    
    int32_t* ecx_9 = var_1c
    int32_t result = eax_4[0x36]
    
    if (ecx_9 != 0)
        ecx_9[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
