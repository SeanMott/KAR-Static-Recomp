//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80079518.hpp"



void fn_8007A9E4(PPC::Runtime::GCContext* context)
{
/*8007A9E4 000777E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007A9E8 000777E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007A9EC 000777EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007A9F0 000777F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007A9F4 000777F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8007A9F8 000777F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552978 @ Get_MemoryOffset_HighBit);
/*8007A9FC 000777FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8007AA00 00077800*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80552978 @ Get_MemoryOffset_LowBit);
/*8007AA04 00077804*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*8007AA08 00077808*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8007AA0C 0007780C*/ PPC::Runtime::ASM::bl(fn_80079518);
/*8007AA10 00077810*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007AA14 00077814*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007AA18 00077818*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007AA1C 0007781C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007AA20 00077820*/ PPC::Runtime::ASM::blr();
}