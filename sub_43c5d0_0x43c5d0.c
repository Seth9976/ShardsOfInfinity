// 函数名称: sub_43c5d0
// 虚拟地址: 0x43c5d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_43c5d0(int32_t arg1)
{
    // 第一条实际指令: int32_t ebx = data_5bcaec
    int32_t ebx = data_5bcaec
    void* ecx = data_65aabc
    char const* const var_18
    int32_t var_14
    char const* const var_10_1
    int32_t* result
    char* ecx_1
    
    if (ecx != 0)
        result = *(data_5c2e30 + 4)
        
        if (result != *(ecx + 0x648) || ebx == 0)
        label_43c66f:
            int32_t var_10_2 = 0xffffffff
            sub_469930(arg1)
        label_43c680:
            result = data_659a64
            
            if (result u> 0xa)
                var_10_1 = "ZoomButtonUpdate"
                var_14 = 0x170d
                var_18 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                ecx_1 = "Halt"
            else
                switch (result)
                    case nullptr
                        return result
                    case 1
                        int32_t var_10_3 = 0xffffffff
                        return sub_469930(arg1)
                    case 2, 3
                        int32_t var_10_4 = 0xffffffff
                        return sub_469930(arg1)
                    case 4
                        int32_t var_10_5 = 0xffffffff
                        return sub_469930(arg1)
                    case 5
                        int32_t var_10_6 = 0xffffffff
                        return sub_469930(arg1)
                    case 6
                        int32_t var_10_7 = 0xffffffff
                        return sub_469930(arg1)
                    case 7
                        int32_t var_10_8 = 0xffffffff
                        return sub_469930(arg1)
                    case 8
                        int32_t var_10_10 = 0xffffffff
                        return sub_469930(arg1)
                    case 9
                        int32_t var_10_9 = 0xffffffff
                        return sub_469930(arg1)
                    case 0xa
                        int32_t var_10_11 = 0xffffffff
                        return sub_469930(arg1)
        else
            uint32_t edi_1 = zx.d(ebx.w)
            
            if (edi_1 u< data_5bcd80)
                int32_t edx_1 = data_5bcd7c
                result = edi_1 * 0x568
                
                if (*(result + edx_1 + 0x564) != ebx)
                    goto label_43c695
                
                result = sub_4383c0(*(edi_1 * 0x568 + edx_1 + 4), &data_659a64)
                
                if (result.b == 0)
                    goto label_43c66f
                
                if (edi_1 u>= data_5bcd80)
                    goto label_43c695
                
                void* ecx_6 = edi_1 * 0x568 + data_5bcd7c
                
                if (*(ecx_6 + 0x564) != ebx)
                    goto label_43c695
                
                if (sub_438240(ecx_6, 0) != 0)
                    goto label_43c680
                
                goto label_43c66f
            
        label_43c695:
            var_10_1 = "DataArray<struct ShGfx>::DataArrayGet"
            var_14 = 0x6d
            var_18 = "c:\ax2017\engine\dataarray.h"
            ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        var_10_1 = "GetClient"
        var_14 = 0x74
        var_18 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_18, var_14, var_10_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
