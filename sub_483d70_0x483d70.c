// 函数名称: sub_483d70
// 虚拟地址: 0x483d70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_483d70(int32_t arg1, int32_t arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5430c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_50 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = *arg3
    struct _EXCEPTION_REGISTRATION_RECORD** result
    
    if (ebx != 0)
        while (true)
            int32_t* ecx = *ebx
            ebx = ebx[1]
            int32_t eax_3 = ecx[1]
            
            if (eax_3 s< 0 || eax_3 s>= 0x23)
                sub_44e4d0(eax_3, &data_5559b1, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
                    "c:\ax2017\engine\assettyperegistry.cpp", 0xb6, "AssetTypeGetInfo")
                
                if (IsDebuggerPresent() != 1)
                    sub_44e680()
                    noreturn
                
                breakpoint
            
            void* esi_1 = *((eax_3 << 5) + data_cdf880 + 0x1c)
            char** eax_6 = sub_4459f0(ecx)
            uint32_t ecx_1 = *(esi_1 + 0xc)
            
            if (ecx_1 == 0)
                sub_44e4d0(eax_6, &data_5559b1, "pDefMap->definitionSize != 0", 
                    "c:\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t var_3c = 0
            int32_t var_38_1 = 0
            char var_30_1 = 1
            int32_t var_2c_1 = 0
            uint32_t eax_7 = sub_483010(eax_6, esi_1, eax_6, 0, &var_3c)
            
            if (ecx_1 s<= 0)
                sub_44e4d0(eax_7, &data_5559b1, "size > 0", "c:\ax2017\engine\xmemory.cpp", 0x3b, 
                    "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (ecx_1 s>= 0x77359400)
                sub_44e4d0(eax_7, &data_5559b1, "size < 2000000000", "c:\ax2017\engine\xmemory.cpp", 
                    0x3c, "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            uint32_t (* eax_8)[0x4] = sub_52a358(ecx_1, 0x10)
            
            if (eax_8 == 0)
                sub_44e4d0(eax_8, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", 0x4f, 
                    "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (arg4 == 0)
                sub_483280(eax_8, esi_1, eax_6, eax_8, ecx_1)
            label_483f3b:
                int32_t var_54_6 = arg2
                uint32_t eax_13 = _fwrite(eax_8, ecx_1, 1)
                _aligned_free_base(eax_8)
                
                if (eax_13 != 1)
                label_483fc5:
                    result.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
                
                if (ebx == 0)
                    break
                
                continue
            
            char* const edx_1 = &data_5559b1
            char* ecx_4 = ecx[8]
            
            if (ecx_4 != 0)
                edx_1 = ecx_4
            
            struct _EXCEPTION_REGISTRATION_RECORD** result_1
            sub_4a93d0(&result_1, edx_1)
            int32_t var_8_1 = 0
            char* const result_5 = &data_5559b1
            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
            
            if (result_2 != 0)
                result_5 = result_2
            
            int32_t* eax_9 = _fopen(result_5, "rb")
            
            if (eax_9 == 0)
                struct _EXCEPTION_REGISTRATION_RECORD** result_4 = result_1
                struct _EXCEPTION_REGISTRATION_RECORD** result_6 = &data_5559b1
                
                if (result_4 != 0)
                    result_6 = result_4
                
                struct _EXCEPTION_REGISTRATION_RECORD** result_7 = result_6
                sub_44e260("failed to open %s")
                int32_t var_8_4 = 1
                
                if (data_cdf414 != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_1)
                        int32_t temp0_1 = result[1]
                        result[1] -= 1
                        
                        if (temp0_1 == 1)
                            sub_45d050(result, &result[3][2])
                
                goto label_483fc5
            
            _fseek(eax_9, 0, 2)
            int32_t* var_54_2 = eax_9
            int32_t eax_10 = sub_52b118()
            
            if (eax_10 != ecx_1 + 0xb4)
                sub_44e4d0(eax_10, &data_5559b1, "Halt", "c:\ax2017\engine\defbin.cpp", 0x49e, 
                    "DefBinWritePackAssets")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            _fseek(eax_9, 0xb4, 0)
            uint32_t eax_11 = _fread(eax_8, 1, ecx_1, eax_9)
            
            if (eax_11 != ecx_1)
                sub_44e4d0(eax_11, &data_5559b1, "read_len == (size_t)dataSize", 
                    "c:\ax2017\engine\defbin.cpp", 0x4a4, "DefBinWritePackAssets")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            _fclose(eax_9)
            int32_t var_8_2 = 2
            
            if (data_cdf414 != 0)
                struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_1
                
                if (result_3 != 0 && *result_3 != 0)
                    char* eax_12 = sub_44f000(&result_1)
                    int32_t temp1_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
                        result_1 = &data_5559b1
            
            int32_t var_8_3 = 0xffffffff
            goto label_483f3b
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
