//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_80208008.hpp"
#include "fn_802151F4.hpp"



void fn_802151A8(PPC::Runtime::GCContext* context)
{
/*802151A8 00211FA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802151AC 00211FAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802151B0 00211FB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802151B4 00211FB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802151B8 00211FB8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802151BC 00211FBC*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*802151C0 00211FC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802151C4 00211FC4*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*802151C8 00211FC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802151CC 00211FCC*/ PPC::Runtime::ASM::bl(fn_80208008);
/*802151D0 00211FD0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802151D4 00211FD4*/ PPC::Runtime::ASM::beq(.L_802151E0);
/*802151D8 00211FD8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802151DC 00211FDC*/ PPC::Runtime::ASM::bl(fn_802151F4);
RUNTIME_PPC_JUMP_LABEL(.L_802151E0, 0x802151E0) //this is a jump label
/*802151E0 00211FE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802151E4 00211FE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802151E8 00211FE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802151EC 00211FEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802151F0 00211FF0*/ PPC::Runtime::ASM::blr();
}