// 函数名称: sub_4deb20
// 虚拟地址: 0x4deb20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4deb20(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* var_8
    int32_t* var_8
    int32_t eax = _fopen_s(&var_8, arg2, "rb")
    int32_t* edi = var_8
    
    if (eax != 0)
        edi = nullptr
    
    var_8 = edi
    int32_t eax_1
    
    if (edi != 0)
        eax_1 = sub_50eaf0(edi)
        _fclose(edi)
    
    int32_t var_38_3
    int32_t* eax_2
    char const* const ecx_2
    float* var_24
    int32_t var_20
    int32_t var_1c
    int32_t* var_c
    float* ebx_1
    void* edi_1
    
    if (edi == 0 || eax_1 == 0)
        eax_2 = _fopen_s(&var_c, arg2, "rb")
        int32_t* esi_3 = var_c
        
        if (eax_2 != 0)
            esi_3 = nullptr
        
        var_c = esi_3
        
        if (esi_3 != 0)
            int32_t var_34_5 = 0
            ebx_1 = sub_50e680(&var_1c, &var_20, esi_3, &var_1c, &var_8)
            eax_2 = _fclose(esi_3)
            var_24 = ebx_1
        
        if (esi_3 != 0 && ebx_1 != 0)
            eax_2 = var_8
            
            if (eax_2 == 4)
                edi_1 = eax_2 - 2
            label_4dec73:
                int32_t esi_4 = var_20
                void* var_14 = edi_1
                int32_t eax_7 = sub_4dd730(esi_4, edi_1)
                int32_t edx_3 = var_1c
                int32_t var_18 = eax_7
                arg1[1] = esi_4
                arg1[2] = edx_3
                arg1[3] = eax_7
                arg1[4] = edi_1
                *arg1 = sub_45cd70(sub_4dd7f0(eax_7, edx_3, esi_4, edi_1))
                sub_4ddd60(&var_24, arg1)
                _free(ebx_1)
                int32_t result
                result.b = 1
                return result
            
            if (eax_2 == 3)
                edi_1 = 0x14
                goto label_4dec73
            
            char const* const var_34_8 = "TextureLoadFileWithSTB"
            var_38_3 = 0x36d
            ecx_2 = "Halt"
        else
            char const* const var_34_6 = "TextureLoadFileWithSTB"
            var_38_3 = 0x34f
            ecx_2 = "sourceSpec.pImage"
    else
        eax_2 = _fopen_s(&var_c, arg2, "rb")
        int32_t* esi_2 = var_c
        
        if (eax_2 != 0)
            esi_2 = nullptr
        
        var_c = esi_2
        
        if (esi_2 != 0)
            int32_t var_34_2 = 0
            ebx_1 = sub_50e9f0(&var_1c, &var_20, esi_2, &var_1c, &var_8)
            eax_2 = _fclose(esi_2)
            var_24 = ebx_1
        
        if (esi_2 != 0 && ebx_1 != 0)
            eax_2 = var_8
            
            if (eax_2 == 4)
                edi_1 = &eax_2[0x1c]
                goto label_4dec73
            
            if (eax_2 == 3)
                edi_1 = 0x3e8
                goto label_4dec73
            
            if (eax_2 == 1)
                edi_1 = eax_2 + 0x71
                goto label_4dec73
            
            char const* const var_34_4 = "TextureLoadFileWithSTB"
            var_38_3 = 0x349
            ecx_2 = "Halt"
        else
            char const* const var_34_3 = "TextureLoadFileWithSTB"
            var_38_3 = 0x339
            ecx_2 = "sourceSpec.pImage"
    sub_44e4d0(eax_2, &data_5559b1, ecx_2, "c:\ax2017\engine\textureimport.cpp", var_38_3, 
        "TextureLoadFileWithSTB")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
