// 函数名称: sub_4e0810
// 虚拟地址: 0x4e0810
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4e0810(void** arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_2c = 0
    int32_t var_2c = 0
    int32_t* var_10
    char* result
    
    if (sub_48c610(&var_10).b != 0)
        int32_t* edi_1 = var_10
        _fseek(edi_1, 0, 2)
        int32_t* var_2c_1 = edi_1
        int32_t eax_1 = sub_52b118()
        uint32_t (* eax_2)[0x4] = sub_45cd70(eax_1 + 1)
        *arg1 = eax_2
        int32_t var_c
        int32_t ebx_1
        
        if (_fseek(edi_1, var_c, 0) == 0)
            ebx_1.b = _fread(eax_2, eax_1, 1, edi_1) == 1
        else
            ebx_1.b = 0
        
        _fclose(edi_1)
        result = *arg1
        
        if (ebx_1.b != 0)
            arg1[0x46] = 1
            result[eax_1] = 0
            char* ecx_3 = &data_5559b1
            arg1[2] = *arg1
            arg1[1] = 0
            char* eax_7 = *(arg2 + 4)
            
            if (eax_7 != 0)
                ecx_3 = eax_7
            
            void* edx = arg1 - ecx_3 + 0x14
            void* eax_9
            
            do
                eax_9.b = *ecx_3
                ecx_3 = &ecx_3[1]
                *(edx + ecx_3 - 1) = eax_9.b
            while (eax_9.b != 0)
            
            if (sub_4e0be0(arg1).b != 0)
                result.b = 1
                return result
        else if (result != 0)
            _aligned_free_base(result)
    
    result.b = 0
    return result
}
