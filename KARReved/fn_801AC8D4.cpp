//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FF94.hpp"
#include "fn_startCharge.hpp"
#include "fn_ground_chargeAnimation.hpp"
#include "fn_ground_Spin.hpp"
#include "fn_groundSpin2?.hpp"
#include "fn_doQuickSpin.hpp"



void fn_801AC8D4(PPC::Runtime::GCContext* context)
{
/*801AC8D4 001A96D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AC8D8 001A96D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AC8DC 001A96DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC8E0 001A96E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC8E4 001A96E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AC8E8 001A96E8*/ PPC::Runtime::ASM::bl(fn_8019FF94);
/*801AC8EC 001A96EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC8F0 001A96F0*/ PPC::Runtime::ASM::bl(fn_startCharge);
/*801AC8F4 001A96F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC8F8 001A96F8*/ PPC::Runtime::ASM::bne(.L_801AC930);
/*801AC8FC 001A96FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC900 001A9700*/ PPC::Runtime::ASM::bl(fn_ground_chargeAnimation);
/*801AC904 001A9704*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC908 001A9708*/ PPC::Runtime::ASM::bne(.L_801AC930);
/*801AC90C 001A970C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC910 001A9710*/ PPC::Runtime::ASM::bl(fn_ground_Spin);
/*801AC914 001A9714*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC918 001A9718*/ PPC::Runtime::ASM::bl(fn_groundSpin2?);
/*801AC91C 001A971C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC920 001A9720*/ PPC::Runtime::ASM::bne(.L_801AC930);
/*801AC924 001A9724*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC928 001A9728*/ PPC::Runtime::ASM::bl(fn_doQuickSpin);
/*801AC92C 001A972C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801AC930, 0x801AC930) //this is a jump label
/*801AC930 001A9730*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC934 001A9734*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC938 001A9738*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AC93C 001A973C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AC940 001A9740*/ PPC::Runtime::ASM::blr();
}