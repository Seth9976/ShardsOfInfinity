// 函数名称: sub_466e80
// 虚拟地址: 0x466e80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_466e80(int32_t arg1, int32_t arg2 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_8 = eax_1
    char const* const var_c40
    int32_t var_c3c_1
    char const* const var_c38_1
    char* ecx
    
    if (arg1 != 0)
        uint32_t ecx_1 = zx.d(arg1.w)
        int32_t edx_1
        
        if (ecx_1 u< data_5c99a4)
            edx_1 = data_5c99a0
            eax_1 = ecx_1 * 0x1008
        
        if (ecx_1 u>= data_5c99a4 || *(eax_1 + edx_1 + 0x1004) != arg1)
            var_c38_1 = "DataArray<struct UI2>::DataArrayGet"
            var_c3c_1 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_c40 = "c:\ax2017\engine\dataarray.h"
        else
            void* ebx_2 = ecx_1 * 0x1008 + edx_1
            eax_1 = *(ebx_2 + 0x6a4)
            
            if (eax_1[1] == 0x22)
                int32_t* esi_1 = sub_4459f0(eax_1)
                int32_t* var_c20_1 = esi_1
                uint32_t var_80c[0x40][0x4]
                _memset(&var_80c, 0, 0x400)
                uint32_t var_c0c[0x40][0x4]
                _memset(&var_c0c, 0, 0x400)
                void* var_40c = ebx_2
                uint32_t var_408[0x40][0x4]
                _memset(&var_408, 0, 0x3fc)
                int32_t j = 0
                
                if (*(ebx_2 + 0x7f4) == 0)
                    int32_t i_2 = 0
                    
                    if (esi_1[1] s> 0)
                        int32_t ebx_3 = 0
                        uint32_t (* edx_2)[0x40][0x4] = &var_80c
                        int32_t var_c14_1 = 0
                        int32_t i
                        
                        do
                            uint32_t ecx_3 = *edx_2
                            void* esi_3 = *esi_1 + var_c14_1
                            *edx_2 = ecx_3 - 1
                            void* eax_4 = sub_45ed30(*(&var_40c + ebx_3), *(&var_c0c + ebx_3) - ecx_3)
                            j += 1
                            *(eax_4 + 0x6a4) = eax_1
                            ebx_3 = j << 2
                            *(eax_4 + 0x6a8) = i_2
                            int32_t ecx_7 = *(esi_3 + 8)
                            edx_2 = &var_80c + ebx_3
                            *(&var_c0c + ebx_3) = ecx_7
                            *(&var_40c + ebx_3) = eax_4
                            *edx_2 = ecx_7
                            
                            if (ecx_7 == 0)
                                while (j s> 0)
                                    j -= 1
                                    ebx_3 = j << 2
                                    edx_2 = &var_80c + ebx_3
                                    
                                    if (*edx_2 != 0)
                                        break
                            
                            esi_1 = var_c20_1
                            i = i_2 + 1
                            var_c14_1 += 0xc
                            i_2 = i
                        while (i s< esi_1[1])
                
                int32_t eax_6 = data_5c99d8
                
                if (eax_6 != 0)
                    uint32_t ecx_8 = zx.d(eax_6.w)
                    
                    if (ecx_8 u< data_5c99a4)
                        void* ecx_10 = ecx_8 * 0x1008 + data_5c99a0
                        
                        if (*(ecx_10 + 0x1004) == eax_6)
                            sub_4660e0(ecx_10)
                
                eax_1 = sub_465fe0(*(ebx_2 + 0x758), *(ebx_2 + 0x75c))
                
                if (*(ebx_2 + 0x69c) != 2)
                    int32_t i_1 = 0
                    
                    if (*(ebx_2 + 0x7f4) s> 0)
                        do
                            uint32_t eax_7
                            int32_t ecx_13
                            eax_7, ecx_13 = sub_4627e0(ebx_2, i_1)
                            int32_t* var_c38_2 = eax_1
                            int32_t var_c3c_2 = *(ebx_2 + 0x75c)
                            int32_t var_c44_1 = ecx_13
                            sub_466a50(eax_7, ebx_2, eax_7, *(ebx_2 + 0x750), ebx_2 + 0x6dc, 0, 
                                *(ebx_2 + 0x78c), *(ebx_2 + 0x790), arg2, *(ebx_2 + 0x758))
                            i_1 += 1
                        while (i_1 s< *(ebx_2 + 0x7f4))
                    
                    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_462a50(ebx_2)
                    
                    if (*(ebx_2 + 0x694) != 0)
                        *(ebx_2 + 0x694) = 0
                        result = sub_47b400(arg1)
                    
                    *(ebx_2 + 8) = 1
                    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                    return result
                
                var_c38_1 = "UI2Update"
                var_c3c_1 = 0x14fc
                var_c40 = "c:\ax2017\engine\ui2.cpp"
                ecx = "ui.type != UI_TABLE"
            else
                var_c38_1 = "UI2DefGet"
                var_c3c_1 = 0x623
                var_c40 = "c:\ax2017\engine\ui2.cpp"
                ecx = "ptr->assetType == ASSET_TYPE_UI2"
    else
        var_c38_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c3c_1 = 0x6c
        ecx = "id != DATAID_NULL"
        var_c40 = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx, var_c40, var_c3c_1, var_c38_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
