//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_charge_whileMidAirCheck.hpp"
#include "fn_801EFBB0.hpp"



void fn_801EFB68(PPC::Runtime::GCContext* context)
{
/*801EFB68 001EC968*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EFB6C 001EC96C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EFB70 001EC970*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EFB74 001EC974*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EFB78 001EC978*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EFB7C 001EC97C*/ PPC::Runtime::ASM::bl(fn_charge_whileMidAirCheck);
/*801EFB80 001EC980*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801EFB84 001EC984*/ PPC::Runtime::ASM::beq(.L_801EFB98);
/*801EFB88 001EC988*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFB8C 001EC98C*/ PPC::Runtime::ASM::bl(fn_801EFBB0);
/*801EFB90 001EC990*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801EFB94 001EC994*/ PPC::Runtime::ASM::b(.L_801EFB9C);
RUNTIME_PPC_JUMP_LABEL(.L_801EFB98, 0x801EFB98) //this is a jump label
/*801EFB98 001EC998*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801EFB9C, 0x801EFB9C) //this is a jump label
/*801EFB9C 001EC99C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EFBA0 001EC9A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EFBA4 001EC9A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EFBA8 001EC9A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EFBAC 001EC9AC*/ PPC::Runtime::ASM::blr();
}