//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038395C(PPC::Runtime::GCContext* context)
{
/*8038395C 0038075C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80383960 00380760*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_59 @ Get_MemoryOffset_SDA21);
/*80383964 00380764*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80383968 00380768*/ PPC::Runtime::ASM::stb(context->r0, SkipAddress_59 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038396C 0038076C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*80383970 00380770*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80383974 00380774*/ PPC::Runtime::ASM::blr();
}