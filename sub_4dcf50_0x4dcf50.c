// 函数名称: sub_4dcf50
// 虚拟地址: 0x4dcf50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4dcf50(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_545a48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t esi
    int32_t var_3c = esi
    int32_t edi
    int32_t var_40 = edi
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_28 = arg1
    arg1[0x1098].b = 1
    int32_t* eax_3 = *arg2
    
    if (eax_3 == 0)
        sub_4aa5d0(arg2, 0)
        eax_3 = *arg2
        
        if (eax_3 == 0)
            sub_48dac0(arg2)
            eax_3 = *arg2
    
    int32_t* ecx_2 = **eax_3
    int32_t eax_5 = *ecx_2
    double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_5)) f+ *((eax_5 u>> 0x1f << 3) + &data_59e4f0)
    int32_t eax_7 = ecx_2[1]
    float xmm1_1 = _mm_cvtpd_ps(xmm0_2) f* ecx_2[2]
    float xmm0_7 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_7)) f+ *((eax_7 u>> 0x1f << 3) + &data_59e4f0))
        f* ecx_2[2]
    arg1[8] = xmm1_1
    int32_t* var_24 = xmm0_7
    arg1[9] = xmm0_7
    int32_t var_34 = 0
    int32_t var_30 = int.d(sub_453f10(xmm1_1 + 0.5f))
    int32_t var_2c = int.d(sub_453f10(var_24 f+ 0.5f))
    (*(*var_28 + 0x58))(0.o)
    int128_t var_54_1
    var_54_1:8.d = &var_28
    var_54_1:4.d = 3
    var_54_1.d = arg2
    sub_42ce10(&var_24, var_54_1)
    int32_t var_14_1 = 0
    int32_t* esi_3 = var_28
    int32_t* ecx_5 = *esi_3
    int32_t* edx_2
    
    if (ecx_5 != 0)
        int32_t* ecx_6 = ecx_5[9]
        
        if (ecx_6 == 0)
            edx_2 = esi_3[1]
            
            if (edx_2 == 0)
                edx_2 = sub_48f050(arg2)
                esi_3[1] = edx_2
            
            int32_t var_14_4 = 0xffffffff
            int32_t* eax_13 = var_24
            
            if (eax_13 != 0)
                eax_13[7] -= 1
                var_24 = nullptr
        else
            int32_t var_14_3 = 0xffffffff
            edx_2 = sub_48f4d0(ecx_6)
            int32_t* ecx_7 = var_24
            
            if (ecx_7 != 0)
                ecx_7[7] -= 1
                var_24 = nullptr
    else
        int32_t var_14_2 = 0xffffffff
        int32_t* eax_10 = var_24
        
        if (eax_10 != 0)
            eax_10[7] -= 1
            var_24 = ecx_5
        
        edx_2 = nullptr
    
    var_54_1:8.d = edx_2
    void* eax_14 = sub_4dd530(data_ce26e8 + 0x4240)
    
    if (*(eax_14 + 0x10) != 0)
        var_54_1:8.d = "OpenGLInterface::RenderTargetSetTextures"
        var_54_1:4.d = 0x15db
        var_54_1.d = "c:\ax2017\engine\openglgraphics.cpp"
        sub_44e4d0(eax_14, &data_5559b1, "bufferData->mIsLoading == 0", 
            "c:\ax2017\engine\openglgraphics.cpp", eax_2)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_15 = *(eax_14 + 0xe0)
    
    if (eax_15 == 0)
        var_54_1:8.d = "OpenGLInterface::RenderTargetSetTextures"
        var_54_1:4.d = 0x15dc
        var_54_1.d = "c:\ax2017\engine\openglgraphics.cpp"
        sub_44e4d0(eax_15, &data_5559b1, "bufferData->mFrameBuffer != 0", 
            "c:\ax2017\engine\openglgraphics.cpp", eax_2)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    var_54_1:8.d = eax_15
    var_54_1:4.d = 0x8d40
    (*__glewBindFramebuffer)()
    
    if (arg3 != 0)
        var_54_1:8.d = sub_48f4d0(arg3)
        void* eax_18 = sub_4dd530(data_ce26e8 + 0x4240)
        
        if (*(eax_18 + 0x10) != 0)
            var_54_1:8.d = "OpenGLInterface::RenderTargetSetTextures"
            var_54_1:4.d = 0x15e5
            var_54_1.d = "c:\ax2017\engine\openglgraphics.cpp"
            sub_44e4d0(eax_18, &data_5559b1, "bufferData->mIsLoading == 0", 
                "c:\ax2017\engine\openglgraphics.cpp", eax_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_19 = *(eax_18 + 0xe4)
        
        if (eax_19 == 0)
            var_54_1:8.d = "OpenGLInterface::RenderTargetSetTextures"
            var_54_1:4.d = 0x15e6
            var_54_1.d = "c:\ax2017\engine\openglgraphics.cpp"
            sub_44e4d0(eax_19, &data_5559b1, "bufferData->mRenderBuffer != 0", 
                "c:\ax2017\engine\openglgraphics.cpp", eax_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        var_54_1:8.d = eax_19
        var_54_1:4.d = 0x8d41
        (*__glewBindRenderbuffer)()
        var_54_1:8.d = *(eax_18 + 0xe4)
        var_54_1:4.d = 0x8d41
        var_54_1.d = 0x8d00
        int32_t var_58_1 = 0x8d40
        (*__glewFramebufferRenderbuffer)(0x8d40, 0x8d4100008d00)
    
    var_54_1:8.d = 0x8d40
    int32_t result = (*__glewCheckFramebufferStatus)()
    
    if (result == 0x8cd5)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_54_1:8.d = "OpenGLInterface::RenderTargetSetTextures"
    var_54_1:4.d = 0x15ed
    var_54_1.d = "c:\ax2017\engine\openglgraphics.cpp"
    sub_44e4d0(result, &data_5559b1, "status == GL_FRAMEBUFFER_COMPLETE", 
        "c:\ax2017\engine\openglgraphics.cpp", eax_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
