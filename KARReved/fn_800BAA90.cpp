//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B5AF0.hpp"



void fn_800BAA90(PPC::Runtime::GCContext* context)
{
/*800BAA90 000B7890*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800BAA94 000B7894*/ PPC::Runtime::ASM::mflr(context->r0);
/*800BAA98 000B7898*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800BAA9C 000B789C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BAAA0 000B78A0*/ PPC::Runtime::ASM::blt(.L_800BAAAC);
/*800BAAA4 000B78A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x20);
/*800BAAA8 000B78A8*/ PPC::Runtime::ASM::blt(.L_800BAAB4);
RUNTIME_PPC_JUMP_LABEL(.L_800BAAAC, 0x800BAAAC) //this is a jump label
/*800BAAAC 000B78AC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800BAAB0 000B78B0*/ PPC::Runtime::ASM::b(.L_800BAAC8);
RUNTIME_PPC_JUMP_LABEL(.L_800BAAB4, 0x800BAAB4) //this is a jump label
/*800BAAB4 000B78B4*/ PPC::Runtime::ASM::lis(context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BAAB8 000B78B8*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800BAABC 000B78BC*/ PPC::Runtime::ASM::addi(context->r3, context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BAAC0 000B78C0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800BAAC4 000B78C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800BAAC8, 0x800BAAC8) //this is a jump label
/*800BAAC8 000B78C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BAACC 000B78CC*/ PPC::Runtime::ASM::beq(.L_800BAAD8);
/*800BAAD0 000B78D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800BAAD4 000B78D4*/ PPC::Runtime::ASM::b(.L_800BAADC);
RUNTIME_PPC_JUMP_LABEL(.L_800BAAD8, 0x800BAAD8) //this is a jump label
/*800BAAD8 000B78D8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800BAADC, 0x800BAADC) //this is a jump label
/*800BAADC 000B78DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BAAE0 000B78E0*/ PPC::Runtime::ASM::beq(.L_800BAAEC);
/*800BAAE4 000B78E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800BAAE8 000B78E8*/ PPC::Runtime::ASM::b(.L_800BAAF0);
RUNTIME_PPC_JUMP_LABEL(.L_800BAAEC, 0x800BAAEC) //this is a jump label
/*800BAAEC 000B78EC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800BAAF0, 0x800BAAF0) //this is a jump label
/*800BAAF0 000B78F0*/ PPC::Runtime::ASM::bl(fn_800B5AF0);
/*800BAAF4 000B78F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BAAF8 000B78F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800BAAFC 000B78FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800BAB00 000B7900*/ PPC::Runtime::ASM::blr();
}