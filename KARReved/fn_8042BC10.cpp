//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8042BC10(PPC::Runtime::GCContext* context)
{
/*8042BC10 00428A10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8042BC14 00428A14*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8042BC18 00428A18*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8042BC1C 00428A1C*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8042BC20 00428A20*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r5, 0, 24, 24);
/*8042BC24 00428A24*/ PPC::Runtime::ASM::beqlr();
/*8042BC28 00428A28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8042BC2C 00428A2C*/ PPC::Runtime::ASM::clrlslwi(context->r5, context->r5, 25, 8);
/*8042BC30 00428A30*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8042BC34 00428A34*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*8042BC38 00428A38*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8042BC3C 00428A3C*/ PPC::Runtime::ASM::blr();
}