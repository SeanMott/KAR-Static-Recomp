//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80186070(PPC::Runtime::GCContext* context)
{
/*80186070 00182E70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80186074 00182E74*/ PPC::Runtime::ASM::mflr(context->r0);
/*80186078 00182E78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8018607C 00182E7C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80186080 00182E80*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80186084 00182E84*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80186088 00182E88*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8018608C 00182E8C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x11b0);
/*80186090 00182E90*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80186094 00182E94*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80186098, 0x80186098) //this is a jump label
/*80186098 00182E98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8018609C 00182E9C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801860A0 00182EA0*/ PPC::Runtime::ASM::beq(.L_801860AC);
/*801860A4 00182EA4*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*801860A8 00182EA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801860AC, 0x801860AC) //this is a jump label
/*801860AC 00182EAC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*801860B0 00182EB0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*801860B4 00182EB4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x12);
/*801860B8 00182EB8*/ PPC::Runtime::ASM::blt(.L_80186098);
/*801860BC 00182EBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801860C0 00182EC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801860C4 00182EC4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801860C8 00182EC8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801860CC 00182ECC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801860D0 00182ED0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801860D4 00182ED4*/ PPC::Runtime::ASM::blr();
}