//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8000AAC4.hpp"
#include "fn_80129AB8.hpp"



void fn_80129980(PPC::Runtime::GCContext* context)
{
/*80129980 00126780*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80129984 00126784*/ PPC::Runtime::ASM::mflr(context->r0);
/*80129988 00126788*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012998C 0012678C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80129990 00126790*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80129994 00126794*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80129998 00126798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8012999C 0012679C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*801299A0 001267A0*/ PPC::Runtime::ASM::bl(fn_8000AAC4);
/*801299A4 001267A4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*801299A8 001267A8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801299AC 001267AC*/ PPC::Runtime::ASM::bne(.L_801299B4);
/*801299B0 001267B0*/ PPC::Runtime::ASM::bl(fn_80129AB8);
RUNTIME_PPC_JUMP_LABEL(.L_801299B4, 0x801299B4) //this is a jump label
/*801299B4 001267B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801299B8 001267B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801299BC 001267BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801299C0 001267C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801299C4 001267C4*/ PPC::Runtime::ASM::blr();
}