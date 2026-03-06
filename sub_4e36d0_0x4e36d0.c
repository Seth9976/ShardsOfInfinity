// 函数名称: sub_4e36d0
// 虚拟地址: 0x4e36d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4e36d0(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545e18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_58 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_20 = arg2
    int32_t* ecx
    int32_t* result = sub_4e3490(ecx)
    int32_t* var_24
    int32_t* var_5c = &var_24
    int32_t* var_30
    sub_42ce10(&var_30, result, 3)
    int32_t var_8_1 = 0
    int32_t* esi = var_24
    int32_t* ebx = *esi
    int32_t edx_1
    
    if (ebx != 0)
        edx_1 = arg3
        int32_t eax_30 = edx_1 * 6
        
        if (ebx[0xd] != eax_30)
            sub_44e4d0(eax_30, &data_5559b1, "pTextureData->imageCount == mips * 6", 
                "c:\ax2017\engine\iblimport.cpp", 0xaf, "TextureMakeCubeMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (ebx[0xf] == 0)
            sub_44e4d0(eax_30, &data_5559b1, "pTextureData->pImages", "c:\ax2017\engine\iblimport.cpp", 
                0xb0, "TextureMakeCubeMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    else
        int32_t* eax_3 = sub_52a358(0x40, 0x10)
        ebx = eax_3
        
        if (ebx == 0)
            sub_44e4d0(eax_3, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t (* eax_4)[0x4] = sub_48b160(ebx, data_e46f5c)
        *esi = ebx
        int32_t* ecx_3 = *arg2
        
        if (ecx_3[1] != 3)
            sub_44e4d0(eax_4, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                "c:\ax2017\engine\texture.h", 0x84, "TextureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t* eax_5 = sub_4459f0(ecx_3)
        *ebx = **eax_5
        ebx[1] = *(*eax_5 + 4)
        ebx[3] = arg3
        int32_t esi_2 = arg3 * 6
        ebx[0xd] = esi_2
        int32_t esi_3 = esi_2 << 3
        ebx[5] = *(*eax_5 + 0x14)
        uint32_t (* eax_8)[0x4] = sub_45cd70(esi_3)
        _memset(eax_8, 0, esi_3)
        edx_1 = arg3
        ebx[0xf] = eax_8
        ebx[4] = 8
        ebx[6] = 1
        ebx[7] = 1
        ebx[8] = 1
    
    int32_t ecx_10 = ebx[1]
    void* eax_9 = nullptr
    int32_t esi_4 = *ebx
    int32_t var_1c = ecx_10
    var_24 = nullptr
    
    if (edx_1 s<= 0)
    label_4e38a7:
        int32_t* eax_27 = var_30
        
        if (eax_27 != 0)
            eax_27[7] -= 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t* edx_3 = var_20
    
    while (true)
        int32_t edi_3 = 0
        int32_t* var_14_1 = edx_3
        int32_t var_18_1 = eax_9 << 3
        
        while (true)
            int32_t ecx_11 = ebx[5]
            int32_t var_44_1 = esi_4
            int32_t var_38_1 = ecx_11
            int32_t eax_12 = sub_4dd620(ecx_11) * esi_4
            int32_t eax_13 = eax_12 * ecx_10
            
            if (eax_13 s<= 0)
                sub_44e4d0(eax_13, &data_5559b1, "size > 0", "c:\ax2017\engine\xmemory.cpp", 0x3b, 
                    "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (eax_13 s>= 0x77359400)
                sub_44e4d0(eax_13, &data_5559b1, "size < 2000000000", "c:\ax2017\engine\xmemory.cpp", 
                    0x3c, "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_14 = sub_52a358(eax_13, 0x10)
            
            if (eax_14 == 0)
                sub_44e4d0(eax_14, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", 0x4f, 
                    "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t* ecx_12 = data_ce19b4
            void* var_48 = eax_14
            (*(*ecx_12 + 0x80))(*var_14_1, &var_48)
            edi_3 += 1
            void* edx_6 = ebx[0xf] + var_18_1
            *edx_6 = eax_12 * ecx_10
            var_14_1 = &var_14_1[edx_1]
            var_18_1 += edx_1 << 3
            *(edx_6 + 4) = var_48
            ecx_10 = var_1c
            
            if (edi_3 s>= 6)
                int32_t eax_21
                int32_t edx_7
                edx_7:eax_21 = sx.q(ecx_10)
                int32_t eax_24
                int32_t edx_8
                edx_8:eax_24 = sx.q(esi_4)
                ecx_10 = (eax_21 - edx_7) s>> 1
                edx_3 = &var_20[1]
                eax_9 = var_24 + 1
                esi_4 = (eax_24 - edx_8) s>> 1
                var_1c = ecx_10
                var_24 = eax_9
                var_20 = edx_3
                
                if (eax_9 s< arg3)
                    break
                
                goto label_4e38a7
}
