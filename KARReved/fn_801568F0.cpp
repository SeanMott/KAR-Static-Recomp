//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131214.hpp"
#include "fn_80059520.hpp"



void fn_801568F0(PPC::Runtime::GCContext* context)
{
/*801568F0 001536F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801568F4 001536F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801568F8 001536F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801568FC 001536FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80156900 00153700*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80156904 00153704*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80156908 00153708*/ PPC::Runtime::ASM::bl(fn_80131214);
/*8015690C 0015370C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1239 @ Get_MemoryOffset_HighBit);
/*80156910 00153710*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80156914 00153714*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1239 @ Get_MemoryOffset_LowBit);
/*80156918 00153718*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8015691C 0015371C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x6a8);
/*80156920 00153720*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80156924 00153724*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80156928 00153728*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015692C 0015372C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80156930 00153730*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80156934 00153734*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80156938 00153738*/ PPC::Runtime::ASM::blr();
}