//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_ObjAllocInit.hpp"



void fn_HSD_VecInitAllocData(PPC::Runtime::GCContext* context)
{
/*80417CE0 00414AE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80417CE4 00414AE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80417CE8 00414AE8*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058BBB8 @ Get_MemoryOffset_HighBit);
/*80417CEC 00414AEC*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*80417CF0 00414AF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417CF4 00414AF4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058BBB8 @ Get_MemoryOffset_LowBit);
/*80417CF8 00414AF8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80417CFC 00414AFC*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80417D00 00414B00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417D04 00414B04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80417D08 00414B08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80417D0C 00414B0C*/ PPC::Runtime::ASM::blr();
}