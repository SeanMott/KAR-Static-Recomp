//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FCF0.hpp"
#include "fn_startCharge.hpp"
#include "fn_ground_chargeAnimation.hpp"
#include "fn_ground_Spin.hpp"
#include "fn_groundSpin2?.hpp"



void fn_airControl(PPC::Runtime::GCContext* context)
{
/*801AC128 001A8F28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AC12C 001A8F2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AC130 001A8F30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC134 001A8F34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC138 001A8F38*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AC13C 001A8F3C*/ PPC::Runtime::ASM::bl(fn_8019FCF0);
/*801AC140 001A8F40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC144 001A8F44*/ PPC::Runtime::ASM::bl(fn_startCharge);
/*801AC148 001A8F48*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC14C 001A8F4C*/ PPC::Runtime::ASM::bne(.L_801AC174);
/*801AC150 001A8F50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC154 001A8F54*/ PPC::Runtime::ASM::bl(fn_ground_chargeAnimation);
/*801AC158 001A8F58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC15C 001A8F5C*/ PPC::Runtime::ASM::bne(.L_801AC174);
/*801AC160 001A8F60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC164 001A8F64*/ PPC::Runtime::ASM::bl(fn_ground_Spin);
/*801AC168 001A8F68*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC16C 001A8F6C*/ PPC::Runtime::ASM::bl(fn_groundSpin2?);
/*801AC170 001A8F70*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801AC174, 0x801AC174) //this is a jump label
/*801AC174 001A8F74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC178 001A8F78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC17C 001A8F7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AC180 001A8F80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AC184 001A8F84*/ PPC::Runtime::ASM::blr();
}