// 函数名称: ?setmbcp_internal@@YAHH_NQAU__acrt_ptd@@QAPAU__crt_multibyte_data@@@Z
// 虚拟地址: 0x53713a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?setmbcp_internal@@YAHH_NQAU__acrt_ptd@@QAPAU__crt_multibyte_data@@@Z(int32_t arg1 @ edi, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t esi
    int32_t* ebp_1 = update_thread_multibyte_data_internal(esi, arg1, arg2, arg3)
    uint32_t eax = getSystemCP(ebp_1[2])
    void* ecx = ebp_1[4]
    ebp_1[-3] = eax
    int32_t result
    
    if (eax != *(*(ecx + 0x48) + 4))
        int32_t var_c_1 = esi
        int32_t var_10_1 = arg1
        int32_t* eax_1 = __malloc_base(0x220)
        int32_t* edi = eax_1
        int32_t result_1
        
        if (edi == 0)
            result_1 = 0xffffffff
        else
            __builtin_memcpy(edi, *(ebp_1[4] + 0x48), 0x220)
            edi = eax_1
            uint32_t var_18_1 = ebp_1[-3]
            *edi = 0
            result_1 = __setmbcp_nolock(var_18_1, edi)
            
            if (result_1 != 0xffffffff)
                if (ebp_1[3].b == 0)
                    sub_52f4a8()
                
                int32_t* eax_5 = *(ebp_1[4] + 0x48)
                int32_t ebx_1 = *eax_5
                *eax_5 -= 1
                
                if (ebx_1 == 1)
                    void* eax_6 = ebp_1[4]
                    
                    if (*(eax_6 + 0x48) != 0x5b0478)
                        __free_base(*(eax_6 + 0x48))
                
                *edi = 1
                int32_t* ecx_6 = edi
                edi = nullptr
                *(ebp_1[4] + 0x48) = ecx_6
                
                if ((*(ebp_1[4] + 0x350) & 2) == 0 && (data_5b03e4.b & 1) == 0)
                    ebp_1[-5] = &ebp_1[4]
                    ebp_1[-4] = &ebp_1[5]
                    ebp_1[-3] = 5
                    ebp_1[-2] = 5
                    void* var_14_4 = &ebp_1[-3]
                    __crt_seh_guarded_call<class <lambda_ceb1ee4838e85a9d631eb091e2fbe199>,class <lambda_ae742caa10f662c28703da3d2ea5e57e>&,class <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>,void>::operator()<class <lambda_ceb1ee4838e85a9d631eb091e2fbe199>,class <lambda_ae742caa10f662c28703da3d2ea5e57e>&,class <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> >(
                        &ebp_1[-2], &ebp_1[-5])
                    
                    if (ebp_1[3].b != 0)
                        data_5b0294 = *ebp_1[5]
            else
                *__errno() = 0x16
                result_1 = 0xffffffff
        
        __free_base(edi)
        result = result_1
    else
        result = 0
    
    *ebp_1
    return result
}
