//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80334C3C.hpp"
#include "fn_80334CA8.hpp"



void fn_802AFC44(PPC::Runtime::GCContext* context)
{
/*802AFC44 002ACA44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AFC48 002ACA48*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AFC4C 002ACA4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AFC50 002ACA50*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802AFC54 002ACA54*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802AFC58 002ACA58*/ PPC::Runtime::ASM::beq(.L_802AFC8C);
/*802AFC5C 002ACA5C*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802AFC60 002ACA60*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AFC64 002ACA64*/ PPC::Runtime::ASM::li(context->r5, lbl_805D800C @ Get_MemoryOffset_SDA21);
/*802AFC68 002ACA68*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7F20 @ Get_MemoryOffset_SDA21);
/*802AFC6C 002ACA6C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802AFC70 002ACA70*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802AFC74 002ACA74*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*802AFC78 002ACA78*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 802AFC7C 002ACA7C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802AFC80 002ACA80*/ PPC::Runtime::ASM::beq(.L_802AFC8C);
/*802AFC84 002ACA84*/ PPC::Runtime::ASM::bl(fn_80334C3C);
/*802AFC88 002ACA88*/ PPC::Runtime::ASM::bl(fn_80334CA8);
RUNTIME_PPC_JUMP_LABEL(.L_802AFC8C, 0x802AFC8C) //this is a jump label
/*802AFC8C 002ACA8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AFC90 002ACA90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AFC94 002ACA94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AFC98 002ACA98*/ PPC::Runtime::ASM::blr();
}