//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006A3F0.hpp"



void fn_8019BFB4(PPC::Runtime::GCContext* context)
{
/*8019BFB4 00198DB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019BFB8 00198DB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019BFBC 00198DBC*/ PPC::Runtime::ASM::mr(context->r6, context->r5);
/*8019BFC0 00198DC0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5c);
/*8019BFC4 00198DC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019BFC8 00198DC8*/ PPC::Runtime::ASM::mr(context->r0, context->r4);
/*8019BFCC 00198DCC*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*8019BFD0 00198DD0*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DD810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019BFD4 00198DD4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8019BFD8 00198DD8*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
/*8019BFDC 00198DDC*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8019BFE0 00198DE0*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*8019BFE4 00198DE4*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*8019BFE8 00198DE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019BFEC 00198DEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019BFF0 00198DF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019BFF4 00198DF4*/ PPC::Runtime::ASM::blr();
}