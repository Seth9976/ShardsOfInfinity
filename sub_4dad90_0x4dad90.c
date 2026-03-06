// 函数名称: sub_4dad90
// 虚拟地址: 0x4dad90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __stdcallsub_4dad90(uint64_t (* arg1)[0x2])
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5449b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = arg1[0x35][0].d
    int32_t* esi = *ebx
    
    if (esi != ebx[0xfc])
        sub_44e4d0(arg1, &data_5559b1, "pVertexShader->assetShader == pPixelShader->assetShader", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x100b, "OpenGLInterface::GraphicsMaterialSetup")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* var_14
    int32_t* var_30 = &var_14
    int32_t* var_18
    sub_42ce10(&var_18, esi, 4)
    int32_t var_8_1 = 0
    void* edi = var_14
    char* eax_4 = *(edi + 8)
    
    if (eax_4 == 0)
        eax_4 = (*(*data_ce19b4 + 0x44))(esi, 0)
        *(edi + 8) = eax_4
    
    int32_t var_8_2 = 0xffffffff
    int32_t* ecx_2 = var_18
    
    if (ecx_2 != 0)
        ecx_2[7] -= 1
    
    if (eax_4 == 0)
        eax_4.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    void* ecx_5 = data_ce26e8
    
    if (*(ecx_5 + 0x404c) != eax_4)
        *(ecx_5 + 0x404c) = eax_4
        int32_t* eax_6 = sub_4dd530(ecx_5 + 0x4240, eax_4)
        (*__glewUseProgram)(*eax_6)
        eax_4 = _memset(data_ce26e8 + 0x28, 0xfe, eax_6[0x40] << 4)
    
    int32_t i_1 = ebx[0xfd]
    
    if (i_1 s> 0)
        void* esi_2 = &ebx[0x100]
        int32_t i
        
        do
            eax_4 = sub_4d8e90(eax_4, *esi_2, *(esi_2 - 4), *(esi_2 + 8), *(esi_2 - 8), arg1)
            
            if (eax_4.b == 0)
                eax_4 = sub_4d9910(esi_2 - 8, arg1)
            
            esi_2 += 0x14
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_4da650(&ebx[0x1fb], ebx[0x1f8])
    int32_t eax_11
    eax_11.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11
}
