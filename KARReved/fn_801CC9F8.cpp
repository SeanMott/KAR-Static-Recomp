//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80245B4C.hpp"
#include "fn_80245B4C.hpp"
#include "fn_80247E84.hpp"
#include "fn_80246300.hpp"
#include "fn_80247EB0.hpp"
#include "fn_80247E58.hpp"



void fn_801CC9F8(PPC::Runtime::GCContext* context)
{
/*801CC9F8 001C97F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CC9FC 001C97FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CCA00 001C9800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CCA04 001C9804*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CCA08 001C9808*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CCA0C 001C980C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801CCA10 001C9810*/ PPC::Runtime::ASM::bl(fn_80245B4C);
/*801CCA14 001C9814*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CCA18 001C9818*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801CCA1C 001C981C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801CCA20 001C9820*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*801CCA24 001C9824*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801CCA28 001C9828*/ PPC::Runtime::ASM::beq(.L_801CCA38);
/*801CCA2C 001C982C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801CCA30 001C9830*/ PPC::Runtime::ASM::bl(fn_80245B4C);
/*801CCA34 001C9834*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x700, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CCA38, 0x801CCA38) //this is a jump label
/*801CCA38 001C9838*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CCA3C 001C983C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801CCA40 001C9840*/ PPC::Runtime::ASM::bl(fn_80247E84);
/*801CCA44 001C9844*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CCA48 001C9848*/ PPC::Runtime::ASM::bl(fn_80246300);
/*801CCA4C 001C984C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CCA50 001C9850*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801CCA54 001C9854*/ PPC::Runtime::ASM::bl(fn_80247EB0);
/*801CCA58 001C9858*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CCA5C 001C985C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801CCA60 001C9860*/ PPC::Runtime::ASM::bl(fn_80247E58);
/*801CCA64 001C9864*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CCA68 001C9868*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CCA6C 001C986C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CCA70 001C9870*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CCA74 001C9874*/ PPC::Runtime::ASM::blr();
}