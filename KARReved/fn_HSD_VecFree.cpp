//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_ObjFree.hpp"



void fn_HSD_VecFree(PPC::Runtime::GCContext* context)
{
/*80417C20 00414A20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80417C24 00414A24*/ PPC::Runtime::ASM::mflr(context->r0);
/*80417C28 00414A28*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80417C2C 00414A2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417C30 00414A30*/ PPC::Runtime::ASM::beq(.L_80417C44);
/*80417C34 00414A34*/ PPC::Runtime::ASM::lis(context->r5, lbl_8058BBB8 @ Get_MemoryOffset_HighBit);
/*80417C38 00414A38*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80417C3C 00414A3C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, lbl_8058BBB8 @ Get_MemoryOffset_LowBit);
/*80417C40 00414A40*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_80417C44, 0x80417C44) //this is a jump label
/*80417C44 00414A44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417C48 00414A48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80417C4C 00414A4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80417C50 00414A50*/ PPC::Runtime::ASM::blr();
}