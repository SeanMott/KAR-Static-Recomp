//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80228394.hpp"



void fn_802281E8(PPC::Runtime::GCContext* context)
{
/*802281E8 00224FE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802281EC 00224FEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802281F0 00224FF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802281F4 00224FF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802281F8 00224FF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802281FC 00224FFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80228200 00225000*/ PPC::Runtime::ASM::beq(.L_80228210);
/*80228204 00225004*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80228208 00225008*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r3));
/*8022820C 0022500C*/ PPC::Runtime::ASM::bl(fn_80228394);
RUNTIME_PPC_JUMP_LABEL(.L_80228210, 0x80228210) //this is a jump label
/*80228210 00225010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80228214 00225014*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80228218 00225018*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022821C 0022501C*/ PPC::Runtime::ASM::blr();
}