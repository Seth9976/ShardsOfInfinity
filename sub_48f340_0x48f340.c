// 函数名称: sub_48f340
// 虚拟地址: 0x48f340
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_48f340()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* eax_3 = data_cdf458
    
    if (*eax_3 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    EnterCriticalSection(&eax_3[4])
    void* edi = data_cdf458
    int32_t result = 0
    int32_t result_1 = 0
    
    for (int32_t i = 0; i s< 0x50; i += 8)
        int32_t eax_6 = *(i + edi + 0x24)
        
        if (eax_6 == 2)
            int32_t* ecx_3 = *(i + edi + 0x28)
            
            if (ecx_3[1] != 3)
                sub_44e4d0(eax_6, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                    "c:\ax2017\engine\texture.h", 0x84, "TextureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t* var_1c
            int32_t* var_38_1 = &var_1c
            **(sub_4459f0(ecx_3) + 0xc) = 1
            int32_t* eax_9 = *(i + edi + 0x28)
            int32_t* var_14
            sub_42ce10(&var_14, eax_9, 3)
            int32_t var_8_1 = 0
            int32_t* ebx = var_1c
            void* ecx_5 = *ebx
            
            if (ecx_5 != 0)
                int32_t* ecx_6 = *(ecx_5 + 0x24)
                
                if (ecx_6 != 0)
                    sub_48f4d0(ecx_6)
                else if (ebx[1] == 0)
                    ebx[1] = sub_48f050(eax_9)
            
            int32_t var_8_2 = 0xffffffff
            int32_t* eax_11 = var_14
            
            if (eax_11 != 0)
                eax_11[7] -= 1
                var_14 = nullptr
            
            sub_48f2a0(*(i + edi + 0x28))
            result = result_1
            *(i + edi + 0x24) = 0
            *(i + edi + 0x28) = 0
            edi = data_cdf458
        else if (eax_6 == 3)
            *(i + edi + 0x24) = 0
            *(i + edi + 0x28) = 0
        else if (eax_6 == 1)
            result += 1
            result_1 = result
    
    LeaveCriticalSection(edi + 4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
