//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801941D4.hpp"
#include "fn_AS_StarLandOK.hpp"



void fn_801AC9FC(PPC::Runtime::GCContext* context)
{
/*801AC9FC 001A97FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ACA00 001A9800*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ACA04 001A9804*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACA08 001A9808*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ACA0C 001A980C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801ACA10 001A9810*/ PPC::Runtime::ASM::bl(fn_801941D4);
/*801ACA14 001A9814*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801ACA18 001A9818*/ PPC::Runtime::ASM::beq(.L_801ACA2C);
/*801ACA1C 001A981C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801ACA20 001A9820*/ PPC::Runtime::ASM::bl(fn_AS_StarLandOK);
/*801ACA24 001A9824*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801ACA28 001A9828*/ PPC::Runtime::ASM::b(.L_801ACA30);
RUNTIME_PPC_JUMP_LABEL(.L_801ACA2C, 0x801ACA2C) //this is a jump label
/*801ACA2C 001A982C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801ACA30, 0x801ACA30) //this is a jump label
/*801ACA30 001A9830*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACA34 001A9834*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ACA38 001A9838*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ACA3C 001A983C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ACA40 001A9840*/ PPC::Runtime::ASM::blr();
}