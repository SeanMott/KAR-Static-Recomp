//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_ObjAllocInit.hpp"



void fn_HSD_MtxInitAllocData(PPC::Runtime::GCContext* context)
{
/*80417D1C 00414B1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80417D20 00414B20*/ PPC::Runtime::ASM::mflr(context->r0);
/*80417D24 00414B24*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058BBE4 @ Get_MemoryOffset_HighBit);
/*80417D28 00414B28*/ PPC::Runtime::ASM::li(context->r4, 0x30);
/*80417D2C 00414B2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417D30 00414B30*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058BBE4 @ Get_MemoryOffset_LowBit);
/*80417D34 00414B34*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80417D38 00414B38*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80417D3C 00414B3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417D40 00414B40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80417D44 00414B44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80417D48 00414B48*/ PPC::Runtime::ASM::blr();
}