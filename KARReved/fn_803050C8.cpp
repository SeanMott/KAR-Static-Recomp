//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803050C8(PPC::Runtime::GCContext* context)
{
/*803050C8 00301EC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803050CC 00301ECC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803050D0 00301ED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803050D4 00301ED4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803050D8 00301ED8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r12));
/*803050DC 00301EDC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803050E0 00301EE0*/ PPC::Runtime::ASM::bctrl();
/*803050E4 00301EE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803050E8 00301EE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803050EC 00301EEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803050F0 00301EF0*/ PPC::Runtime::ASM::blr();
}