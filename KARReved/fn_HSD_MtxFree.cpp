//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_ObjFree.hpp"



void fn_HSD_MtxFree(PPC::Runtime::GCContext* context)
{
/*80417CA0 00414AA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80417CA4 00414AA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80417CA8 00414AA8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80417CAC 00414AAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417CB0 00414AB0*/ PPC::Runtime::ASM::beq(.L_80417CC4);
/*80417CB4 00414AB4*/ PPC::Runtime::ASM::lis(context->r5, lbl_8058BBE4 @ Get_MemoryOffset_HighBit);
/*80417CB8 00414AB8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80417CBC 00414ABC*/ PPC::Runtime::ASM::addi(context->r3, context->r5, lbl_8058BBE4 @ Get_MemoryOffset_LowBit);
/*80417CC0 00414AC0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_80417CC4, 0x80417CC4) //this is a jump label
/*80417CC4 00414AC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417CC8 00414AC8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80417CCC 00414ACC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80417CD0 00414AD0*/ PPC::Runtime::ASM::blr();
}