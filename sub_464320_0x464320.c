// 函数名称: sub_464320
// 虚拟地址: 0x464320
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_464320(void* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, void** arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t* var_10 = arg2
    int32_t* var_10 = arg2
    int32_t var_24_1
    char const* const var_20_1
    char* ecx
    
    if (arg2[1] == 0x22)
        arg1 = sub_4459f0(arg2)
        
        if (*(arg1 + 4) != 0)
            arg3[0x1a9] = arg2
            int32_t ebx_1 = arg7
            arg3[0x1aa] = ebx_1
            int32_t esi_1 = *(*arg1 + ebx_1 * 0xc + 8)
            
            if (arg3[0x1fd] s> esi_1)
                arg3[0x1fd] = esi_1
            
            void* eax_1 = nullptr
            void* var_c_1 = nullptr
            void* ecx_7
            void** edx_2
            
            if (esi_1 s<= 0)
                edx_2 = arg6
                ecx_7 = *edx_2
            else
                do
                    *(sub_45ed30(arg3, eax_1) + 0x788) = 1
                    int32_t var_8 = 0
                    sub_464320(arg4, arg5, &var_8, ebx_1 + 1)
                    edx_2 = arg6
                    int32_t ecx_6 = var_8
                    eax_1 = var_c_1 + 1
                    ebx_1 = ebx_1 + 1 + ecx_6
                    var_c_1 = eax_1
                    ecx_7 = ecx_6 + *edx_2
                    *edx_2 = ecx_7
                while (eax_1 s< esi_1)
            
            arg1 = ecx_7 + esi_1
            arg3[0x1fd] = esi_1
            *edx_2 = arg1
            
            if (arg3[0x3fe] s>= esi_1)
                return arg1
            
            var_20_1 = "UI2MergeRecFromSublayout"
            var_24_1 = 0x1141
            ecx = "item.numTotalChildren >= item.numChildren"
        else
            var_20_1 = "UI2MergeRecFromSublayout"
            var_24_1 = 0x111d
            ecx = "Halt"
    else
        var_20_1 = "UI2DefGet"
        var_24_1 = 0x623
        ecx = "ptr->assetType == ASSET_TYPE_UI2"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\engine\ui2.cpp", var_24_1, var_20_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
