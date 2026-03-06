// 函数名称: sub_4dccc0
// 虚拟地址: 0x4dccc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4dccc0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545a20
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18
    int32_t* var_30 = &var_18
    int32_t* var_14
    sub_42ce10(&var_14, arg1, 3)
    int32_t var_8_1 = 0
    int32_t* edi = var_18
    void* eax_3 = *edi
    int32_t* esi
    
    if (eax_3 != 0)
        int32_t* ecx_1 = *(eax_3 + 0x24)
        
        if (ecx_1 == 0)
            esi = edi[1]
            
            if (esi == 0)
                esi = sub_48f050(arg1)
                edi[1] = esi
            
            int32_t var_8_4 = 0xffffffff
            int32_t* eax_7 = var_14
            
            if (eax_7 != 0)
                eax_7[7] -= 1
                var_14 = nullptr
        else
            int32_t var_8_3 = 0xffffffff
            esi = sub_48f4d0(ecx_1)
            int32_t* ecx_2 = var_14
            
            if (ecx_2 != 0)
                ecx_2[7] -= 1
                var_14 = nullptr
    else
        int32_t var_8_2 = 0xffffffff
        int32_t* eax_4 = var_14
        
        if (eax_4 != 0)
            eax_4[7] -= 1
            var_14 = nullptr
        
        esi = nullptr
    
    int32_t** var_30_1 = &var_18
    sub_42ce10(&var_14, arg2, 3)
    int32_t var_8_5 = 1
    int32_t* ebx_1 = var_18
    void* eax_8 = *ebx_1
    int32_t* edi_1
    
    if (eax_8 != 0)
        int32_t* ecx_5 = *(eax_8 + 0x24)
        
        if (ecx_5 == 0)
            edi_1 = ebx_1[1]
            
            if (edi_1 == 0)
                edi_1 = sub_48f050(arg2)
                ebx_1[1] = edi_1
            
            int32_t var_8_8 = 0xffffffff
            int32_t* eax_12 = var_14
            
            if (eax_12 != 0)
                eax_12[7] -= 1
                var_14 = nullptr
        else
            int32_t var_8_7 = 0xffffffff
            edi_1 = sub_48f4d0(ecx_5)
            int32_t* ecx_6 = var_14
            
            if (ecx_6 != 0)
                ecx_6[7] -= 1
                var_14 = nullptr
    else
        int32_t var_8_6 = 0xffffffff
        int32_t* eax_9 = var_14
        
        if (eax_9 != 0)
            eax_9[7] -= 1
            var_14 = nullptr
        
        edi_1 = nullptr
    
    int32_t* eax_13 = sub_4dd530(data_ce26e8 + 0x4240, esi)
    int32_t* ecx_11 = data_ce26e8 + 0x4240
    var_18 = eax_13
    int32_t* eax_14 = sub_4dd530(ecx_11, edi_1)
    bool cond:0 = eax_13[0x38] == 0
    var_14 = eax_14
    
    if (cond:0)
        sub_44e4d0(eax_14, &data_5559b1, "bufferSource->mFrameBuffer", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x15a3, "OpenGLInterface::ResolveMSAA")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (eax_14[0x38] == 0)
        sub_44e4d0(eax_14, &data_5559b1, "bufferDest->mFrameBuffer", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x15a4, "OpenGLInterface::ResolveMSAA")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t params
    glGetIntegerv(0x8ca6, &params)
    int32_t* eax_15 = sub_454030(arg1)
    int32_t* eax_16 = sub_454030(arg2)
    int32_t* ecx_14 = *eax_15
    int32_t* eax_17 = *eax_16
    int32_t* edx = *ecx_14
    int32_t ebx_3 = ecx_14[1]
    int32_t edi_2 = *eax_17
    int32_t esi_2 = eax_17[1]
    (*__glewBindFramebuffer)(0x8ca8, var_18[0x38])
    (*__glewBindFramebuffer)(0x8ca9, var_14[0x38])
    (*__glewBlitFramebuffer)(0, 0, edx, ebx_3, 0, 0, edi_2, esi_2, 0x4000, 0x2600)
    int32_t result = (*__glewBindFramebuffer)(0x8d40, params)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
