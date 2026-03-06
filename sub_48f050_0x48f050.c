// 函数名称: sub_48f050
// 虚拟地址: 0x48f050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_48f050(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543518
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c
    int32_t* var_34 = &var_1c
    int32_t* var_14
    sub_42ce10(&var_14, arg1, 3)
    int32_t var_8_1 = 0
    int32_t* ebx = *var_1c
    int32_t ecx_1 = ebx[0xd]
    int32_t temp0 = divs.dp.d(sx.q(ecx_1), ebx[3])
    int32_t edx_1 = ebx[6]
    int32_t var_18 = temp0
    int32_t edi = temp0
    
    if (edx_1 == 3 || edx_1 == 5 || edx_1 == 4 || edx_1 == 6)
        edi = 1
        var_18 = 1
    label_48f101:
        int32_t* ecx_5 = (*(*data_ce19b4 + 0x10))(arg1, *ebx, ebx[1], edi, ebx[3], ebx[5], edx_1)
        var_1c = ecx_5
        
        if (ecx_5 != 0)
            int32_t eax_11 = ebx[6]
            
            if (eax_11 == 0)
                if (edi == 1)
                    eax_11 = ebx[3]
                
                if (edi == 1 && eax_11 == ebx[0xd])
                    goto label_48f165
                
                sub_44e4d0(eax_11, &data_5559b1, 
                    "depthCount == 1 && pTextureData->mipLevelCount == pTextureData->imageCount", 
                    "c:\ax2017\engine\texture.cpp", 0x1ee, "TextureCreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (eax_11 == 1)
                if (edi == 6)
                    goto label_48f169
                
                sub_44e4d0(eax_11, &data_5559b1, "depthCount == 6", "c:\ax2017\engine\texture.cpp", 
                    0x1f2, "TextureCreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (eax_11 == 2)
                sub_44e4d0(eax_11, 
                    "Yeah, this doesn't work yet. The depth changes for each mip level so this needs a "
                "special loader.", 
                    "HaltMsg", "c:\ax2017\engine\texture.cpp", 0x1f6, "TextureCreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (eax_11 == 3 || eax_11 == 5 || eax_11 == 4 || eax_11 == 6)
                int32_t* eax_16 = var_14
                
                if (eax_16 != 0)
                    eax_16[7] -= 1
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return ecx_5
            
        label_48f165:
            
            if (edi s> 0)
            label_48f169:
                int32_t eax_12 = ebx[3]
                int32_t edi_1 = 0
                int32_t edx_2 = var_18
                
                do
                    int32_t esi_1 = 0
                    
                    if (eax_12 s> 0)
                        do
                            sub_48ec00(eax_12, ecx_5, arg1, edi_1, esi_1)
                            eax_12 = ebx[3]
                            esi_1 += 1
                            ecx_5 = var_1c
                        while (esi_1 s< eax_12)
                        
                        edx_2 = var_18
                    
                    edi_1 += 1
                while (edi_1 s< edx_2)
            
            if (ebx[7] == 0 && ebx[4] != 8)
                char* eax_13 = arg1[8]
                char* const ecx_7 = &data_5559b1
                
                if (eax_13 != 0)
                    ecx_7 = eax_13
                
                char* const var_34_3 = ecx_7
                sub_44e260("Autogeneration of mipmaps is not implemented on load for %s")
            
            int32_t* eax_14 = var_14
            
            if (eax_14 != 0)
                eax_14[7] -= 1
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return var_1c
    else if (ecx_1 s>= 1)
        goto label_48f101
    
    int32_t* eax_7 = var_14
    
    if (eax_7 != 0)
        eax_7[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
