//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8042BBD8(PPC::Runtime::GCContext* context)
{
/*8042BBD8 004289D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8042BBDC 004289DC*/ PPC::Runtime::ASM::li(context->r5, STRUCT_FLOAT_COUNT_1805DE368 @ Get_MemoryOffset_SDA21);
/*8042BBE0 004289E0*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x4);
/*8042BBE4 004289E4*/ PPC::Runtime::ASM::stb(context->r0, STRUCT_FLOAT_COUNT_1805DE368 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042BBE8 004289E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*8042BBEC 004289EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*8042BBF0 004289F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*8042BBF4 004289F4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*8042BBF8 004289F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*8042BBFC 004289FC*/ PPC::Runtime::ASM::mr(context->r3, context->r6);
/*8042BC00 00428A00*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r5));
/*8042BC04 00428A04*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE368 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042BC08 00428A08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8042BC0C 00428A0C*/ PPC::Runtime::ASM::blr();
}