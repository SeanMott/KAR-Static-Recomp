//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___OSDispatchInterrupt.hpp"



void ExternalInterruptHandler(PPC::Runtime::GCContext* context)
{
/*803D78C4 003D46C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803D78C8 003D46C8*/ PPC::Runtime::ASM::stw(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803D78CC 003D46CC*/ PPC::Runtime::ASM::stw(context->r2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803D78D0 003D46D0*/ PPC::Runtime::ASM::stmw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*803D78D4 003D46D4*/ PPC::Runtime::ASM::mfspr(context->r0, context->GQR1);
/*803D78D8 003D46D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r4));
/*803D78DC 003D46DC*/ PPC::Runtime::ASM::mfspr(context->r0, context->GQR2);
/*803D78E0 003D46E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r4));
/*803D78E4 003D46E4*/ PPC::Runtime::ASM::mfspr(context->r0, context->GQR3);
/*803D78E8 003D46E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r4));
/*803D78EC 003D46EC*/ PPC::Runtime::ASM::mfspr(context->r0, context->GQR4);
/*803D78F0 003D46F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r4));
/*803D78F4 003D46F4*/ PPC::Runtime::ASM::mfspr(context->r0, context->GQR5);
/*803D78F8 003D46F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r4));
/*803D78FC 003D46FC*/ PPC::Runtime::ASM::mfspr(context->r0, context->GQR6);
/*803D7900 003D4700*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r4));
/*803D7904 003D4704*/ PPC::Runtime::ASM::mfspr(context->r0, context->GQR7);
/*803D7908 003D4708*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r4));
/*803D790C 003D470C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803D7910 003D4710*/ PPC::Runtime::ASM::b(fn___OSDispatchInterrupt);
}