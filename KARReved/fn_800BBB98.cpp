//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80068768.hpp"



void fn_800BBB98(PPC::Runtime::GCContext* context)
{
/*800BBB98 000B8998*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800BBB9C 000B899C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800BBBA0 000B89A0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800BBBA4 000B89A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BBBA8 000B89A8*/ PPC::Runtime::ASM::blt(.L_800BBBB4);
/*800BBBAC 000B89AC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x20);
/*800BBBB0 000B89B0*/ PPC::Runtime::ASM::blt(.L_800BBBBC);
RUNTIME_PPC_JUMP_LABEL(.L_800BBBB4, 0x800BBBB4) //this is a jump label
/*800BBBB4 000B89B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800BBBB8 000B89B8*/ PPC::Runtime::ASM::b(.L_800BBBD0);
RUNTIME_PPC_JUMP_LABEL(.L_800BBBBC, 0x800BBBBC) //this is a jump label
/*800BBBBC 000B89BC*/ PPC::Runtime::ASM::lis(context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BBBC0 000B89C0*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800BBBC4 000B89C4*/ PPC::Runtime::ASM::addi(context->r3, context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BBBC8 000B89C8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800BBBCC 000B89CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800BBBD0, 0x800BBBD0) //this is a jump label
/*800BBBD0 000B89D0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BBBD4 000B89D4*/ PPC::Runtime::ASM::beq(.L_800BBBE0);
/*800BBBD8 000B89D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800BBBDC 000B89DC*/ PPC::Runtime::ASM::b(.L_800BBBE4);
RUNTIME_PPC_JUMP_LABEL(.L_800BBBE0, 0x800BBBE0) //this is a jump label
/*800BBBE0 000B89E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800BBBE4, 0x800BBBE4) //this is a jump label
/*800BBBE4 000B89E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BBBE8 000B89E8*/ PPC::Runtime::ASM::bne(.L_800BBBF4);
/*800BBBEC 000B89EC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800BBBF0 000B89F0*/ PPC::Runtime::ASM::b(.L_800BBBFC);
RUNTIME_PPC_JUMP_LABEL(.L_800BBBF4, 0x800BBBF4) //this is a jump label
/*800BBBF4 000B89F4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x78);
/*800BBBF8 000B89F8*/ PPC::Runtime::ASM::bl(fn_80068768);
RUNTIME_PPC_JUMP_LABEL(.L_800BBBFC, 0x800BBBFC) //this is a jump label
/*800BBBFC 000B89FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800BBC00 000B8A00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800BBC04 000B8A04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800BBC08 000B8A08*/ PPC::Runtime::ASM::blr();
}