//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800B8D64(PPC::Runtime::GCContext* context)
{
/*800B8D64 000B5B64*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800B8D68 000B5B68*/ PPC::Runtime::ASM::blt(.L_800B8D74);
/*800B8D6C 000B5B6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x20);
/*800B8D70 000B5B70*/ PPC::Runtime::ASM::blt(.L_800B8D7C);
RUNTIME_PPC_JUMP_LABEL(.L_800B8D74, 0x800B8D74) //this is a jump label
/*800B8D74 000B5B74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B8D78 000B5B78*/ PPC::Runtime::ASM::b(.L_800B8D90);
RUNTIME_PPC_JUMP_LABEL(.L_800B8D7C, 0x800B8D7C) //this is a jump label
/*800B8D7C 000B5B7C*/ PPC::Runtime::ASM::lis(context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800B8D80 000B5B80*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800B8D84 000B5B84*/ PPC::Runtime::ASM::addi(context->r3, context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800B8D88 000B5B88*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800B8D8C 000B5B8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800B8D90, 0x800B8D90) //this is a jump label
/*800B8D90 000B5B90*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B8D94 000B5B94*/ PPC::Runtime::ASM::beq(.L_800B8DA0);
/*800B8D98 000B5B98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800B8D9C 000B5B9C*/ PPC::Runtime::ASM::b(.L_800B8DA4);
RUNTIME_PPC_JUMP_LABEL(.L_800B8DA0, 0x800B8DA0) //this is a jump label
/*800B8DA0 000B5BA0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B8DA4, 0x800B8DA4) //this is a jump label
/*800B8DA4 000B5BA4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B8DA8 000B5BA8*/ PPC::Runtime::ASM::beq(.L_800B8DB4);
/*800B8DAC 000B5BAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*800B8DB0 000B5BB0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800B8DB4, 0x800B8DB4) //this is a jump label
/*800B8DB4 000B5BB4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B8DB8 000B5BB8*/ PPC::Runtime::ASM::blr();
}