//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSCancelAlarm.hpp"
#include "fn_8046B9EC.hpp"
#include "fn_8046B9EC.hpp"
#include "OSSetAlarm.hpp"



void fn_SendCallback2(PPC::Runtime::GCContext* context)
{
/*8046BA10 00468810*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046BA14 00468814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046BA18 00468818*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*8046BA1C 0046881C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046BA20 00468820*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8046BA24 00468824*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*8046BA28 00468828*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8046BA2C 0046882C*/ PPC::Runtime::ASM::beq(.L_8046BA90);
/*8046BA30 00468830*/ PPC::Runtime::ASM::bge(.L_8046BA40);
/*8046BA34 00468834*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8046BA38 00468838*/ PPC::Runtime::ASM::bge(.L_8046BA48);
/*8046BA3C 0046883C*/ PPC::Runtime::ASM::b(.L_8046BA90);
RUNTIME_PPC_JUMP_LABEL(.L_8046BA40, 0x8046BA40) //this is a jump label
/*8046BA40 00468840*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8046BA44 00468844*/ PPC::Runtime::ASM::bge(.L_8046BA90);
RUNTIME_PPC_JUMP_LABEL(.L_8046BA48, 0x8046BA48) //this is a jump label
/*8046BA48 00468848*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*8046BA4C 0046884C*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8046BA50 00468850*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*8046BA54 00468854*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8046BA58 00468858*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*8046BA5C 0046885C*/ PPC::Runtime::ASM::lis(context->r3, fn_8046B9EC @ Get_MemoryOffset_HighBit);
/*8046BA60 00468860*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_8046B9EC @ Get_MemoryOffset_LowBit);
/*8046BA64 00468864*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 2);
/*8046BA68 00468868*/ PPC::Runtime::ASM::srawi(context->r0, context->r6, 31);
/*8046BA6C 0046886C*/ PPC::Runtime::ASM::mullw(context->r4, context->r0, context->r5);
/*8046BA70 00468870*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r6, context->r5);
/*8046BA74 00468874*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8046BA78 00468878*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*8046BA7C 0046887C*/ PPC::Runtime::ASM::mullw(context->r0, context->r6, context->r3);
/*8046BA80 00468880*/ PPC::Runtime::ASM::mullw(context->r6, context->r6, context->r5);
/*8046BA84 00468884*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*8046BA88 00468888*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r0);
/*8046BA8C 0046888C*/ PPC::Runtime::ASM::bl(OSSetAlarm);
RUNTIME_PPC_JUMP_LABEL(.L_8046BA90, 0x8046BA90) //this is a jump label
/*8046BA90 00468890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8046BA94 00468894*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046BA98 00468898*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*8046BA9C 0046889C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046BAA0 004688A0*/ PPC::Runtime::ASM::blr();
}