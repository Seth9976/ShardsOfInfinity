// 函数名称: sub_452560
// 虚拟地址: 0x452560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_452560(int32_t arg1, int32_t arg2, int32_t arg3, char** arg4)
{
    // 第一条实际指令: int32_t* result = data_65acf4
    int32_t* result = data_65acf4
    void* ebx = data_dfc4f4
    
    if (arg3 != 0)
        int32_t esi_1 = result[1]
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< esi_1)
            int32_t edi_1 = *result
            result = *(edx * 0x4c + edi_1 + 0x48)
            
            if (result == arg3)
                void* edi_2
                
                if (edx u< esi_1)
                    edi_2 = edx * 0x4c + edi_1
                    
                    if (result != arg3)
                        edi_2 = nullptr
                else
                    edi_2 = nullptr
                
                int32_t* result_2 = *(ebx + 0xc)
                char const* const var_38_1
                int32_t var_34_1
                char const* const var_30_1
                char* ecx
                
                if (result_2 == 0)
                    var_30_1 = "DefinitionGetSize"
                    var_34_1 = 0x6d
                    var_38_1 = "c:\ax2017\engine\definition.cpp"
                    ecx = "pDefMap->definitionSize != 0"
                label_45266d:
                    sub_44e4d0(result_2, &data_5559b1, ecx, var_38_1, var_34_1, var_30_1)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t* result_1 = result_2
                int32_t var_c
                int32_t* var_10_1 = &var_c
                var_c = 0
                int32_t var_20 = 0
                int32_t var_1c_1 = 0
                char var_14_1 = 1
                int32_t var_38_2 = 0xf42b2
                sub_450c90(sub_483010(&var_20, ebx, arg4, 0, &var_20), result_1, edi_2 + 0x3c)
                result_2 = sub_4509d0(edi_2 + 0x3c, result_1)
                void** esi_2 = *(edi_2 + 0x40)
                
                if (esi_2 == 0)
                    var_30_1 = "XList<struct NetBuffer *>::GetTail"
                    var_34_1 = 0x5a
                    var_38_1 = "c:\ax2017\engine\xlist.h"
                    ecx = "mpTail != NULL"
                    goto label_45266d
                
                void* esi_3 = *esi_2
                char* eax_5 = *(esi_3 + 0xfde8) + esi_3 + *(esi_3 + 0xfdec)
                sub_483280(eax_5, ebx, arg4, eax_5, nullptr)
                result = result_1
                *(esi_3 + 0xfdec) += result
    
    return result
}
