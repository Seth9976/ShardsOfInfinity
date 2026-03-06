// 函数名称: sub_48e9d0
// 虚拟地址: 0x48e9d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_48e9d0(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5434b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_28
    int32_t* var_58 = &var_28
    int32_t* result_1
    int32_t** eax_4 = sub_42ce10(&result_1, arg1, 3)
    int32_t var_14_1 = 0
    int32_t* edi = *var_28
    
    if (edi[9] != 0)
        sub_44e4d0(eax_4, &data_5559b1, "pDefTexture->pTextureImportData->atlasTexture == NULL", 
            "c:\ax2017\engine\texture.cpp", 0xc7, "TextureGetImageData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (edi[0xd] != 1)
        sub_44e4d0(eax_4, &data_5559b1, "pTextureData->imageCount == 1", 
            "c:\ax2017\engine\texture.cpp", 0xc9, "TextureGetImageData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_5 = edi[0xf]
    arg2[1] = *edi
    arg2[2] = edi[1]
    arg2[4] = 1
    int32_t eax_9 = sub_4dd620(1) * *edi
    int32_t var_58_1 = arg2[4]
    int32_t edx = arg2[2]
    int32_t ecx_2 = arg2[1]
    arg2[3] = eax_9
    int32_t eax_10 = sub_4dd7f0(eax_9, edx, ecx_2, var_58_1)
    int32_t eax_12 = var_28[2]
    
    if (eax_12 != 0)
        *arg2 = eax_12
    else
        uint32_t (* eax_13)[0x4] = sub_45cd70(eax_10)
        *arg2 = eax_13
        
        if (edi[4] != 8)
            int32_t* eax_16 = sub_45cd70(*eax_5)
            int32_t* ecx_9 = sub_48d990(eax_16, eax_16, arg1, nullptr, *eax_5, eax_5[1])
            int32_t eax_17 = arg2[4]
            int32_t var_38_1 = eax_17
            int128_t var_48 = *arg2
            int32_t var_58_4 = *eax_5
            
            if (sub_4ded00(eax_17, &var_48, ecx_9, eax_16) == 0)
                char* const ecx_10 = &data_5559b1
                char* eax_20 = *(arg1 + 0x20)
                
                if (eax_20 != 0)
                    ecx_10 = eax_20
                
                char* const var_58_5 = ecx_10
                sub_44e260("Failed to read texture %s")
            
            if (eax_16 != 0)
                _aligned_free_base(eax_16)
            
            var_28[2] = *arg2
        else
            void* ecx_4 = *eax_5
            
            if (eax_10 != ecx_4)
                sub_44e4d0(eax_5, &data_5559b1, "imageSize == pImage->imageSize", 
                    "c:\ax2017\engine\texture.cpp", 0xd8, "TextureGetImageData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            sub_48d990(eax_5, eax_13, arg1, nullptr, ecx_4, eax_5[1])
            var_28[2] = *arg2
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
