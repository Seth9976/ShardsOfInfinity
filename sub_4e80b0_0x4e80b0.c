// 函数名称: sub_4e80b0
// 虚拟地址: 0x4e80b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_4e80b0(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5460b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_8
    int32_t* eax_3 = sub_4ebf60(arg1 + 0x38, arg_8)
    
    if (*eax_3 != 2)
        sub_44e4d0(eax_3, &data_5559b1, "bufferData->mBufferType == DX11BUFFER_TEXTURE", 
            "c:\ax2017\engine\windows\windowsdx11.cpp", 0x2d4, 
            "Dx11GraphicsInterface::UnlockTextureBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* var_2c_1 = &arg_8
    int32_t* result_1
    sub_42ce10(&result_1, arg2, 3)
    char ecx_2 = arg3.b
    int32_t var_8_1 = 0
    int32_t* edx = *arg_8
    arg_8 = edx
    uint32_t eax_6 = *edx u>> ecx_2
    
    if (eax_6 u< 1)
        eax_6 = 1
    
    uint32_t esi_1 = edx[1] u>> ecx_2
    
    if (esi_1 u< 1)
        esi_1 = 1
    
    int32_t eax_7 = sub_4dd730(eax_6, edx[5])
    int32_t* eax_8 = eax_7 * esi_1
    int32_t* esi_2 = arg_8
    int32_t ecx_4 = esi_2[6]
    
    if (ecx_4 != 0)
        if (ecx_4 != 1)
            if (ecx_4 == 2)
                sub_44e4d0(eax_8, &data_5559b1, "Halt", "c:\ax2017\engine\windows\windowsdx11.cpp", 
                    0x2ee, "Dx11GraphicsInterface::UnlockTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            sub_44e4d0(eax_8, &data_5559b1, "Halt", "c:\ax2017\engine\windows\windowsdx11.cpp", 0x2f2, 
                "Dx11GraphicsInterface::UnlockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t* edx_3 = *(arg1 + 8)
        (*(*edx_3 + 0xc0))(edx_3, eax_3[7], esi_2[3] * arg4 + arg3, 0, eax_3[2], eax_7, eax_8)
    else
        if (arg4 != ecx_4)
            sub_44e4d0(eax_8, &data_5559b1, "depth == 0", "c:\ax2017\engine\windows\windowsdx11.cpp", 
                0x2e2, "Dx11GraphicsInterface::UnlockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t* ecx_5 = *(arg1 + 8)
        (*(*ecx_5 + 0xc0))(ecx_5, eax_3[7], arg3, 0, eax_3[2], eax_7, eax_8)
    
    if (*(eax_3 + 6) != 0)
        int32_t* eax_13 = *(arg1 + 8)
        (*(*eax_13 + 0xd8))(eax_13, eax_3[8])
    
    int32_t eax_14 = eax_3[2]
    
    if (eax_14 != 0)
        _aligned_free_base(eax_14)
    
    int32_t* result = result_1
    eax_3[2] = 0
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
