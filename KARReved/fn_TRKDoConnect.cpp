//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "fn_803C2388.hpp"



void fn_TRKDoConnect(PPC::Runtime::GCContext* context)
{
/*803BF6CC 003BC4CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*803BF6D0 003BC4D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BF6D4 003BC4D4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056B858 @ Get_MemoryOffset_HighBit);
/*803BF6D8 003BC4D8*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BF6DC 003BC4DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*803BF6E0 003BC4E0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_18056B858 @ Get_MemoryOffset_LowBit);
/*803BF6E4 003BC4E4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803BF6E8 003BC4E8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BF6EC 003BC4EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803BF6F0 003BC4F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803BF6F4 003BC4F4*/ PPC::Runtime::ASM::bl(memset);
/*803BF6F8 003BC4F8*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*803BF6FC 003BC4FC*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*803BF700 003BC500*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803BF704 003BC504*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BF708 003BC508*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BF70C 003BC50C*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*803BF710 003BC510*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BF714 003BC514*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803BF718 003BC518*/ PPC::Runtime::ASM::bl(fn_803C2388);
/*803BF71C 003BC51C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*803BF720 003BC520*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BF724 003BC524*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BF728 003BC528*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*803BF72C 003BC52C*/ PPC::Runtime::ASM::blr();
}