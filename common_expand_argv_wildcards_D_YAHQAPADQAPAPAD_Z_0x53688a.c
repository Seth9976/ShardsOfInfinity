// 函数名称: ??$common_expand_argv_wildcards@D@@YAHQAPADQAPAPAD@Z
// 虚拟地址: 0x53688a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_expand_argv_wildcards@D@@YAHQAPADQAPAPAD@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg2 != 0)
        int32_t* esi = arg1
        void* ebx_1 = nullptr
        int32_t edi
        int32_t var_38_1 = edi
        *arg2 = 0
        int32_t* edi_1 = nullptr
        char* i = *esi
        int32_t ecx_1 = 0
        int32_t* var_2c = nullptr
        int32_t var_28_1 = 0
        int32_t var_24_1 = 0
        int32_t result_1
        void* var_8
        int32_t ecx_3
        
        if (i != 0)
            do
                var_8.w = 0x3f2a
                var_8:2.b = 0
                void* eax_2 = _strpbrk(i, &var_8)
                char* ecx_2 = *esi
                
                if (eax_2 != 0)
                    int32_t result_3
                    result_3, ecx_3 = expand_argument_wildcards<char>(ecx_2, eax_2, &var_2c)
                    result_1 = result_3
                    result = result_3
                else
                    int32_t result_2
                    result_2, ecx_3 = copy_and_add_argument_to_buffer<char>(ecx_2, 0, nullptr, &var_2c)
                    result = result_2
                    result_1 = result
                
                if (result != 0)
                    edi_1 = var_2c
                    goto label_536a31
                
                esi = &arg1[1]
                arg1 = esi
                i = *esi
            while (i != 0)
            
            edi_1 = var_2c
            ecx_1 = var_28_1
        
        var_8 = nullptr
        void* eax_4 = ecx_1 - edi_1
        int32_t* var_c_1 = edi_1
        int32_t edx_3 = (eax_4 s>> 2) + 1
        int32_t var_10_1 = edx_3
        int32_t esi_5 = not.d(sbb.d(edi_1, edi_1, ecx_1 u< edi_1)) & (eax_4 + 3) u>> 2
        
        if (esi_5 != 0)
            int32_t* eax_7 = edi_1
            int32_t edx_4 = 0
            
            do
                char* ecx_4 = *eax_7
                void* eax_8
                
                do
                    eax_8.b = *ecx_4
                    ecx_4 = &ecx_4[1]
                while (eax_8.b != 0)
                ebx_1 = ebx_1 + 1 + ecx_4 - &ecx_4[1]
                eax_7 = &var_c_1[1]
                edx_4 += 1
                var_c_1 = eax_7
            while (edx_4 != esi_5)
            
            edx_3 = var_10_1
            var_8 = ebx_1
            ebx_1 = nullptr
        
        int32_t eax_10 = ___acrt_allocate_buffer_for_argv(edx_3, var_8, 1)
        
        if (eax_10 != 0)
            int32_t* var_c_2 = edi_1
            void* eax_12 = eax_10 + (var_10_1 << 2)
            void* ecx_6 = eax_12
            void* eax_13 = edi_1
            void* var_10_2 = ecx_6
            
            while (eax_13 != var_28_1)
                char* eax_14 = *eax_13
                char* edx_7 = eax_14
                void* var_14_2 = &edx_7[1]
                void* eax_15
                
                do
                    eax_15.b = *edx_7
                    edx_7 = &edx_7[1]
                while (eax_15.b != 0)
                void* var_3c_4 = edx_7 - var_14_2 + 1
                char* var_40_4 = eax_14
                void* var_44_3 = eax_12 - ecx_6 + var_8
                void* var_48_2 = ecx_6
                
                if (sub_5344b7() != 0)
                    int32_t var_4c
                    __builtin_memset(&var_4c, 0, 0x14)
                    sub_52d729()
                    noreturn
                
                *(eax_10 - edi_1 + var_c_2) = var_10_2
                eax_13 = &var_c_2[1]
                ecx_6 = var_10_2 + edx_7 - var_14_2 + 1
                var_10_2 = ecx_6
                var_c_2 = eax_13
            
            result_1 = 0
            *arg2 = eax_10
            result = 0
        else
            result = 0xffffffff
            result_1 = 0xffffffff
        
        __free_base(0)
        ecx_3 = 0
    label_536a31:
        int32_t* var_20_2 = edi_1
        int32_t ecx_10 = not.d(sbb.d(ecx_3, ecx_3, var_28_1 u< edi_1)) & (var_28_1 - edi_1 + 3) u>> 2
        int32_t var_1c_2 = ecx_10
        
        if (ecx_10 != 0)
            do
                __free_base(*edi_1)
                ebx_1 += 1
                edi_1 = &edi_1[1]
            while (ebx_1 != ecx_10)
            
            edi_1 = var_2c
            result = result_1
        
        __free_base(edi_1)
    else
        result = 0x16
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    
    return result
}
