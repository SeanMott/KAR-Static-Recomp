//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8022B0F0(PPC::Runtime::GCContext* context)
{
/*8022B0F0 00227EF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8022B0F4 00227EF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8022B0F8 00227EF8*/ PPC::Runtime::ASM::bne(.L_8022B110);
/*8022B0FC 00227EFC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022B100 00227F00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*8022B104 00227F04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8022B108 00227F08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*8022B10C 00227F0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8022B110, 0x8022B110) //this is a jump label
/*8022B110 00227F10*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8022B114 00227F14*/ PPC::Runtime::ASM::blr();
}