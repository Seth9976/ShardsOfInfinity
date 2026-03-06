// 函数名称: sub_4dd530
// 虚拟地址: 0x4dd530
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_4dd530(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    int32_t var_c
    char const* const ecx
    
    if (arg2 != 0)
        uint32_t ecx_1 = zx.d(arg2.w)
        
        if (ecx_1 u< result[1])
            result = *result + ecx_1 * 0x14c
            
            if (result[0x52] == arg2)
                return result
        
        char const* const var_8_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct OpenGLBufferData>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
