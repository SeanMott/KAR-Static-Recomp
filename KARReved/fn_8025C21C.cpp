//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025C280.hpp"
#include "fn_8025C300.hpp"



void fn_8025C21C(PPC::Runtime::GCContext* context)
{
/*8025C21C 0025901C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025C220 00259020*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025C224 00259024*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025C228 00259028*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025C22C 0025902C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025C230 00259030*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025C234 00259034*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025C238 00259038*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025C23C 0025903C*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025C240 00259040*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025C244 00259044  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025C248 00259048*/ PPC::Runtime::ASM::bne(.L_8025C258);
/*8025C24C 0025904C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025C250 00259050*/ PPC::Runtime::ASM::bl(fn_8025C280);
/*8025C254 00259054*/ PPC::Runtime::ASM::b(.L_8025C260);
RUNTIME_PPC_JUMP_LABEL(.L_8025C258, 0x8025C258) //this is a jump label
/*8025C258 00259058*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025C25C 0025905C*/ PPC::Runtime::ASM::bl(fn_8025C300);
RUNTIME_PPC_JUMP_LABEL(.L_8025C260, 0x8025C260) //this is a jump label
/*8025C260 00259060*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025C264 00259064*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025C268 00259068*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025C26C 0025906C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025C270 00259070*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025C274 00259074*/ PPC::Runtime::ASM::blr();
}