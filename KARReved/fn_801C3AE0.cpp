//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80194240.hpp"
#include "fn_Rider_ActionStateChange.hpp"



void fn_801C3AE0(PPC::Runtime::GCContext* context)
{
/*801C3AE0 001C08E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3AE4 001C08E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C3AE8 001C08E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3AEC 001C08EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3AF0 001C08F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C3AF4 001C08F4*/ PPC::Runtime::ASM::bl(fn_80194240);
/*801C3AF8 001C08F8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C3AFC 001C08FC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B0798 @ Get_MemoryOffset_HighBit);
/*801C3B00 001C0900*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*801C3B04 001C0904*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1994 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C3B08 001C0908*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_804B0798 @ Get_MemoryOffset_LowBit);
/*801C3B0C 001C090C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801C3B10 001C0910*/ PPC::Runtime::ASM::lwzx(context->r5, context->r3, context->r0);
/*801C3B14 001C0914*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3B18 001C0918*/ PPC::Runtime::ASM::li(context->r4, 0x32);
/*801C3B1C 001C091C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801C3B20 001C0920*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801C3B24 001C0924*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3B28 001C0928*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3B2C 001C092C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3B30 001C0930*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3B34 001C0934*/ PPC::Runtime::ASM::blr();
}