//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80297828.hpp"



void fn_8028EAA0(PPC::Runtime::GCContext* context)
{
/*8028EAA0 0028B8A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8028EAA4 0028B8A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028EAA8 0028B8A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028EAAC 0028B8AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028EAB0 0028B8B0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028EAB4 0028B8B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 8028EAB8 0028B8B8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028EABC 0028B8BC*/ PPC::Runtime::ASM::beq(.L_8028EB64);
/*8028EAC0 0028B8C0*/ PPC::Runtime::ASM::beq(.L_8028EB54);
/*8028EAC4 0028B8C4*/ PPC::Runtime::ASM::beq(.L_8028EB54);
/*8028EAC8 0028B8C8*/ PPC::Runtime::ASM::beq(.L_8028EB54);
/*8028EACC 0028B8CC*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0xc);
/*8028EAD0 0028B8D0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8028EAD4 0028B8D4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8028EAD8 0028B8D8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8028EADC 0028B8DC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*8028EAE0 0028B8E0*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*8028EAE4 0028B8E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8028EAE8 0028B8E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028EAEC 0028B8EC*/ PPC::Runtime::ASM::bl(fn_80297828);
/*8028EAF0 0028B8F0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8028EAF4 0028B8F4*/ PPC::Runtime::ASM::beq(.L_8028EB28);
/*8028EAF8 0028B8F8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8028EAFC 0028B8FC*/ PPC::Runtime::ASM::beq(.L_8028EB28);
/*8028EB00 0028B900*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8028EB04 0028B904*/ PPC::Runtime::ASM::beq(.L_8028EB28);
/*8028EB08 0028B908*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8028EB0C 0028B90C*/ PPC::Runtime::ASM::beq(.L_8028EB28);
/*8028EB10 0028B910*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8028EB14 0028B914*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028EB18 0028B918*/ PPC::Runtime::ASM::beq(.L_8028EB28);
/*8028EB1C 0028B91C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028EB20 0028B920*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD974 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028EB24 0028B924*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028EB28, 0x8028EB28) //this is a jump label
/*8028EB28 0028B928*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028EB2C 0028B92C*/ PPC::Runtime::ASM::beq(.L_8028EB54);
/*8028EB30 0028B930*/ PPC::Runtime::ASM::beq(.L_8028EB54);
/*8028EB34 0028B934*/ PPC::Runtime::ASM::beq(.L_8028EB54);
/*8028EB38 0028B938*/ PPC::Runtime::ASM::beq(.L_8028EB54);
/*8028EB3C 0028B93C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028EB40 0028B940*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028EB44 0028B944*/ PPC::Runtime::ASM::beq(.L_8028EB54);
/*8028EB48 0028B948*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028EB4C 0028B94C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD978 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028EB50 0028B950*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028EB54, 0x8028EB54) //this is a jump label
/*8028EB54 0028B954*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028EB58 0028B958*/ PPC::Runtime::ASM::ble(.L_8028EB64);
/*8028EB5C 0028B95C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028EB60 0028B960*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028EB64, 0x8028EB64) //this is a jump label
/*8028EB64 0028B964*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028EB68 0028B968*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028EB6C 0028B96C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028EB70 0028B970*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8028EB74 0028B974*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028EB78 0028B978*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8028EB7C 0028B97C*/ PPC::Runtime::ASM::blr();
}