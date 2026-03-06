// 函数名称: sub_4db2b0
// 虚拟地址: 0x4db2b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4db2b0(int32_t arg1, char* arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5458f8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_3c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result_1 = (*__glewCreateShader)(arg3)
    int32_t result
    
    if (result_1 == 0)
        result = 0
    else
        char* const var_1c = &data_5559b1
        int32_t var_8_1 = 0
        void* eax_4
        int32_t xmm0[0x4]
        int32_t xmm0_1[0x4]
        eax_4, xmm0_1 = _strstr(xmm0, arg2, "#define NEED_SKINNING_VERSION")
        
        if (eax_4 != 0)
            xmm0_1 = sub_44f620(&var_1c, "#version 140\n#define VERSION_130\n")
        
        _strstr(xmm0_1, arg2, "#define NEED_ANDROID_SAMPLEREXTERNALOES")
        int32_t eax_5 = sub_44f620(&var_1c, "#define GLSL\n")
        char const* const var_40_1
        
        if (arg3 != 0x8b31)
            if (arg3 != 0x8b30)
                sub_44e4d0(eax_5, &data_5559b1, "Halt", "c:\ax2017\engine\openglgraphics.cpp", 0x10ef, 
                    "GLLoadShader")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            var_40_1 = "#define HAVE_PIXEL_SHADER\n"
        else
            var_40_1 = "#define HAVE_VERTEX_SHADER\n"
        
        sub_44f620(&var_1c, var_40_1)
        
        if (data_ce26ec != 0)
            sub_44f620(&var_1c, "#define HAVE_ADRENO420\n")
        
        int32_t eax_6 = data_ce19c0
        
        if (eax_6 == 3)
            sub_44f620(&var_1c, "#define HAVE_RIFT\n")
            eax_6 = data_ce19c0
        
        if (eax_6 == 5)
            sub_44f620(&var_1c, "#define HAVE_OPENVR\n")
        
        char* const esi_1 = var_1c
        char* const ecx_6 = &data_5559b1
        char* const eax_7 = &data_5559b1
        
        if (esi_1 != 0)
            eax_7 = esi_1
        
        char* const var_2c = eax_7
        char* var_28_1 = arg2
        char* eax_10 = *(arg4 + 0x20)
        
        if (eax_10 != 0)
            ecx_6 = eax_10
        
        char* const var_40_2 = ecx_6
        char* const ecx_7 = &data_5559b1
        char* const var_18
        char* eax_12 = *sub_44f980(&var_18, "pre glShaderSource error in %s")
        
        if (eax_12 != 0)
            ecx_7 = eax_12
        
        sub_4d68a0(ecx_7)
        var_8_1.b = 1
        
        if (data_cdf414 != 0)
            char* eax_13 = var_18
            
            if (eax_13 != 0 && *eax_13 != 0)
                char* eax_14 = sub_44f000(&var_18)
                int32_t temp0_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
                    var_18 = &data_5559b1
        
        var_8_1.b = 0
        (*__glewShaderSource)(result_1, 2, &var_2c, 0)
        char* const ecx_11 = &data_5559b1
        char* eax_17 = *(arg4 + 0x20)
        
        if (eax_17 != 0)
            ecx_11 = eax_17
        
        char* const var_40_3 = ecx_11
        char* const edx_3 = &data_5559b1
        char* eax_19 = *sub_44f980(&var_18, "glShaderSource error in %s")
        
        if (eax_19 != 0)
            edx_3 = eax_19
        
        sub_4d68a0(edx_3)
        var_8_1.b = 2
        
        if (data_cdf414 != 0)
            char* const eax_20 = var_18
            
            if (eax_20 != 0 && *eax_20 != 0)
                char* eax_21 = sub_44f000(&var_18)
                int32_t temp1_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
                    var_18 = &data_5559b1
        
        var_8_1.b = 0
        (*__glewCompileShader)(result_1)
        int32_t var_24 = 0
        (*__glewGetShaderiv)(result_1, 0x8b81, &var_24)
        
        if (var_24 != 0)
        label_4db5ce:
            int32_t var_8_3 = 4
            
            if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_32 = sub_44f000(&var_1c)
                int32_t temp2_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_32, *(eax_32 + 0xc) + 0x10)
            
            result = result_1
        else
            var_18 = nullptr
            (*__glewGetShaderiv)(result_1, 0x8b84, &var_18)
            char* const eax_25 = var_18
            
            if (eax_25 == 0)
                goto label_4db5ce
            
            __alloca_probe_16(eax_25)
            int32_t* var_20_1 = &var_3c
            
            if (&var_3c != 0)
                (*__glewGetShaderInfoLog)(result_1, var_18, 0, &var_3c)
                char* const ecx_15 = &data_5559b1
                int32_t* var_40_8 = var_20_1
                char* eax_28 = *(arg4 + 0x20)
                
                if (eax_28 != 0)
                    ecx_15 = eax_28
                
                char* const var_44_4 = ecx_15
                char const* const eax_29 = "vertex"
                
                if (arg3 != 0x8b31)
                    eax_29 = "pixel"
                
                char const* const var_48_6 = eax_29
                sub_44e260("Could not compile %s shader %s:\n%s\n")
            
            (*__glewDeleteShader)(result_1)
            int32_t var_8_2 = 3
            
            if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_31 = sub_44f000(&var_1c)
                int32_t temp3_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(eax_31, *(eax_31 + 0xc) + 0x10)
            
            result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
