//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_802603E0.hpp"
#include "fn_80260460.hpp"



void fn_8026037C(PPC::Runtime::GCContext* context)
{
/*8026037C 0025D17C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80260380 0025D180*/ PPC::Runtime::ASM::mflr(context->r0);
/*80260384 0025D184*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80260388 0025D188*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026038C 0025D18C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80260390 0025D190*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80260394 0025D194*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80260398 0025D198*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8026039C 0025D19C*/ PPC::Runtime::ASM::bl(fn_80250954);
/*802603A0 0025D1A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 802603A4 0025D1A4  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*802603A8 0025D1A8*/ PPC::Runtime::ASM::bne(.L_802603B8);
/*802603AC 0025D1AC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802603B0 0025D1B0*/ PPC::Runtime::ASM::bl(fn_802603E0);
/*802603B4 0025D1B4*/ PPC::Runtime::ASM::b(.L_802603C0);
RUNTIME_PPC_JUMP_LABEL(.L_802603B8, 0x802603B8) //this is a jump label
/*802603B8 0025D1B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802603BC 0025D1BC*/ PPC::Runtime::ASM::bl(fn_80260460);
RUNTIME_PPC_JUMP_LABEL(.L_802603C0, 0x802603C0) //this is a jump label
/*802603C0 0025D1C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802603C4 0025D1C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802603C8 0025D1C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802603CC 0025D1CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802603D0 0025D1D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802603D4 0025D1D4*/ PPC::Runtime::ASM::blr();
}