// 函数名称: sub_48f6f0
// 虚拟地址: 0x48f6f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_48f6f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543578
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void** arg_8
    void** edi = arg_8
    
    if (edi != 3 && edi != 4 && edi != 5 && edi != 6)
        sub_44e4d0(&ExceptionList, &data_5559b1, 
            "textureType == TEXTURE_RENDER_TARGET || textureType == TEXTURE_DEPTH_STENCIL || textureType == "
        "TEXTURE_RENDER_TARGET_MSAA || textureType == TEXTURE_DEPTH_STENCIL_MSAA", 
            "c:\ax2017\engine\texture.cpp", 0x3bc, "TextureCreateForRendering")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int128_t* eax_4 = sub_48bbf0(data_e46f60)
    int32_t* result
    
    if (arg5 == 0)
        result = sub_48dc50(3, eax_4)
    else
        result = sub_48ddb0(eax_4)
    
    int32_t* var_34_2 = &arg_8
    int32_t* var_1c
    sub_42ce10(&var_1c, result, 3)
    int32_t var_8_1 = 0
    int32_t* eax_5 = sub_52a358(0x40, 0x10)
    
    if (eax_5 == 0)
        sub_44e4d0(eax_5, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", 0x4f, "XMalloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_48b160(eax_5, data_e46f5c)
    *eax_5 = arg3
    eax_5[1] = arg2
    eax_5[5] = arg4
    void** eax_9 = arg_8
    eax_5[4] = 8
    eax_5[6] = edi
    eax_5[3] = 1
    eax_5[0xd] = 0
    eax_5[0xf] = 0
    
    if (*eax_9 != 0)
        sub_44e4d0(eax_9, &data_5559b1, "pDefTexture->pTextureImportData == NULL", 
            "c:\ax2017\engine\texture.cpp", 0x3d9, "TextureCreateForRendering")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    *eax_9 = eax_5
    int32_t* eax_10 = var_1c
    
    if (eax_10 != 0)
        eax_10[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
