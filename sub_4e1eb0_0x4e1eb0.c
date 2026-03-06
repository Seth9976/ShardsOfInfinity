// 函数名称: sub_4e1eb0
// 虚拟地址: 0x4e1eb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4e1eb0(int32_t arg1, int32_t* arg2, char arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545c30
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_114 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    void* ebx = *arg2
    void* var_18 = ebx
    char** i_4 = nullptr
    int32_t var_28 = 0
    int32_t var_24 = 0
    int32_t ecx
    int32_t var_118 = ecx
    var_8_1.b = 1
    sub_4e1da0(&i_4, "HAVE_VERTEX_SHADER")
    sub_4e1da0(&i_4, "HAVE_PIXEL_SHADER")
    char* result_1
    
    for (int32_t i = 0; i s< 2; )
        int32_t* eax_3 = sub_52a358(0x28, 0x10)
        
        if (eax_3 == 0)
            sub_44e4d0(eax_3, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_48b160(eax_3, data_e4704c)
        int32_t ecx_4 = i * 5
        char* edx_1 = *(ebx + (ecx_4 << 2))
        
        if (*edx_1 == 0)
            if (i != 1)
                char* eax_4 = "MainVS"
                
                if (i != 0)
                    eax_4 = edx_1
                
                edx_1 = eax_4
            else
                edx_1 = "MainPS"
        
        char* const result_7 = &data_5559b1
        char* result_2 = result_1
        
        if (arg3 == 0)
            if (result_2 != 0)
                result_7 = result_2
            
            char* eax_17 = sub_4eb7a0(&i_4, edx_1, result_7, eax_3, i, &i_4, &eax_3[5], &eax_3[4], 0)
            
            if (eax_17.b == 0)
                sub_44e4d0(eax_17, &data_5559b1, "Halt", "c:\ax2017\engine\shaderimport.cpp", 0x98, 
                    "ShaderImport")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char* result_6 = result_1
            char* result_11 = &data_5559b1
            
            if (result_6 != 0)
                result_11 = result_6
            
            char* eax_18 = sub_4dc8a0(result_11, eax_3)
            
            if (eax_18.b == 0)
                sub_44e4d0(eax_18, &data_5559b1, "Halt", "c:\ax2017\engine\shaderimport.cpp", 0xb0, 
                    "ShaderImport")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
        else
            if (result_2 != 0)
                result_7 = result_2
            
            if (sub_4eb7a0(&i_4, edx_1, result_7, eax_3, i, &i_4, &eax_3[5], &eax_3[4], 1) == 0)
                char* result_3 = result_1
                char* const result_8 = &data_5559b1
                
                if (result_3 != 0)
                    result_8 = result_3
                
                void* const eax_9 = &data_572a30
                char* const eax_10
                
                while (true)
                    if (*eax_9 == i)
                        eax_10 = *(eax_9 + 4)
                        break
                    
                    eax_9 += 8
                    
                    if (*(eax_9 + 4) == 0)
                        eax_10 = &data_5559b1
                        break
                
                char* const result_12 = result_8
                char* const var_11c_2 = eax_10
                sub_44e260("dx11 shader %s reimport failed to read '%s'")
            
            char* result_4 = result_1
            char* result_9 = &data_5559b1
            
            if (result_4 != 0)
                result_9 = result_4
            
            if (sub_4dca30(result_9, eax_3) == 0)
                char* result_5 = result_1
                char* result_10 = &data_5559b1
                
                if (result_5 != 0)
                    result_10 = result_5
                
                void* const eax_12 = &data_572a30
                
                while (true)
                    if (*eax_12 == i)
                        char* result_14 = result_10
                        int32_t var_11c_4 = *(eax_12 + 4)
                        sub_44e260("shader %s opengl reimport failed to read '%s'")
                        break
                    
                    eax_12 += 8
                    
                    if (*(eax_12 + 4) == 0)
                        char* result_13 = result_10
                        char* const var_11c_3 = &data_5559b1
                        sub_44e260("shader %s opengl reimport failed to read '%s'")
                        break
        
        i += 1
        *(ebx + (ecx_4 << 2) + 4) = eax_3
        ebx = var_18
    
    *(ebx + 0x28) = 0
    void* eax_20 = *(ebx + 4)
    int32_t* ppReflector = nullptr
    
    if (D3DReflect(*(eax_20 + 0x14), *(eax_20 + 0x10), &data_54c660, &ppReflector) s>= 0)
        int32_t* ppReflector_1 = ppReflector
        void var_104
        (*(*ppReflector_1 + 0xc))(ppReflector_1, &var_104)
        int32_t var_f8
        
        if (var_f8 u> 0)
            int32_t* ppReflector_2 = ppReflector
            int32_t* ebx_2 = (*(*ppReflector_2 + 0x10))(ppReflector_2, 0)
            int32_t* var_1c_1 = ebx_2
            void var_44
            int32_t eax_22 = (**ebx_2)(ebx_2, &var_44)
            
            if (eax_22 s< 0)
                sub_44e4d0(eax_22, &data_5559b1, "SUCCEEDED(hr)", "c:\ax2017\engine\shaderimport.cpp", 
                    0xdf, "ShaderImport")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t ecx_14 = 0
            int32_t var_20_1 = 0
            int32_t var_3c
            
            if (var_3c u> 0)
                do
                    int32_t* eax_24 = (*(*ebx_2 + 4))(ebx_2, ecx_14)
                    char* var_68
                    (**eax_24)(eax_24, &var_68)
                    char* ecx_16 = var_68
                    int32_t i_1 = 0
                    char* var_30_1 = ecx_16
                    
                    if (data_5b622c s> 0)
                        int32_t edi_2 = 0
                        
                        do
                            void* ebx_3 = data_5b6228
                            
                            if (__stricmp(*(ebx_3 + edi_2 + 4), ecx_16) == 0)
                                int32_t eax_26 = *(ebx_3 + edi_2)
                                
                                if (eax_26 != 0x60 && eax_26 != 0x61 && eax_26 != 0x62)
                                    goto label_4e21ea
                                
                                *(var_18 + 0x28) = 1
                                int32_t var_60
                                *(var_18 + 0x2c) = var_60 u>> 6
                                goto label_4e220e
                            
                            ecx_16 = var_30_1
                            i_1 += 1
                            edi_2 += 0x3c
                        while (i_1 s< data_5b622c)
                        
                    label_4e21ea:
                        ebx_2 = var_1c_1
                    
                    ecx_14 = var_20_1 + 1
                    var_20_1 = ecx_14
                while (ecx_14 u< var_3c)
        
    label_4e220e:
        int32_t* ppReflector_3 = ppReflector
        (*(*ppReflector_3 + 8))(ppReflector_3)
        var_8_1.b = 4
        char** i_2 = i_4
        
        while (i_2 != 0)
            char** i_6 = i_2
            i_2 = i_2[2]
            sub_4a3060(i_6)
            sub_45d050(i_6, 0x10)
        
        int32_t var_8_3 = 5
    else
        var_8_1.b = 2
        char** i_3 = i_4
        
        while (i_3 != 0)
            char** i_5 = i_3
            i_3 = i_3[2]
            sub_4a3060(i_5)
            sub_45d050(i_5, 0x10)
        
        int32_t var_8_2 = 3
    
    char* result
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
