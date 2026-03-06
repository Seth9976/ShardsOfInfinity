// 函数名称: sub_4a3270
// 虚拟地址: 0x4a3270
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4a3270(int32_t* arg1)
{
    // 第一条实际指令: void var_c98
    void var_c98
    int32_t eax_1 = __security_cookie ^ &var_c98
    uint8_t var_a40[0x108]
    GetCurrentDirectoryA(0x104, &var_a40)
    void var_418
    GetModuleFileNameA(nullptr, &var_418, 0x104)
    int32_t var_c90
    char var_c48[0x100]
    int32_t Symbol
    void var_518
    __splitpath(&var_418, &var_c90, &var_c48, &Symbol, &var_518)
    void pathName
    __makepath(&pathName, &var_c90, &var_c48, nullptr, nullptr)
    SetCurrentDirectoryA(&pathName)
    HANDLE hProcess = GetCurrentProcess()
    int32_t i = 0
    
    if (*arg1 s> 0)
        void* edi_1 = &arg1[1]
        
        do
            var_c90 = *edi_1
            uint64_t pdwDisplacement_1 = 0
            _memset(&Symbol, 0, 0x420)
            int32_t qwAddr
            int32_t edx_1
            edx_1:qwAddr = sx.q(var_c90)
            Symbol = 0x20
            int32_t var_920_1 = 0x400
            int32_t var_cac_2 = edx_1
            
            if (SymGetSymFromAddr64(hProcess, qwAddr, &pdwDisplacement_1, &Symbol) != 0)
                _memset(&var_418, 0, 0x400)
                void name
                UnDecorateSymbolName(&name, &var_418, 0x400, 0x1000)
                uint32_t pdwDisplacement = 0
                int32_t var_cac_5 = edx_1
                struct IMAGEHLP_LINE64 Line64
                __builtin_memset(&Line64, 0, 0x18)
                Line64.SizeOfStruct = 0x18
                
                if (SymGetLineFromAddr64(hProcess, qwAddr, &pdwDisplacement, &Line64) != 0)
                    void* var_ca4_6 = &name
                    uint32_t LineNumber = Line64.LineNumber
                    CHAR* FileName = Line64.FileName
                    sub_44e360("  %s(%d): %s")
                else
                    sub_44e360("  unknown file")
            else
                enum WIN32_ERROR var_ca4_4 = GetLastError()
                int32_t var_ca8_3 = var_c90
                sub_44e360("  unknown symbol 0x%X (error %d)")
            
            i += 1
            edi_1 += 4
        while (i s< *arg1)
    
    BOOL result = SetCurrentDirectoryA(&var_a40)
    @__security_check_cookie@4(eax_1 ^ &var_c98)
    return result
}
