// 函数名称: sub_4db640
// 虚拟地址: 0x4db640
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4db640(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545928
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* arg_8
    
    if (arg_8 != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t* arg_4
    int32_t* esi = arg_4
    int32_t* var_28 = &arg_8
    int32_t** eax_4 = sub_42ce10(&arg_4, esi, 4)
    int32_t var_8_1 = 0
    void* ebx = arg_8
    void* edi = *(ebx + 4)
    int32_t result
    
    if (edi == 0)
        result = 0
    else
        void* eax_5 = sub_4db2b0(eax_4, *(edi + 0x1c), 0x8b31, esi)
        arg_8 = eax_5
        
        if (eax_5 != 0)
            void* edi_1 = *(ebx + 0x18)
            eax_5 = sub_4db2b0(eax_5, *(edi_1 + 0x1c), 0x8b30, esi)
            
            if (eax_5 != 0)
                int32_t eax_6 = sub_4db1c0(arg_8, eax_5)
                
                if (eax_6 == 0)
                    result = 0
                else
                    int32_t* eax_7 = sub_4dd470(arg1 + 0x4240)
                    *eax_7 = eax_6
                    eax_7[1] = 3
                    sub_4daf30(eax_7, ebx + 0x14, eax_6, eax_7)
                    int32_t esi_2 = *eax_7
                    eax_7[0x41] = (*__glewGetAttribLocation)(esi_2, "Position")
                    eax_7[0x42] = (*__glewGetAttribLocation)(esi_2, "Normal")
                    eax_7[0x43] = (*__glewGetAttribLocation)(esi_2, "Tangent")
                    eax_7[0x44] = (*__glewGetAttribLocation)(esi_2, "Binormal")
                    eax_7[0x45] = (*__glewGetAttribLocation)(esi_2, "Color0")
                    eax_7[0x46] = (*__glewGetAttribLocation)(esi_2, "Color1")
                    eax_7[0x47] = (*__glewGetAttribLocation)(esi_2, "TexCoord0")
                    eax_7[0x48] = (*__glewGetAttribLocation)(esi_2, "TexCoord1")
                    eax_7[0x49] = (*__glewGetAttribLocation)(esi_2, "BlendIndices")
                    eax_7[0x4a] = (*__glewGetAttribLocation)(esi_2, "BlendWeights")
                    eax_7[0x4b] = (*__glewGetAttribLocation)(esi_2, "gWorld")
                    eax_7[0x4c] = (*__glewGetAttribLocation)(esi_2, "gWorldViewProj")
                    result = eax_7[0x52]
            else
                sub_4db2b0(eax_5, *(edi_1 + 0x24), 0x8b30, esi)
                result = 0
        else
            sub_4db2b0(eax_5, *(edi + 0x24), 0x8b31, esi)
            result = 0
    
    int32_t* ecx_4 = arg_4
    
    if (ecx_4 != 0)
        ecx_4[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
