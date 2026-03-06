// 函数名称: sub_459990
// 虚拟地址: 0x459990
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_459990(int32_t arg1, int128_t* arg2, int32_t* arg3, void** arg4, uint32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5424a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_70 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* edi = arg2
    int128_t* var_40 = edi
    
    if (arg3[1] != 2)
        sub_44e4d0(arg5, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
            "c:\ax2017\engine\assetutils.cpp", 0x30c, "StructureDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4459f0(arg3)
    int32_t* result_1 = result
    int32_t** result_2 = result_1
    
    if (*result_1 != 0)
        void* esi_1 = *fsbase->ThreadLocalStoragePointer
        
        if (data_e48e30 s> *(esi_1 + 4))
            __Init_thread_header(&data_e48e30)
            
            if (data_e48e30 == 0xffffffff)
                int32_t var_8_1 = 0
                data_e48e34 = sub_48d5b0("sys/draw3d.material", 5)
                int32_t var_8_2 = 0xffffffff
                __Init_thread_footer(&data_e48e30)
        
        if (data_e48e38 s> *(esi_1 + 4))
            __Init_thread_header(&data_e48e38)
            
            if (data_e48e38 == 0xffffffff)
                int32_t var_8_3 = 1
                data_e48e3c = sub_48d5b0("sys/pbr/brdf_lut.texture", 3)
                int32_t var_8_4 = 0xffffffff
                __Init_thread_footer(&data_e48e38)
        
        int32_t* eax_8 = *result_1
        int32_t i_1 = 0
        
        if (*eax_8 s> 0)
            int32_t ecx_2 = 0
            int32_t var_50_1 = 0
            int32_t i
            
            do
                int32_t esi_2 = 0
                float ebx_1 = eax_8[1] + ecx_2
                void** ecx_3 = arg4
                int32_t eax_9 = ecx_3[1]
                bool cond:1_1 = eax_9 == 0
                int32_t* var_44
                void* ecx_6
                
                if (eax_9 s> 0)
                    int32_t* edi_1 = nullptr
                    
                    do
                        char* edx = *(edi_1 + *ecx_3)
                        char* ecx_4 = edx
                        var_44 = &ecx_4[1]
                        int32_t* eax_11
                        
                        do
                            eax_11.b = *ecx_4
                            ecx_4 = &ecx_4[1]
                        while (eax_11.b != 0)
                        
                        if (__strnicmp(*(ebx_1 i+ 4), edx, ecx_4 - var_44) == 0)
                            ecx_6 = *arg4 + esi_2 * 0x18
                            goto label_459b04
                        
                        ecx_3 = arg4
                        esi_2 += 1
                        edi_1 = &edi_1[6]
                        eax_9 = ecx_3[1]
                    while (esi_2 s< eax_9)
                    
                    cond:1_1 = eax_9 == 0
                
                if (cond:1_1)
                    sub_44e4d0(eax_9, &data_5559b1, "materialTable.numMaterials", 
                        "c:\ax2017\engine\draw3d.cpp", 0x7d7, "GetMaterialEntry")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                ecx_6 = *ecx_3
            label_459b04:
                int32_t edx_1 = *(ecx_6 + 0x14)
                int32_t* eax_13 = *(ecx_6 + 8)
                uint32_t var_80_1
                int32_t* var_7c_2
                int32_t var_78_2
                uint32_t var_74_2
                int32_t* var_24
                
                if (edx_1 == 0)
                    int32_t edx_2 = *(ecx_6 + 0x10)
                    int32_t esi_4
                    
                    if (edx_2 != 0)
                        esi_4 = *(ecx_6 + 0xc)
                    
                    if (edx_2 == 0 || esi_4 == 0)
                        int32_t esi_5 = *(ecx_6 + 0xc)
                        var_74_2 = arg5
                        
                        if (esi_5 == 0)
                            if (edx_2 != 0)
                                var_24 = eax_13
                                int32_t var_1c_3 = data_e48e3c
                                int32_t var_20_3 = edx_2
                                int32_t var_18_3 = 0
                                sub_44e4d0(
                                    sub_458650(&var_24, var_40, ebx_1, *(ecx_6 + 4), &var_24, 3, 
                                        var_74_2), 
                                    &data_5559b1, "Halt", "c:\ax2017\engine\draw3d.cpp", 0x82c, 
                                    "Draw3DStructureMaterialTableMatrixOverrides")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            uint32_t ecx_8 = *(ecx_6 + 4)
                            
                            if (ecx_8 == 0)
                                if (eax_13 == 0)
                                    var_78_2 = 0
                                    var_7c_2 = nullptr
                                else
                                    var_44 = eax_13
                                    eax_13 = &var_44
                                    var_78_2 = 1
                                    var_7c_2 = &var_44
                                
                                var_80_1 = data_e48e34
                            else
                                var_44 = eax_13
                                eax_13 = &var_44
                                var_78_2 = 1
                                var_7c_2 = &var_44
                                var_80_1 = ecx_8
                        else
                            int32_t* var_60 = eax_13
                            eax_13 = &var_60
                            var_78_2 = 2
                            var_7c_2 = &var_60
                            var_80_1 = *(ecx_6 + 4)
                            int32_t var_5c_1 = esi_5
                    else
                        var_74_2 = arg5
                        var_24 = eax_13
                        int32_t var_18_1 = data_e48e3c
                        eax_13 = &var_24
                        var_78_2 = 4
                        var_7c_2 = &var_24
                        var_80_1 = *(ecx_6 + 4)
                        int32_t var_20_1 = esi_4
                        int32_t var_1c_1 = edx_2
                else
                    int32_t esi_3 = *(ecx_6 + 0xc)
                    var_74_2 = arg5
                    
                    if (esi_3 == 0)
                        var_24 = eax_13
                        int32_t var_20_2 = *(ecx_6 + 0x10)
                        int32_t var_18_2 = data_e48e3c
                        int32_t var_1c_2 = edx_1
                        sub_44e4d0(
                            sub_458650(&var_24, var_40, ebx_1, *(ecx_6 + 4), &var_24, 4, var_74_2), 
                            &data_5559b1, "Halt", "c:\ax2017\engine\draw3d.cpp", 0x81c, 
                            "Draw3DStructureMaterialTableMatrixOverrides")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t* var_38 = eax_13
                    int32_t var_30_1 = *(ecx_6 + 0x10)
                    int32_t var_28_1 = data_e48e3c
                    eax_13 = &var_38
                    var_78_2 = 5
                    var_7c_2 = &var_38
                    var_80_1 = *(ecx_6 + 4)
                    int32_t var_34_1 = esi_3
                    int32_t var_2c_1 = edx_1
                edi = var_40
                sub_458650(eax_13, edi, ebx_1, var_80_1, var_7c_2, var_78_2, var_74_2)
                i = i_1 + 1
                ecx_2 = var_50_1 + 0x124
                i_1 = i
                eax_8 = *result_2
                var_50_1 = ecx_2
            while (i s< *eax_8)
        
        result = sub_459190(eax_8, edi, arg3, arg5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
